// Fill out your copyright notice in the Description page of Project Settings.


#include "BigAsteroid.h"
#include "Bullet.h"
#include "MediumAsteroid.h"


// Sets default values
ABigAsteroid::ABigAsteroid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	asteroidMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	asteroidBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerCollider"));

	

	RootComponent = asteroidMeshComponent;

	asteroidBoxCollider->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	pointsToGive = 300;

	static ConstructorHelpers::FObjectFinder<UBlueprint> asteroidBlueprint(TEXT("/Game/Blueprints/AsteroidMed"));
	if (asteroidBlueprint.Object) {

		MediumAsteroidBPClass = (UClass*)asteroidBlueprint.Object->GeneratedClass;
	}
	
}

// Called when the game starts or when spawned
void ABigAsteroid::BeginPlay()
{
	Super::BeginPlay();
	asteroidSpeed = FMath::FRandRange(80.0f,130.0f);
	randDirection = FVector(GetActorLocation().X, FMath::FRandRange(-10.0f, 10.0f), FMath::FRandRange(-10.0f, 10.0f)); // get a random direction
	asteroidBoxCollider->OnComponentHit.AddDynamic(this, &ABigAsteroid::OnHit);
	Move();
}

void ABigAsteroid::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	
	if (OtherActor->IsA(ABullet::StaticClass())) {
		
		UParticleSystemComponent *component =
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionParticle, Hit.Location, Hit.Normal.Rotation());

		if (component) 
		{
			//changing particle size :D
			FVector newScale = FVector(.15f, .15f, .15f);
			component->SetWorldScale3D(newScale);
		}
		if (explosionSound) {
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), explosionSound, Hit.Location);
		}
		Death();
		Destroy();
		OtherActor->Destroy();
	}
	
}

// Called every frame
void ABigAsteroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ApplyConstantForce(DeltaTime);
}

void ABigAsteroid::Death()
{
	FVector newAsteroidsSpawnLocation = GetActorLocation();
	FRotator spawnRotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	
	

	// in this case spawn other two actors
	for (int i = 0;i <= 1;i++) 
	{
		AMediumAsteroid *asteroid=
		GetWorld()->SpawnActor<AMediumAsteroid>(MediumAsteroidBPClass, newAsteroidsSpawnLocation, spawnRotation, SpawnInfo);
		
	}
}

void ABigAsteroid::Move()
{
	asteroidMeshComponent->AddForce(randDirection * asteroidSpeed);
	
}
void ABigAsteroid::ApplyConstantForce(float _d) {
	FVector currentVelocity = asteroidMeshComponent->GetPhysicsLinearVelocity();
	FVector desiredVelocity = asteroidSpeed * currentVelocity.GetSafeNormal();

	FVector force = (desiredVelocity - currentVelocity) * asteroidMeshComponent->GetMass() / _d;

	asteroidMeshComponent->AddForce(force);

	asteroidMeshComponent->SetPhysicsLinearVelocity(desiredVelocity);
}

int ABigAsteroid::GetPointsToGive()
{
	return pointsToGive;
}

