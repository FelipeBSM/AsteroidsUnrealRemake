// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BigAsteroid.h"
#include "MediumAsteroid.generated.h"

/**
 * 
 */
UCLASS()
class ASTEROIDREMAKE_API AMediumAsteroid : public ABigAsteroid
{
	GENERATED_BODY()
public:
	AMediumAsteroid();
	~AMediumAsteroid();

	//virtual void Tick(float DeltaTime) override;

	// Called every frame
protected:

	//virtual void BeginPlay() override;

	void Death() override;

	void Move() override;

	void ApplyConstantForce(float _d) override;

	//void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) override;

private:

	
};
