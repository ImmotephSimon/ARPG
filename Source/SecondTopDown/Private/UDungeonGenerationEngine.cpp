#include "UDungeonGenerationEngine.h"

DEFINE_LOG_CATEGORY_STATIC(LogDungeonGen, Log, All);

TArray<FDungeonNode> UDungeonGenerationEngine::GenerateLayout(const FDungeonGenerationConfig& Config, int32 MaxRooms, int32 MinimumDepth)
{
    TArray<FDungeonNode> RawNodes;
    RawNodes.Reserve(MaxRooms + 16);

    GrowPhysicalTree(Config, RawNodes, MaxRooms);

    if (RawNodes.Num() == 0) return {};

    TSet<int32> RequiredNodes = IdentifyRequiredNodes(RawNodes, MinimumDepth);

    if (!RequiredNodes.Contains(0)) return {};

    TArray<FDungeonNode> Cleaned = BuildCleanedTree(Config, RawNodes, RequiredNodes);

    AppendBossRooms(Config, Cleaned);

    return Cleaned;
}

void UDungeonGenerationEngine::GrowPhysicalTree(const FDungeonGenerationConfig& Config, TArray<FDungeonNode>& OutNodes, int32 MaxRooms)
{
    if (Config.StartRooms.Num() == 0 || Config.StandardRooms.Num() == 0) return;

    const FRoomGenerationTemplate& Start = Config.StartRooms[FMath::RandRange(0, Config.StartRooms.Num() - 1)];
    if (Start.Doors.Num() == 0) return;

    OutNodes.Reset();

    // Use factory function for Root
    FDungeonNode Root = CreateNodeFromTemplate(Start, INDEX_NONE, 1, FTransform::Identity, INDEX_NONE);
    OutNodes.Add(Root);

    TArray<int32> Open;
    Open.Add(0);

    while (Open.Num() > 0 && OutNodes.Num() < MaxRooms)
    {
        int32 ParentIndex = Open.Pop();
        FDungeonNode CurrentParent = OutNodes[ParentIndex];
        const FRoomGenerationTemplate* ParentTemplate = FindTemplateByID(Config, CurrentParent.TemplateID);

        for (int32 DoorIdx = 0; DoorIdx < ParentTemplate->Doors.Num(); DoorIdx++)
        {
            if (OutNodes.Num() >= MaxRooms) break;

            bool bDoorUsed = false;
            for (const auto& Pair : OutNodes[ParentIndex].ChildToDoorIndex)
            {
                if (Pair.Value == DoorIdx) { bDoorUsed = true; break; }
            }
            if (bDoorUsed) continue;

            bool bPlaced = false;

            for (int32 Attempt = 0; Attempt < 12 && !bPlaced; Attempt++)
            {
                const FRoomGenerationTemplate& ChildTemplate = Config.StandardRooms[FMath::RandRange(0, Config.StandardRooms.Num() - 1)];
                int32 ChildDoor = FMath::RandRange(0, ChildTemplate.Doors.Num() - 1);

                FTransform ChildTransform = CalculateSnappedTransform(
                    OutNodes[ParentIndex].WorldTransform,
                    ParentTemplate->Doors[DoorIdx],
                    ChildTemplate.Doors[ChildDoor]
                );

                if (WouldOverlapExistingRoom(Config, ChildTemplate.RoomExtent, ChildTransform, OutNodes)) continue;

                // Use factory function for Standard Child Rooms
                FDungeonNode Child = CreateNodeFromTemplate(
                    ChildTemplate,
                    ParentIndex,
                    OutNodes[ParentIndex].Depth + 1,
                    ChildTransform,
                    ChildDoor
                );

                int32 ChildIndex = OutNodes.Add(Child);
                OutNodes[ParentIndex].ChildrenIndices.Add(ChildIndex);
                OutNodes[ParentIndex].ChildToDoorIndex.Add(ChildIndex, DoorIdx);

                Open.Add(ChildIndex);
                bPlaced = true;
            }
        }
    }
}

TSet<int32> UDungeonGenerationEngine::IdentifyRequiredNodes(const TArray<FDungeonNode>& RawNodes, int32 MinimumDepth)
{
    TSet<int32> Required;
    for (int32 i = 0; i < RawNodes.Num(); i++)
    {
        if (RawNodes[i].ChildrenIndices.Num() == 0 && RawNodes[i].Depth >= MinimumDepth)
        {
            int32 Current = i;
            while (Current != INDEX_NONE)
            {
                Required.Add(Current);
                Current = RawNodes[Current].ParentIndex;
            }
        }
    }
    return Required;
}

TArray<FDungeonNode> UDungeonGenerationEngine::BuildCleanedTree(const FDungeonGenerationConfig& Config, const TArray<FDungeonNode>& RawNodes, const TSet<int32>& Required)
{
    TArray<FDungeonNode> Cleaned;
    Cleaned.Reserve(Required.Num());

    TArray<int32> Map;
    Map.Init(INDEX_NONE, RawNodes.Num());

    for (int32 i = 0; i < RawNodes.Num(); i++)
    {
        if (Required.Contains(i))
        {
            // Explicitly copies the entire structure layout smoothly (Asset soft pointers included)
            Map[i] = Cleaned.Add(RawNodes[i]);
        }
    }

    for (int32 i = 0; i < RawNodes.Num(); i++)
    {
        if (!Required.Contains(i)) continue;

        FDungeonNode& Node = Cleaned[Map[i]];
        Node.ChildrenIndices.Reset();
        Node.ChildToDoorIndex.Empty();

        if (Node.ParentIndex != INDEX_NONE)
        {
            Node.ParentIndex = Map[Node.ParentIndex];
        }

        for (int32 Child : RawNodes[i].ChildrenIndices)
        {
            if (!Required.Contains(Child)) continue;

            int32 NewChild = Map[Child];
            Node.ChildrenIndices.Add(NewChild);
            Node.ChildToDoorIndex.Add(NewChild, RawNodes[i].ChildToDoorIndex.FindRef(Child));
        }
    }

    return Cleaned;
}

void UDungeonGenerationEngine::AppendBossRooms(const FDungeonGenerationConfig& Config, TArray<FDungeonNode>& Nodes)
{
    if (Config.BossRooms.Num() == 0) return;

    const int32 OriginalSize = Nodes.Num();

    for (int32 i = 0; i < OriginalSize; i++)
    {
        if (Nodes[i].ChildrenIndices.Num() != 0) continue;

        const FRoomGenerationTemplate& Boss = Config.BossRooms[FMath::RandRange(0, Config.BossRooms.Num() - 1)];
        const FRoomGenerationTemplate* ParentTemplate = FindTemplateByID(Config, Nodes[i].TemplateID);

        if (!ParentTemplate) continue;

        int32 ExitDoor = INDEX_NONE;
        for (int32 d = 0; d < ParentTemplate->Doors.Num(); d++)
        {
            if (d != Nodes[i].EntranceDoorIndex)
            {
                ExitDoor = d;
                break;
            }
        }

        if (ExitDoor == INDEX_NONE) continue;

        int32 BossDoor = FMath::RandRange(0, Boss.Doors.Num() - 1);

        FTransform BossTransform = CalculateSnappedTransform(
            Nodes[i].WorldTransform,
            ParentTemplate->Doors[ExitDoor],
            Boss.Doors[BossDoor]
        );

        // Use factory function for Boss Nodes
        FDungeonNode BossNode = CreateNodeFromTemplate(
            Boss,
            i,
            Nodes[i].Depth + 1,
            BossTransform,
            BossDoor
        );

        int32 BossIndex = Nodes.Add(BossNode);
        Nodes[i].ChildrenIndices.Add(BossIndex);
        Nodes[i].ChildToDoorIndex.Add(BossIndex, ExitDoor);
    }
}

const FRoomGenerationTemplate* UDungeonGenerationEngine::FindTemplateByID(const FDungeonGenerationConfig& Config, const FName& ID)
{
    if (Config.DeadEndRoom.TemplateID == ID) return &Config.DeadEndRoom;

    if (const FRoomGenerationTemplate* Found = Config.StandardRooms.FindByPredicate([ID](const FRoomGenerationTemplate& T) { return T.TemplateID == ID; })) return Found;
    if (const FRoomGenerationTemplate* Found = Config.StartRooms.FindByPredicate([ID](const FRoomGenerationTemplate& T) { return T.TemplateID == ID; })) return Found;

    return Config.BossRooms.FindByPredicate([ID](const FRoomGenerationTemplate& T) { return T.TemplateID == ID; });
}

FTransform UDungeonGenerationEngine::CalculateSnappedTransform(const FTransform& ParentTransform, const FDoorData& ParentDoor, const FDoorData& ChildDoor)
{
    FVector ParentDoorWorldPos = ParentTransform.TransformPosition(ParentDoor.RelativeLocation);
    FVector ParentDoorWorldForward = ParentTransform.TransformVectorNoScale(ParentDoor.RelativeRotation.Vector()).GetSafeNormal();

    FVector DesiredChildDoorForward = -ParentDoorWorldForward;
    FQuat ChildDoorWorldRotation = FRotationMatrix::MakeFromX(DesiredChildDoorForward).ToQuat();

    FQuat ChildRoomRotation = ChildDoorWorldRotation * ChildDoor.RelativeRotation.Quaternion().Inverse();

    FTransform TargetRoomTransform(ChildRoomRotation, FVector::ZeroVector);
    FVector ChildDoorLocalOffset = TargetRoomTransform.TransformPosition(ChildDoor.RelativeLocation);

    FVector TargetRoomLocation = ParentDoorWorldPos - ChildDoorLocalOffset;

    return FTransform(ChildRoomRotation, TargetRoomLocation);
}

bool UDungeonGenerationEngine::WouldOverlapExistingRoom(const FDungeonGenerationConfig& Config, const FVector& CheckingExtent, const FTransform& CheckingTransform, const TArray<FDungeonNode>& CurrentNodes)
{
    const FVector Center = CheckingTransform.GetLocation();
    const FVector SafeExtent = CheckingExtent - FVector(2.0f);
    const FBox NewBox(Center - SafeExtent, Center + SafeExtent);

    for (const FDungeonNode& Node : CurrentNodes)
    {
        const FRoomGenerationTemplate* OtherTemplate = FindTemplateByID(Config, Node.TemplateID);
        if (!OtherTemplate) continue;

        const FVector OtherCenter = Node.WorldTransform.GetLocation();
        const FVector OtherExtent = OtherTemplate->RoomExtent - FVector(2.0f);

        FBox OtherBox(OtherCenter - OtherExtent, OtherCenter + OtherExtent);

        if (NewBox.Intersect(OtherBox)) return true;
    }
    return false;
}