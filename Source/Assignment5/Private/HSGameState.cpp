#include "HSGameState.h"

AHSGameState::AHSGameState()
{
	Score = 0;
}

int32 AHSGameState::GetScore() const
{
	return Score;
}

void AHSGameState::AddScore(int32 Amount)
{
	Score += Amount;
}