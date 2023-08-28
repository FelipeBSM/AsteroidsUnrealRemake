// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

// Sets default values
ABullet::ABullet()
{
	PrimaryActorTick.bCanEverTick = true;
	
	
	bulletMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	boxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BulletCollider"));
	
	RootComponent = boxCollider;
	
	bulletMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);



}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
	timeToLive = 2.0f;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("APARECI"));
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	timeToLive -= DeltaTime;
	if (timeToLive <= 0) {
		Destroy();
	}

}

