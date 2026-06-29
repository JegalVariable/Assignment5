#include "HSGameMode.h"
#include "HSCharacter.h"
#include "HSPlayerController.h"
#include "HSGameState.h"

AHSGameMode::AHSGameMode()
{
	DefaultPawnClass = AHSCharacter::StaticClass();
	PlayerControllerClass = AHSPlayerController::StaticClass();
	GameStateClass = AHSGameState::StaticClass();
}