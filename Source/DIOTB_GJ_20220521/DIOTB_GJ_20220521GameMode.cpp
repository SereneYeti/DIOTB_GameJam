// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIOTB_GJ_20220521GameMode.h"
#include "DIOTB_GJ_20220521Character.h"
#include "UObject/ConstructorHelpers.h"

ADIOTB_GJ_20220521GameMode::ADIOTB_GJ_20220521GameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}
