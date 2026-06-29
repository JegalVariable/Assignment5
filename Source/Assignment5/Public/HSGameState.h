#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "HSGameState.generated.h"

UCLASS()
class ASSIGNMENT5_API AHSGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	AHSGameState();

	// 전역 점수를 저장하는 변수
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Score")
	int32 Score;

	// 현재 점수를 읽는 함수
	UFUNCTION(BlueprintPure, Category="Score")
	int32 GetScore() const;
	// 점수를 추가해주는 함수
	UFUNCTION(BlueprintCallable, Category="Score")
	void AddScore(int32 Amount);
};
