// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectTeleportComponent.generated.h"

/*Component responsable for checking bounds and teleporting objects*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASTEROIDREMAKE_API UObjectTeleportComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UObjectTeleportComponent();
	void TeleportObject();
protected:
	virtual void BeginPlay() override;

	

private:	
	bool movedY, movedX;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
		
};
