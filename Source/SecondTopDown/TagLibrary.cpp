#include "TagLibrary.h"
#include "GameplayTagsManager.h"

FGameplayTagContainer UTagLibrary::GetAllProjectTags()
{
    FGameplayTagContainer Container;

    // Get the manager instance
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();

    // In UE5, RequestAllGameplayTags is safe to call as long as the 
    // Manager singleton exists. It will just return empty if it's not loaded.
    Manager.RequestAllGameplayTags(Container, false);

    return Container;
}