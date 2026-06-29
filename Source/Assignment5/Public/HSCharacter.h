#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HSCharacter.generated.h"

UCLASS()
class ASSIGNMENT5_API AHSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AHSCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
