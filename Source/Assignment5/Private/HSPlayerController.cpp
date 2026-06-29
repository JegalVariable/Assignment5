#include "HSPlayerController.h"
#include "EnhancedInputSubsystems.h"

AHSPlayerController::AHSPlayerController()
	: InputMappingContext(nullptr),
	  MoveAction(nullptr),
	  JumpAction(nullptr),
	  LookAction(nullptr),
	  SprintAction(nullptr)
{
}

void AHSPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		// Local Player에서 EnhancedInputLocalPlayerSubsystem을 획득
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}