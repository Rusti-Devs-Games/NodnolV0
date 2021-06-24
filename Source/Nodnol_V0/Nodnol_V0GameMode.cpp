// Copyright Epic Games, Inc. All Rights Reserved.

#include "Nodnol_V0GameMode.h"
#include "Nodnol_V0Character.h"
#include "UObject/ConstructorHelpers.h"

ANodnol_V0GameMode::ANodnol_V0GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
