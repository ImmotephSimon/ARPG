#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DungeonTypes.h"
#include "URoomDesignAsset.generated.h"



UCLASS(BlueprintType)
class SECONDTOPDOWN_API URoomDesignAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Room Design")
    ERoomType DifficultyRating = ERoomType::Medium;

    // The actual level file to load
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Room Design")
    TSoftObjectPtr<UWorld> Level;

    // Used for overlap/collision detection in Phase 1
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Room Design")
    FVector RoomExtent;

    // The physical sockets. 
    // Generator iterates this to decide how many branches to grow.
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Room Design")
    TMap<FVector, ECardinals> Doors;

    UFUNCTION(BlueprintPure, Category = "Room Data")
    TArray<FDoorData> GetRelativeDoorTransforms() const;
};