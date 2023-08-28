// Fill out your copyright notice in the Description page of Project Settings.


#include "AsteroidSpawnerController.h"
#include "BigAsteroid.h"
#include "ShipPlayer.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAsteroidSpawnerController::AAsteroidSpawnerController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	defaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("root"));

	RootComponent = defaultSceneRoot;
}

// Called when the game starts or when spawned
void AAsteroidSpawnerController::BeginPlay()
{
	

	Super::BeginPlay();
	spawnAmmount = 5;
	SpawnAsteroids(spawnAmmount);
}

// Called every frame
void AAsteroidSpawnerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	TArray<AActor*> OtherActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABigAsteroid::StaticClass(), OtherActors);
	if (OtherActors.Num() <= 0) {
		
		SpawnAsteroids(spawnAmmount+=2);
	}

	
}

void AAsteroidSpawnerController::SpawnAsteroids(int _ammountOfSpawn)
{
	FActorSpawnParameters SpawnInfo;

	for (int i = 0;i < _ammountOfSpawn;i++) {
		//change position spawn later
		GetWorld()->SpawnActor<ABigAsteroid>(BigAsteroidBPClass, defaultSceneRoot->GetComponentLocation(), FRotator::ZeroRotator, SpawnInfo);
	}
}

FVector AAsteroidSpawnerController::GenerateRandomAsteroidLocation(int _currentSpawn, int _totalSpawn)
{
	float degreeDiv = 360.0f / _totalSpawn;
	float degree = _currentSpawn * degreeDiv;

	float minDistanceFromCenter = 1000.0f; 
	float maxDistanceFromCenter = 1000.0f;
	float radius = (maxDistanceFromCenter - minDistanceFromCenter) / 2;

	float distanceZ = FMath::RandRange(-minDistanceFromCenter, maxDistanceFromCenter);//UP
	float distanceY = FMath::RandRange(-minDistanceFromCenter, maxDistanceFromCenter);//SIDE

	float angle = FMath::RandRange(0.0f, 360.0f);

	

	FVector spawnLocation = FVector(340.0f, 0.0f, 0.0f) + FVector(0.0f, distanceZ, distanceY);

	spawnLocation.X = 340.0f;
	FString DebugMessage = FString::Printf(TEXT("SpawnPos: X=%.2f, Y=%.2f,Z=%.2f"), spawnLocation.X,spawnLocation.Y, spawnLocation.Z);
	GEngine->AddOnScreenDebugMessage(-1, 500.0f, FColor::Red, DebugMessage);

	return spawnLocation;
}

void AAsteroidSpawnerController::IncrementDeadAsteroid()
{



}

