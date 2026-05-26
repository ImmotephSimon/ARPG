#include "HyperLinkPluginBPLibrary.h"
#include "HyperLinkPlugin.h"
#include "Widgets/Input/SRichTextHyperlink.h"
#include "Styling/SlateTypes.h"
#include "Engine/Engine.h"
#include "Components/RichTextBlock.h"

FRichInlineHyperLinkDecorator::FRichInlineHyperLinkDecorator(URichTextBlock* InOwner, UHyperLinkPluginBPLibrary* InDecorator)
    : FRichTextDecorator(InOwner), Decorator(InDecorator)
{
    if (InDecorator)
    {
        LinkStyle = InDecorator->Style;
    }

    OnClickDelegate.BindLambda([InDecorator]() {
        if (InDecorator)
        {
            InDecorator->ClickFun(TEXT(""), TEXT(""));
        }
        });
}

bool FRichInlineHyperLinkDecorator::Supports(
    const FTextRunParseResults& RunParseResult,
    const FString& Text) const
{
    return RunParseResult.Name == TEXT("a")
        && RunParseResult.MetaData.Contains(TEXT("id"));
}

TSharedPtr<SWidget> FRichInlineHyperLinkDecorator::CreateDecoratorWidget(
    const FTextRunInfo& RunInfo,
    const FTextBlockStyle& TextStyle) const
{
    const FString RawText = RunInfo.Content.ToString();

    FString LinkID;
    if (const FString* Found = RunInfo.MetaData.Find(TEXT("id")))
    {
        LinkID = *Found;
    }

    FString Content;
    if (const FString* Found = RunInfo.MetaData.Find(TEXT("content")))
    {
        Content = *Found;
    }

    TSharedPtr<FSlateHyperlinkRun::FWidgetViewModel> Model =
        MakeShareable(new FSlateHyperlinkRun::FWidgetViewModel);

    const FHyperlinkStyle& LinkStyleLocal =
        Decorator
        ? Decorator->Style
        : FCoreStyle::Get().GetWidgetStyle<FHyperlinkStyle>("Hyperlink");

    TWeakObjectPtr<UHyperLinkPluginBPLibrary> WeakDecorator(Decorator);

    return SNew(SRichTextHyperlink, Model.ToSharedRef())
        .Text(FText::FromString(RawText))
        .Style(&LinkStyleLocal)
        .OnNavigate(FSimpleDelegate::CreateLambda([WeakDecorator, LinkID, Content]()
            {
                if (WeakDecorator.IsValid())
                {
                    WeakDecorator->ClickFun(LinkID, Content);
                }
            }));
}

UHyperLinkPluginBPLibrary::UHyperLinkPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

TSharedPtr<ITextDecorator> UHyperLinkPluginBPLibrary::CreateDecorator(URichTextBlock* InOwner)
{
    return MakeShareable(new FRichInlineHyperLinkDecorator(InOwner, this));
}

void UHyperLinkPluginBPLibrary::ClickFun_Implementation(const FString& LinkID, const FString& Content)
{
    if (GEngine)
    {
        FString DebugMessage = FString::Printf(TEXT("Hyperlink clicked! ID: %s, Content: %s"), *LinkID, *Content);
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DebugMessage);
    }
}
