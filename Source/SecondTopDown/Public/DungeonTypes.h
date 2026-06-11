// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "DungeonTypes.generated.h" // Must be the last include

UENUM(BlueprintType)
enum class ECardinals : uint8
{
    North,
    South,
    East,
    West
};


UENUM(BlueprintType)
enum class ERoomType : uint8
{
    Small,
    Medium,
    Large,
    Start,
    Boss,
    Objective
};

USTRUCT(BlueprintType)
struct FDoorData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector RelativeLocation = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FRotator RelativeRotation = FRotator::ZeroRotator;
};