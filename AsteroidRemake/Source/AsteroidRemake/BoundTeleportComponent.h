// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "BoundTeleportComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ASTEROIDREMAKE_API UBoundTeleportComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UBoundTeleportComponent();

protected:

	virtual void BeginPlay() override;
	float teleportMargin;

public:	
	UFUNCTION()
	void TeleportPlayer();
};
