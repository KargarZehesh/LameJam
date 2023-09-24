// Copyright Epic Games, Inc. All Rights Reserved.

#include "LameJamGameMode.h"
#include "LameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALameJamGameMode::ALameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
