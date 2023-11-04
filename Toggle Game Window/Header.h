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

    UFUNCTION(BlueprintCallable, Category = "Game Utils|Window")
    static void MinimizeGameWindow();

    UFUNCTION(BlueprintCallable, Category = "Game Utils|Window")
    static void MaximizeGameWindow(bool bFullscreen);
};