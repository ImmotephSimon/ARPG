// KeywordRichTextDecorator.cpp
#include "UKeywordRichTextDecorator.h"
#include "Components/RichTextBlock.h"
#include "Framework/Text/SlateHyperlinkRun.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"

class FKeywordRichTextDecorator : public FRichTextDecorator
{
public:
    FKeywordRichTextDecorator(URichTextBlock* InOwner, const UKeywordRichTextDecorator* InDecoratorCPP)
        : FRichTextDecorator(InOwner)
        , DecoratorCPP(InDecoratorCPP)
    {
    }

    virtual bool Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const override
    {
        UE_LOG(LogTemp, Warning, TEXT("Parsing tag: %s"), *RunParseResult.Name);
        return RunParseResult.Name == TEXT("kw");
    }

    virtual TSharedPtr<SWidget> CreateDecoratorWidget(
        const FTextRunInfo& RunInfo,
        const FTextBlockStyle& TextStyle) const override
    {
        FString DisplayText = RunInfo.Content.ToString();
        FString KeywordId;

        FTextBlockStyle FinalStyle = DecoratorCPP.IsValid()
            ? DecoratorCPP->DefaultKeywordStyle
            : TextStyle;

        if (RunInfo.MetaData.Contains(TEXT("id")))
        {
            KeywordId = RunInfo.MetaData[TEXT("id")];

            if (DecoratorCPP.IsValid())
            {
                FinalStyle = DecoratorCPP->OnFormatKeyword(KeywordId, FinalStyle);
            }
        }

        TSharedRef<SButton> Button =
            SNew(SButton)
            .ButtonStyle(FCoreStyle::Get(), "NoBorder")
            .ContentPadding(FMargin(0))
            .OnClicked_Lambda([this, KeywordId]()
                {
                    if (DecoratorCPP.IsValid())
                    {
                        DecoratorCPP->OnKeywordClicked(KeywordId);
                    }
                    return FReply::Handled();
                });

        Button->SetContent(
            SNew(STextBlock)
            .Text(FText::FromString(DisplayText))
            .TextStyle(&FinalStyle)
        );

        return Button;
    }

private:
    TWeakObjectPtr<const UKeywordRichTextDecorator> DecoratorCPP;
};

UKeywordRichTextDecorator::UKeywordRichTextDecorator(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

TSharedPtr<ITextDecorator> UKeywordRichTextDecorator::CreateDecorator(URichTextBlock* InOwner)
{
    return MakeShareable(new FKeywordRichTextDecorator(InOwner, this));
}