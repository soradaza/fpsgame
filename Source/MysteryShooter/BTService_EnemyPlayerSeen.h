// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_EnemyPlayerSeen.generated.h"

/**
 * 
 */
UCLASS()
class MYSTERYSHOOTER_API UBTService_EnemyPlayerSeen : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_EnemyPlayerSeen();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
