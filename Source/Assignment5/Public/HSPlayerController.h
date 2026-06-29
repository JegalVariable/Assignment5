#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HSPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class ASSIGNMENT5_API AHSPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AHSPlayerController();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* SprintAction;
};
