// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundCue.h"
#include "Particles/ParticleSystemComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"



#include "BigAsteroid.generated.h"

UCLASS()
class ASTEROIDREMAKE_API ABigAsteroid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABigAsteroid();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Death();

	virtual void Move();

	virtual void ApplyConstantForce(float _d);

	int GetPointsToGive();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		USceneComponent* defaultSceneRoot;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* asteroidMeshComponent;

	UPROPERTY(EditAnywhere)
		UBoxComponent* asteroidBoxCollider;

	UPROPERTY(EditAnywhere, Category = "Effects")
		UParticleSystem* explosionParticle;

	UPROPERTY(EditAnywhere, Category = "Effects")
		USoundCue* explosionSound;

	UFUNCTION()
		virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	FVector randDirection;
	float pointsToGive;
	float asteroidSpeed;
private:	
	
	FVector linearVelocity;

	UPROPERTY(EditAnywhere, Category = Projectile)
		TSubclassOf<class AMediumAsteroid> MediumAsteroidBPClass;

	

};
