// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Components/ArrowComponent.h"

#include "Bullet.h"
#include "ShipHealth.h"
#include "ObjectTeleportComponent.h"

#include "ShipPlayer.generated.h"

UCLASS()
class ASTEROIDREMAKE_API AShipPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShipPlayer();
	~AShipPlayer();

	#pragma region COMPONENTS

	//PLATER COMPONENTS
	UPROPERTY(EditAnywhere)
	USceneComponent *defaultSceneRoot;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent *playerMeshComponent;
	
	UPROPERTY(EditAnywhere)
	UBoxComponent *playerBoxCollider;

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent *deathParticleSystem;

	UPROPERTY(EditAnywhere)
	UAudioComponent *playerDeathAudio;

	UPROPERTY(EditAnywhere)
	UArrowComponent *arrowComponent;

	UPROPERTY(EditAnywhere, Category = Projectile)
		TSubclassOf<class ABullet> projectile;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		void InvulnerableTimerCallback();

#pragma endregion

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float _value);
	void RotateRight(float _value);
	void HandleFire();


	UPROPERTY(EditAnywhere, Category = "Fire Spawn");
	FVector bulletSpawnOffset = FVector(0.0f);

	UPROPERTY(EditAnywhere, Category = "Ship Movement");
	float _rotationSpeed = 100.0f;
	UPROPERTY(EditAnywhere, Category = "Ship Movement");
	float _moveForce = 800.0f;;
	UPROPERTY(EditAnywhere, Category = "Ship Movement");
	float _maxSpeed = 1000.0f;
	UPROPERTY(EditAnywhere, Category = "Ship Movement");
	float _linearDamping = -.5f;

	float invulnerableDuration;

	FTimerHandle vulnerableTimerHandle;
	bool isSpeeding = false;
	ShipHealth *healthValue;

};
