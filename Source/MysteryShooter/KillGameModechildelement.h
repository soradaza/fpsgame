// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KillGameMode.h"
#include "KillGameModechildelement.generated.h"

/**
 * 
 */
UCLASS()
class MYSTERYSHOOTER_API AKillGameModechildelement : public AKillGameMode
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
	
};
