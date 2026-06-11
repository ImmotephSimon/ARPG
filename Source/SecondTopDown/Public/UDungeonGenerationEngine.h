#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "URoomDesignAsset.h"
#include "UDungeonGenerationEngine.generated.h"


USTRUCT(BlueprintType)
struct FRoomGenerationTemplate
{
    GENERATED_BODY()

    // Human-readable unique identifier (e.g., "Start_Room", "Hallway_01")
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName TemplateID = NAME_None;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSoftObjectPtr<URoomDesignAsset> SourceAsset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector RoomExtent = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDoorData> Doors;
};

USTRUCT(BlueprintType)
struct FDungeonGenerationConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FRoomGenerationTemplate> StartRooms;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FRoomGenerationTemplate> StandardRooms;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FRoomGenerationTemplate> BossRooms;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FRoomGenerationTemplate DeadEndRoom;
};

USTRUCT(BlueprintType)
struct FDungeonNode
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Dungeon")
    TSoftObjectPtr<URoomDesignAsset> Asset;

    // Maps back to the configuration template for door layout lookups
    UPROPERTY(BlueprintReadOnly)
    FName TemplateID = NAME_None;

    UPROPERTY(BlueprintReadOnly)
    FTransform WorldTransform = FTransform::Identity;

    UPROPERTY(BlueprintReadOnly)
    int32 ParentIndex = INDEX_NONE;

    UPROPERTY(BlueprintReadOnly)
    TArray<int32> ChildrenIndices;

    UPROPERTY(BlueprintReadOnly)
    int32 Depth = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 EntranceDoorIndex = INDEX_NONE;

    // Key: Child Node Index -> Value: Parent Door Index on THIS room
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, int32> ChildToDoorIndex;

    // Door indices on this room that need a dead-end mesh spawned
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> DeadEndDoorIndices;
};

UCLASS()
class SECONDTOPDOWN_API UDungeonGenerationEngine : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Dungeon Generation")
    static TArray<FDungeonNode> GenerateLayout(const FDungeonGenerationConfig& Config, int32 MaxRooms, int32 MinimumDepth);

private:
    static void GrowPhysicalTree(const FDungeonGenerationConfig& Config, TArray<FDungeonNode>& OutNodes, int32 MaxRooms);
    static TSet<int32> IdentifyRequiredNodes(const TArray<FDungeonNode>& RawNodes, int32 MinimumDepth);
    static TArray<FDungeonNode> BuildCleanedTree(const FDungeonGenerationConfig& Config, const TArray<FDungeonNode>& RawNodes, const TSet<int32>& RequiredNodes);
    static void AppendBossRooms(const FDungeonGenerationConfig& Config, TArray<FDungeonNode>& CleanedNodes);

    // Helpers
    static FDungeonNode CreateNodeFromTemplate(
        const FRoomGenerationTemplate& Template,
        int32 ParentIndex,
        int32 Depth,
        const FTransform& Transform,
        int32 EntranceDoor)
    {
        FDungeonNode NewNode;
        NewNode.TemplateID = Template.TemplateID;
        NewNode.Asset = Template.SourceAsset;
        NewNode.ParentIndex = ParentIndex;
        NewNode.Depth = Depth;
        NewNode.WorldTransform = Transform;
        NewNode.EntranceDoorIndex = EntranceDoor;
        return NewNode;
    }

    static const FRoomGenerationTemplate* FindTemplateByID(const FDungeonGenerationConfig& Config, const FName& ID);
    static FTransform CalculateSnappedTransform(const FTransform& ParentTransform, const FDoorData& ParentDoor, const FDoorData& ChildDoor);
    static bool WouldOverlapExistingRoom(
        const FDungeonGenerationConfig& Config,
        const FVector& CheckingExtent,
        const FTransform& CheckingTransform,
        const TArray<FDungeonNode>& CurrentNodes);
};