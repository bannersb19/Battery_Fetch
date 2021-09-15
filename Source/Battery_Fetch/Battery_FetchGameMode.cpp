// Copyright Epic Games, Inc. All Rights Reserved.

#include "Battery_FetchGameMode.h"
#include "Battery_FetchCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABattery_FetchGameMode::ABattery_FetchGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
