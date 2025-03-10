// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimNotifyToolGameMode.h"
#include "AnimNotifyToolCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnimNotifyToolGameMode::AAnimNotifyToolGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
