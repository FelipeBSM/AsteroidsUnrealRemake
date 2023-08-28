// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreManager.h"

// Sets default values
AScoreManager::AScoreManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AScoreManager::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AScoreManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FString DebugMessage = FString::Printf(TEXT("score: %d"), currentScore);
	GEngine->AddOnScreenDebugMessage(-1, 500.0f, FColor::Red, DebugMessage);
}
void AScoreManager::AddScore(int ammountToAdd)
{
	currentScore += ammountToAdd;
}
