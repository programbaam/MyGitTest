// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyGitTestGameMode.h"
#include "MyGitTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyGitTestGameMode::AMyGitTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
