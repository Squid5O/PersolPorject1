// Copyright Epic Games, Inc. All Rights Reserved.

#include "dragonGameMode.h"
#include "dragonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AdragonGameMode::AdragonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
