// Copyright Epic Games, Inc. All Rights Reserved.

#include "FindAWayOutGameMode.h"
#include "FindAWayOutCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFindAWayOutGameMode::AFindAWayOutGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
