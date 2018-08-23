// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //Tem que ser o ultimo Include

/**
 * 
 */
UCLASS()
class TANKSUPREMACY_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ATank * GetControlledTank() const;
	
	virtual void BeginPlay() override;
	
	
};
