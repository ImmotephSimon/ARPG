// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "ScalableFloat.h"
#include "UPDA_Restriction.generated.h"
/**
 * 
 */
UENUM(BlueprintType)
enum class EModSlot : uint8
{
    Unset    UMETA(DisplayName = "Unset"),
    Prefix   UMETA(DisplayName = "Prefix"),
    Suffix   UMETA(DisplayName = "Suffix")
};

UENUM(BlueprintType)
enum class EEquipmentType : uint8
{
    Unset      UMETA(DisplayName = "Unset"),
    Weapon     UMETA(DisplayName = "Weapon"),
    Armour     UMETA(DisplayName = "Armour"),
    Boots      UMETA(DisplayName = "Boots"),
    Jewellery  UMETA(DisplayName = "Jewellery"),
    Utility    UMETA(DisplayName = "Utility")
};

UENUM(BlueprintType)
enum class EModifierOp : uint8 {
    Additive,
    Multiplicative,
    Added,
    FlatMin,
    FlatMax,
    Override
};

UCLASS()
class SECONDTOPDOWN_API UPDA_Restriction : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FGameplayTagContainer ScopeTags;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSoftClassPtr<UObject> ScopeClass;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FGuid ScopeGuid;

    UFUNCTION(BlueprintCallable, Category = "Restriction")
    bool IsMet(const FGameplayTag& ContextTag, UObject* ContextObj, FGuid ContextGuid) const;
};

USTRUCT(BlueprintType)
struct FModifierRow : public FTableRowBase {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float Weight = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float BaseValue = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FGameplayTag Modifier;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSoftObjectPtr<UPDA_Restriction> Restriction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EModifierOp MathOp = EModifierOp::Additive;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EModSlot SlotType = EModSlot::Unset;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSet<EEquipmentType> AllowedTypes;
};

USTRUCT(BlueprintType)
struct FUpgradeDto 
{
    GENERATED_BODY()
 
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FinalValue = 0.0f;
 
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EModifierOp MathOp = EModifierOp::Additive;
 
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UPDA_Restriction* Restriction;
 
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag Modifier;
};