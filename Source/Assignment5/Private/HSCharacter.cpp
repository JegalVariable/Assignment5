#include "HSCharacter.h"

AHSCharacter::AHSCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AHSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AHSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

