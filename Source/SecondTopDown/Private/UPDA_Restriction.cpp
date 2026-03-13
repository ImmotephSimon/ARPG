#include "UPDA_Restriction.h"

bool UPDA_Restriction::IsMet(const FGameplayTag& ContextTag, UObject* ContextObj, FGuid ContextGuid) const {
    // Check if the incoming tag is contained within the ScopeTags container
    if (!ScopeTags.IsEmpty() && !ScopeTags.HasTag(ContextTag)) return false;

    if (!ScopeClass.IsNull()) {
        UClass* LoadedClass = ScopeClass.LoadSynchronous();
        if (!ContextObj || !ContextObj->IsA(LoadedClass)) return false;
    }

    return !ScopeGuid.IsValid() || ContextGuid == ScopeGuid;
}