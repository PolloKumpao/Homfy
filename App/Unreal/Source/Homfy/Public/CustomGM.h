// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CustomGM.generated.h"

/**
 * 
 */
UCLASS()
class HOMFY_API ACustomGM : public AGameModeBase
{
	GENERATED_BODY()
public:
	ACustomGM();
	virtual ~ACustomGM() = default;
	/*Retunr n of coins in the game*/
	UFUNCTION(BlueprintPure, Category = "Coins")
	virtual int32 GetCoins() const;
	
	UFUNCTION(BlueprintCallable, Category = "Coins")
	virtual void SetCoins(int32 newCoins);
};
