#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SECONDTOPDOWN_API UGlobalBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Search")
    static int32 BinarySearch(const TArray<int32>& arr, int32 target);

    UFUNCTION(BlueprintCallable, Category = "String")
    static FString AddSpacesBeforeCaps(const FString& Input);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "String|Regex")
    static FString RegexReplace(const FString& Input, const FString& Pattern, const FString& Replacement);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "String|Markup")
    static FString FixTooltipMarkup(const FString& Input);

    UFUNCTION(BlueprintCallable, Category = "Debug|Memory")
    static void LogConciseMemory();
};