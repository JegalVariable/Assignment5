#include "HSGameInstance.h"

UHSGameInstance::UHSGameInstance()
{
	TotalScore = 0;
	CurrentLevelIndex = 0;
}

void UHSGameInstance::AddToScore(int32 Amount)
{
	TotalScore += Amount;
	UE_LOG(LogTemp, Warning, TEXT("Total Score Updated: %d"), TotalScore);
}