// Fill out your copyright notice in the Description page of Project Settings.


#include "MediumAsteroid.h"
//#include "Bullet.h"

AMediumAsteroid::AMediumAsteroid()
{

}


AMediumAsteroid::~AMediumAsteroid()
{
}

void AMediumAsteroid::Death()
{
	Destroy();
}

void AMediumAsteroid::Move()
{
	
	asteroidMeshComponent->AddForce(randDirection * asteroidSpeed);
}

void AMediumAsteroid::ApplyConstantForce(float _d)
{
	FVector currentVelocity = asteroidMeshComponent->GetPhysicsLinearVelocity();
	FVector desiredVelocity = asteroidSpeed * currentVelocity.GetSafeNormal();

	FVector force = (desiredVelocity - currentVelocity) * asteroidMeshComponent->GetMass() / _d;

	asteroidMeshComponent->AddForce(force);

	asteroidMeshComponent->SetPhysicsLinearVelocity(desiredVelocity);
}

//void AMediumAsteroid::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
//{
	//if (OtherActor->IsA(ABullet::StaticClass())) {
		//Death();
		//Destroy();
		//OtherActor->Destroy();
	//}
//}
