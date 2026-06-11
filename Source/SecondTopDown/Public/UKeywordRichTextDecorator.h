// KeywordRichTextDecorator.h
#pragma once

#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "UKeywordRichTextDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class UKeywordRichTextDecorator : public URichTextBlockDecorator
{
    GENERATED_BODY()

public:
    UKeywordRichTextDecorator(const FObjectInitializer& ObjectInitializer);

    virtual TSharedPtr<ITextDecorator> CreateDecorator(URichTextBlock* InOwner) override;

    // Existing Blueprint hooks
    UFUNCTION(BlueprintImplementableEvent, Category = "Rich Text")
    FTextBlockStyle OnFormatKeyword(const FString& KeywordId, const FTextBlockStyle& DefaultStyle) const;

    UFUNCTION(BlueprintImplementableEvent, Category = "Rich Text")
    void OnKeywordClicked(const FString& KeywordId) const;

public:
    // NEW: Exposes a default style in the Blueprint Class Details panel
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Appearance")
    FTextBlockStyle DefaultKeywordStyle;
};