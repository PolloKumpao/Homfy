// Copyright Epic Games, Inc. All Rights Reserved.

#include "HomfyGameMode.h"
#include "HomfyHUD.h"
#include "HomfyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomfyGameMode::AHomfyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHomfyHUD::StaticClass();
}
