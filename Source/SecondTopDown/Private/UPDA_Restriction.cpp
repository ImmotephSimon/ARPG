#include "UPDA_Restriction.h"

bool UPDA_Restriction::IsMet(const FGameplayTag& ContextTag, UObject* ContextObj, FGuid ContextGuid) const
{
    if (!ScopeTags.IsEmpty() && !ScopeTags.HasTag(ContextTag)) return false;

    // 1. Check if a class was even assigned in the Data Asset
    if (!ScopeClass.IsNull())
    {
        // 2. Resolve the soft pointer to a hard pointer so IsA can read it
        UClass* TargetClass = ScopeClass.Get();

        if (!TargetClass)
        {
            TargetClass = ScopeClass.LoadSynchronous();
        }

        // 3. Now perform the check since we know TargetClass is valid
        if (!ContextObj || !ContextObj->IsA(TargetClass)) return false;
    }

    return !ScopeGuid.IsValid() || ContextGuid == ScopeGuid;
}