// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Project.h"
#include "ProjectGameMode.h"
#include "ProjectCharacter.h"

AProjectGameMode::AProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
