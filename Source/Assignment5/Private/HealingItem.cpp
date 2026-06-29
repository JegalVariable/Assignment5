#include "HealingItem.h"
#include "HSCharacter.h"

AHealingItem::AHealingItem()
{
	HealAmount = 20.0f;
	ItemType = "Healing";
}

void AHealingItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (AHSCharacter* PlayerCharacter = Cast<AHSCharacter>(Activator))
		{
			// 캐릭터의 체력을 회복
			PlayerCharacter->AddHealth(HealAmount);
		}
        
		DestroyItem();
	}
}