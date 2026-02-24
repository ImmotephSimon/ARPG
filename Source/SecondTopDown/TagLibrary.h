#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "TagLibrary.generated.h"

UCLASS()
class SECONDTOPDOWN_API UTagLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "GameplayTags")
    static FGameplayTagContainer GetAllProjectTags();
};