// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectTencent01GameMode.h"
#include "ProjectTencent01Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectTencent01GameMode::AProjectTencent01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
