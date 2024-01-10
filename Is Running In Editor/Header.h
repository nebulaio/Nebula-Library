#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YourBlueprintFunctionLibraryName.generated.h"

/**
 *
 */
UCLASS()
class YOURPROJECTNAME_API UYourBlueprintFunctionLibraryName : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, BlueprintCallable, Category = "GameUtils|Editor")
    static bool IsRunningInEditor();
};
