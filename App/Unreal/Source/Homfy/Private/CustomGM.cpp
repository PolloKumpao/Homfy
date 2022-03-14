// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomGM.h"
#include "MyGameStateBase.h"

ACustomGM::ACustomGM()
{
	GameStateClass = AMyGameStateBase::StaticClass();
}

int32 ACustomGM::GetCoins() const
{
	return GetGameState<AMyGameStateBase>()->CoinCount;
}

void ACustomGM::SetCoins(int32 newCoins)
{
	GetGameState<AMyGameStateBase>()->CoinCount = newCoins;
}