#include "HSPlayerController.h"
#include "HSGameState.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"

AHSPlayerController::AHSPlayerController()
	: InputMappingContext(nullptr),
	  MoveAction(nullptr),
	  JumpAction(nullptr),
	  LookAction(nullptr),
	  SprintAction(nullptr),
      HUDWidgetClass(nullptr),
	  HUDWidgetInstance(nullptr)
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
	
	// HUD 위젯 생성 및 표시
	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();
		}
	}
	
	AHSGameState* HSGameState = GetWorld() ? GetWorld()->GetGameState<AHSGameState>() : nullptr;
	if (HSGameState)
	{
		HSGameState->UpdateHUD();
	}
}

UUserWidget* AHSPlayerController::GetHUDWidget() const
{
	return HUDWidgetInstance;
}