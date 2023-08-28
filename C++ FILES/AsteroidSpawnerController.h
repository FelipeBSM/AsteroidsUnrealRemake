// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AsteroidSpawnerController.generated.h"

UCLASS()
class ASTEROIDREMAKE_API AAsteroidSpawnerController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroidSpawnerController();
	UPROPERTY(EditAnywhere)
		USceneComponent* defaultSceneRoot;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int spawnAmmount;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void SpawnAsteroids(int _ammountOfSpawn);

	UPROPERTY(EditAnywhere, Category = Projectile)
		TSubclassOf<class ABigAsteroid> BigAsteroidBPClass;

	FVector GenerateRandomAsteroidLocation(int _currentSpawn,int _totalSpawn);

	void IncrementDeadAsteroid();

	float expectedAsteroids;

};
