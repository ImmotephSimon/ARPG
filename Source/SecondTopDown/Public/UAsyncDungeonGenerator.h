#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UDungeonGenerationEngine.h"
#include "UAsyncDungeonGenerator.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDungeonGenerationDelegate, const TArray<FDungeonNode>&, Results);

UCLASS()
class SECONDTOPDOWN_API UAsyncDungeonGenerator : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintAssignable)
    FDungeonGenerationDelegate OnComplete;

    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "Dungeon Generation")
    static UAsyncDungeonGenerator* GenerateDungeonAsync(
        UObject* WorldContextObject,
        const FDungeonGenerationConfig& Config,
        int32 MaxRooms,
        int32 MinimumDepth);

    virtual void Activate() override;

private:
    UPROPERTY()
    FDungeonGenerationConfig StoredConfig;

    UPROPERTY()
    int32 StoredMaxRooms = 0;

    UPROPERTY()
    int32 StoredMinimumDepth = 0;

    bool bIsRunning = false;
};