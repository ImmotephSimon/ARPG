#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalBlueprintFunctionLibrary.generated.h"

USTRUCT(BlueprintType)
struct FCEdge
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector2D A;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector2D B;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Edge")
    float Distance;

    FCEdge()
        : A(FVector2D::ZeroVector)
        , B(FVector2D::ZeroVector)
    {
    }
    FCEdge(const FVector2D& InA, const FVector2D& InB)
        : A(InA)
        , B(InB)
        , Distance(FVector2D::Distance(InA, InB))
    {
    }

    bool operator==(const FCEdge& Other) const
    {
        return (A == Other.A && B == Other.B) ||
            (A == Other.B && B == Other.A);
    }

};



USTRUCT(BlueprintType)
struct FCTriangle {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D A;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D B;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D C;

    bool operator==(const FCTriangle& Other) const {
        // Order-independent triangle comparison for Delaunay mesh filtering
        return (A == Other.A || A == Other.B || A == Other.C) &&
            (B == Other.A || B == Other.B || B == Other.C) &&
            (C == Other.A || C == Other.B || C == Other.C);
    }
};

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

    UFUNCTION(BlueprintCallable, Category = "Generation")
    static TArray<FCEdge> GetMinimumSpanningTree(const TArray<FCTriangle>& Triangles);

    UFUNCTION(BlueprintCallable)
    static void SortEdgesByDistance(UPARAM(ref) TArray<FCEdge>& Edges, bool bAscending);

    // This overrides the default "Make CEdge" node in Blueprints
    UFUNCTION(BlueprintPure, Category = "Edge", meta = (NativeMakeFunc = "A,B"))
    static FCEdge MakeCEdge(FVector2D A, FVector2D B);
};