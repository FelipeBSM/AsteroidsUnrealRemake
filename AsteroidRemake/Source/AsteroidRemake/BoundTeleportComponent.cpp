// Fill out your copyright notice in the Description page of Project Settings.


#include "BoundTeleportComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
UBoundTeleportComponent::UBoundTeleportComponent()
{
	
}

void UBoundTeleportComponent::BeginPlay()
{
    
}

void UBoundTeleportComponent::TeleportPlayer()
{
    FVector ActorLocation = GetOwner()->GetActorLocation();

    
}


