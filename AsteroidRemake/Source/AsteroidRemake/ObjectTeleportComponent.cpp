// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectTeleportComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UObjectTeleportComponent::UObjectTeleportComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UObjectTeleportComponent::BeginPlay()
{
	Super::BeginPlay();

	FString name;
	name = GetOwner()->GetName();
	UE_LOG(LogTemp,Warning,TEXT("Name of owner: %s"),*name );
}

void UObjectTeleportComponent::TeleportObject()
{
	FVector location;
	location = GetOwner()->GetActorLocation();
	
	FVector2D viewportPosition, newScreenLocation;
	FVector direction,newWorldLocation;
	newWorldLocation = location;

	if (UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(), location, viewportPosition))
	{
		FVector2D viewportSize;
		
		if (UGameViewportClient* viewportClient = GetWorld()->GetGameViewport())
		{
			viewportClient->GetViewportSize(viewportSize);
		}
	
		if (viewportPosition.X > viewportSize.X) 
		{
			//out of viewport - ON THE RIGHT SIDE
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Out of the viewport - Right"));
			newScreenLocation.X = 0.0f; // em cordenada de tela - USAR X
			movedX = true;
		}
		else if (viewportPosition.X < 0.0f) 
		{
			//out of viewport - ON THE LEFT SIDE
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Out of the viewport - Left"));
			newScreenLocation.X = viewportSize.X;
			movedX = true;
		}
		else 
		{
			movedX = false;
		}

		if (viewportPosition.Y > viewportSize.Y) 
		{
			//out of viewport - ON THE BOTTOM
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Out of the viewport - Down"));
			newScreenLocation.Y = 0.0f;
			movedY = true;
		}
		else if (viewportPosition.Y < 0.0f) 
		{
			//out of viewport - ON THE TOP
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Out of the viewport - Up"));
			newScreenLocation.Y = viewportSize.Y;
			movedY = true;
		}
		else {
			movedY = false;
		}

		
		if (movedY == true || movedX == true) 
		{
			if (UGameplayStatics::DeprojectScreenToWorld(GetWorld()->GetFirstPlayerController(), FVector2D(newScreenLocation.X, newScreenLocation.Y), newWorldLocation, direction)) {
				
				if (movedX == true && movedY == false) 
				{
					
					newWorldLocation.Z = location.Z;
				}
				newWorldLocation.X = location.X;
				FString DebugMessage = FString::Printf(TEXT("Vector Outputed Position: X=%.2f, Y=%.2f,Z=%.2f"), newWorldLocation.X, newWorldLocation.Y, newWorldLocation.Z);
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, DebugMessage);			
			}

			GetOwner()->SetActorLocation(newWorldLocation);
		}
		else {
			GetOwner()->SetActorLocation(location);
		}
	}

}


// Called every frame
void UObjectTeleportComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	TeleportObject();
	
}

