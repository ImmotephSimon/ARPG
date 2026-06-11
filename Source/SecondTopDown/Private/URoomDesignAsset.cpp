#include "URoomDesignAsset.h"

TArray<FDoorData> URoomDesignAsset::GetRelativeDoorTransforms() const
{
    TArray<FDoorData> OutDoors;

    for (const auto& [MapKey, MapValue] : Doors)
    {
        FDoorData NewDoor;
        FVector OffsetVector = FVector::ZeroVector;
        int OffsetValue = -150.0f + 50.0f;
        switch (MapValue)
        {
        case ECardinals::North:
        case ECardinals::South:
            OffsetVector.X = 0.0f;
            OffsetVector.Y = MapKey.Y * OffsetValue;
            OffsetVector.Z = 0.0f;
            break;

        case ECardinals::East:
        case ECardinals::West:
            OffsetVector.X = MapKey.X * OffsetValue;
            OffsetVector.Y = 0.0f;
            OffsetVector.Z = 0.0f;
            break;
        }

        NewDoor.RelativeLocation = RoomExtent * MapKey + OffsetVector;

        float TargetYaw = 0.0f;
        switch (MapValue)
        {
        case ECardinals::North: TargetYaw = 0.0f;   break;
        case ECardinals::South: TargetYaw = 180.0f; break;
        case ECardinals::East:  TargetYaw = 90.0f;  break;
        case ECardinals::West:  TargetYaw = -90.0f; break;
        }

        NewDoor.RelativeRotation = FRotator(0.0f, TargetYaw, 0.0f);
        OutDoors.Add(NewDoor);
    }

    return OutDoors;
}