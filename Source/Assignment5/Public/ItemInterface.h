#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

class ASSIGNMENT5_API IItemInterface
{
	GENERATED_BODY()

public:
	virtual void OnItemOverlap(AActor* OverlapActor) = 0;
	// 플레이어가 이 아이템의 범위를 벗어났을 때 호출
	virtual void OnItemEndOverlap(AActor* OverlapActor) = 0;
	// 아이템이 사용되었을 때 호출
	virtual void ActivateItem(AActor* Activator) = 0;
	// 이 아이템의 유형(타입)을 반환 (예: "Coin", "Mine" 등)
	virtual FName GetItemType() const = 0;
};
