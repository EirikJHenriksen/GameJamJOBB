// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "JOBBGameMode.h"
#include "JOBBHUD.h"
#include "JOBBCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJOBBGameMode::AJOBBGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJOBBHUD::StaticClass();
}
