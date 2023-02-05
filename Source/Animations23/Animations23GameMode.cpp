// Copyright Epic Games, Inc. All Rights Reserved.

#include "Animations23GameMode.h"
#include "Animations23Character.h"
#include "UObject/ConstructorHelpers.h"

AAnimations23GameMode::AAnimations23GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
