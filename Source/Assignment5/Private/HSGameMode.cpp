#include "HSGameMode.h"
#include "HSCharacter.h"
#include "HSPlayerController.h"

AHSGameMode::AHSGameMode()
{
	DefaultPawnClass = AHSCharacter::StaticClass();
	PlayerControllerClass = AHSPlayerController::StaticClass();
}