// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaGameMode.h"
#include "GalagaPawn.h"

AGalagaGameMode::AGalagaGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalagaPawn::StaticClass();
}

