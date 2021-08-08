// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject2GameMode.h"
#include "MyProject2PlayerController.h"
#include "MyProject2Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject2GameMode::AMyProject2GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMyProject2PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}