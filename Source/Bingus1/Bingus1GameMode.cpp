// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bingus1GameMode.h"
#include "Bingus1Character.h"
#include "UObject/ConstructorHelpers.h"

ABingus1GameMode::ABingus1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BP_RaccoonPlayer"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
