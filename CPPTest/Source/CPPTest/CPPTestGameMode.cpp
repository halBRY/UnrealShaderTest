// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPTestGameMode.h"
#include "CPPTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPTestGameMode::ACPPTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
