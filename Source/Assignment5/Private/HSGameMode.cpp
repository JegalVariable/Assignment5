#include "HSGameMode.h"
#include "HSCharacter.h"

AHSGameMode::AHSGameMode()
{
	DefaultPawnClass = AHSCharacter::StaticClass();
}