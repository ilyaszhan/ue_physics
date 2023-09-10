// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhysicsTestGameMode.h"
#include "PhysicsTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhysicsTestGameMode::APhysicsTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
