// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

#include "ObjectTeleportComponent.h"

#include "Bullet.generated.h"

UCLASS()
class ASTEROIDREMAKE_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

	UPROPERTY(EditAnywhere)
		USceneComponent *defaultSceneRoot;


	UPROPERTY(EditAnywhere)
		UStaticMeshComponent *bulletMeshComponent;

	UPROPERTY(EditAnywhere)
		UBoxComponent *boxCollider;

	UPROPERTY(EditAnywhere)
		UProjectileMovementComponent *projectTile;

	float timeToLive;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MyCustomActor", meta = (AllowPrivateAccess = "true"))
		//UObjectTeleportComponent* tp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
