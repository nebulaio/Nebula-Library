#include "YourBlueprintFunctionLibraryName.h"

bool UYourBlueprintFunctionLibraryName::IsRunningInEditor()
{
#if WITH_EDITOR
    return true;
#else
    return false;
#endif
}
