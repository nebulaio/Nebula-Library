#include "YourBlueprintFunctionLibraryName.h"
#include "Engine/GameViewportClient.h"

void UYourBlueprintFunctionLibraryName::MinimizeGameWindow()
{
    UGameViewportClient* GameViewport = GEngine->GameViewport;

    if (GameViewport)
    {
        TSharedPtr<SWindow> GameWindow = GameViewport->GetWindow();
        if (GameWindow.IsValid())
        {
            GameWindow->Minimize();
        }
    }
}

void UYourBlueprintFunctionLibraryName::MaximizeGameWindow(bool bFullscreen)
{
    UGameViewportClient* GameViewport = GEngine->GameViewport;

    if (GameViewport)
    {
        TSharedPtr<SWindow> GameWindow = GameViewport->GetWindow();
        if (GameWindow.IsValid())
        {
            GameWindow->Restore();

            if (bFullscreen)
            {
                GameWindow->Maximize();
            }
            else
            {
                GameWindow->Maximize();
                GameWindow->Restore();
            }
        }
    }
}
