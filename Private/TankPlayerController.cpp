// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "TankSupremacy.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayControlled not possesing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayController possessing: %s"), *(ControlledTank->GetName()));

	}
}

ATank * ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}