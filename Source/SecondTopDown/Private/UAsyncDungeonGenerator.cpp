#include "UAsyncDungeonGenerator.h"
#include "Async/Async.h"

UAsyncDungeonGenerator* UAsyncDungeonGenerator::GenerateDungeonAsync(
    UObject* WorldContextObject,
    const FDungeonGenerationConfig& Config,
    int32 MaxRooms,
    int32 MinimumDepth)
{
    UAsyncDungeonGenerator* Action = NewObject<UAsyncDungeonGenerator>();

    Action->StoredConfig = Config;
    Action->StoredMaxRooms = MaxRooms;
    Action->StoredMinimumDepth = MinimumDepth;

    Action->RegisterWithGameInstance(WorldContextObject);
    return Action;
}

void UAsyncDungeonGenerator::Activate()
{
    if (bIsRunning)
    {
        UE_LOG(LogTemp, Warning, TEXT("Dungeon generation already running - ignored"));
        return;
    }

    bIsRunning = true;
    UE_LOG(LogTemp, Log, TEXT("Dungeon Generator: Activate called, spinning up thread..."));

    TWeakObjectPtr<UAsyncDungeonGenerator> WeakThis(this);

    Async(EAsyncExecution::ThreadPool, [WeakThis]()
        {
            if (!WeakThis.IsValid()) return;

            TArray<FDungeonNode> Result = UDungeonGenerationEngine::GenerateLayout(
                WeakThis->StoredConfig,
                WeakThis->StoredMaxRooms,
                WeakThis->StoredMinimumDepth
            );

            AsyncTask(ENamedThreads::GameThread, [WeakThis, Result = MoveTemp(Result)]()
                {
                    if (!WeakThis.IsValid()) return;

                    WeakThis->OnComplete.Broadcast(Result);
                    WeakThis->bIsRunning = false;
                    WeakThis->SetReadyToDestroy();
                });
        });
}