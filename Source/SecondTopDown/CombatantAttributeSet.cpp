// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatantAttributeSet.h"
#include "GameplayEffectExtension.h"  // Needed for FGameplayEffectModCallbackData
#include "GASCharacter.h"  // Needed to access AGASCharacter
#include "CombatantAttributeSet.h"
#include "GameplayEffectExtension.h"  // Needed for FGameplayEffectModCallbackData

FGameplayAttribute UCombatantAttributeSet::GetCurrentHealthAttribute()
{
    static FGameplayAttribute CurrentHealthAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, CurrentHealth)));
    return CurrentHealthAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetBaseMaxHealthAttribute()
{
    static FGameplayAttribute MaxHealthAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, BaseMaxHealth)));
    return MaxHealthAttribute;
}


FGameplayAttribute UCombatantAttributeSet::GetIncreasedHealthAttribute()
{
    static FGameplayAttribute IncreasedHealthAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, IncreasedHealth)));
    return IncreasedHealthAttribute;
}



FGameplayAttribute UCombatantAttributeSet::GetInDamageAttribute()
{
    static FGameplayAttribute InDamageAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, InDamage)));
    return InDamageAttribute;
}


float UCombatantAttributeSet::GetCurrentHealth() const
{
    return CurrentHealth.GetCurrentValue();
}
void UCombatantAttributeSet::SetCurrentHealth(float Value)
{
    CurrentHealth.SetCurrentValue(Value);
    AGASCharacter* Character = Cast<AGASCharacter>(GetOwningActor());
    Character->TriggerHealthChanged();
}



float UCombatantAttributeSet::GetBaseMaxHealth() const
{
    return BaseMaxHealth.GetCurrentValue();
}
void UCombatantAttributeSet::SetBaseMaxHealth(float Value)
{
    BaseMaxHealth.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetIncreasedHealth() const
{
    return IncreasedHealth.GetCurrentValue();
}
void UCombatantAttributeSet::SetIncreasedHealth(float Value)
{
    IncreasedHealth.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetTotalMaxHealth() const
{
    return GetBaseMaxHealth() * (GetIncreasedHealth());
}

float UCombatantAttributeSet::GetInDamage() const
{
    return InDamage.GetCurrentValue();
}

void UCombatantAttributeSet::SetInDamage(float Value)
{
    InDamage.SetCurrentValue(Value);
}






// Override to enforce that Health cannot exceed MaxHealth
void UCombatantAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data);

    // If a damage package is being sent
    if (Data.EvaluatedData.Attribute == GetInDamageAttribute())
    {
        // Retrieve the damage amount
        FGameplayTag DamageTag = FGameplayTag::RequestGameplayTag(FName("Damage.SetByCaller"));
        float Damage = Data.EffectSpec.GetSetByCallerMagnitude(DamageTag, 0.0f);
        

        // Process damage (apply to shield or health)
        if (Damage > 0.0f)
        {
            AGASCharacter* Character = Cast<AGASCharacter>(GetOwningActor());
            AActor* DamageInstigator = Data.EffectSpec.GetContext().GetInstigator();
            AActor* DamageCauser = Data.EffectSpec.GetContext().GetEffectCauser();

            FGameplayTagContainer GameplayTagContainer;
            Data.EffectSpec.GetAllAssetTags(GameplayTagContainer);
            
            Character->DamageTaken.Broadcast(DamageInstigator, DamageCauser, GameplayTagContainer, Damage);


            // Apply mitigation to damage
            UE_LOG(LogTemp, Log, TEXT("Damage Applied after mitigation: %f"), Damage);
            
            float ExcessDamage = AddShieldCurrent(-Damage);
            if (ExcessDamage > 0.001f) 
            {
                float OldHealth = GetCurrentHealth();
                UE_LOG(LogTemp, Log, TEXT("Health before hit: %f"), GetCurrentHealth());
                SetCurrentHealth(FMath::Clamp(GetCurrentHealth() - ExcessDamage, 0.0f, GetTotalMaxHealth()));
                UE_LOG(LogTemp, Log, TEXT("Health after hit: %f"), GetCurrentHealth());
                // Call OnHealthChanged event
                Character->TriggerHealthChanged();

                // Handle OnDeath
                if (OldHealth > 0.f && GetCurrentHealth() <= 0.f)
                {
                    if (Character && DamageCauser)
                    {
                        Character->OnDeath(
                            DamageCauser->GetActorForwardVector(),
                            DamageCauser
                        );
                    }
                }

                
            }
            
            
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid damage value: %f"), Damage);
        }

        // Reset InDamage
        SetInDamage(0.0f);
    }
    
}



float UCombatantAttributeSet::AddShieldCurrent(float Addition)
{
    Addition += ShieldAddedBuff.GetCurrentValue();
    float NonNegativeBuffedShield = GetCurrentShield() + Addition;
    float ExcessDamage = 0;
    if (NonNegativeBuffedShield < 0)
    {
        ExcessDamage = abs(NonNegativeBuffedShield);
        NonNegativeBuffedShield = 0;
    }
    ShieldCurrent.SetCurrentValue(NonNegativeBuffedShield);
    ShieldSnapshot.SetCurrentValue(NonNegativeBuffedShield);
    ShieldTimeOfLastAddition.SetCurrentValue(GetWorld()->GetTimeSeconds());

    AGASCharacter* Character = Cast<AGASCharacter>(GetOwningActor());
    Character->EnergyShieldChanged.Broadcast();
    UE_LOG(LogTemp, Log, TEXT("Returning excess damage: %f"), ExcessDamage);

    return ExcessDamage;
}

float UCombatantAttributeSet::GetCurrentShield()
{
    float current = ShieldCurrent.GetCurrentValue();

    if (current > 10)
    {
        float timeSinceLastUpdate = GetWorld()->GetTimeSeconds() - ShieldTimeOfLastAddition.GetCurrentValue();
        float base = 1 - ShieldDecayRate.GetCurrentValue();
        current = pow(base, timeSinceLastUpdate) * ShieldSnapshot.GetCurrentValue();
        ShieldCurrent.SetCurrentValue(current);
        return current;
    }
    else
    {
        if (current >= 1)
        {
            // This step is nonsense, because it scales with calls to Get
            current -= 0.6;
            ShieldCurrent.SetCurrentValue(current);
            return current;
        }
        else
        {
            // Call energy shield depleted?
            ShieldCurrent.SetCurrentValue(0);
            return 0;
        }
    }
}
