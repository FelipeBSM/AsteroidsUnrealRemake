// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipPlayer.h"
#include "BoundTeleportComponent.h"
#include "Bullet.h"
// Sets default values
AShipPlayer::AShipPlayer()
{
 
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationYaw = false;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//Components Creation
	playerMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	playerBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerCollider"));
	deathParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DeathParticle"));
	playerDeathAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("ShipSound"));
	arrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("SpawnerArrow"));

	RootComponent = playerMeshComponent; //set the root component to the mesh

	playerBoxCollider->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	deathParticleSystem->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	playerDeathAudio->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	arrowComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	
	
	playerBoxCollider->SetCollisionProfileName("BlockAllDynamic");
	playerMeshComponent->SetLinearDamping(_linearDamping);

	//Get the BulletBP to spawn
	//static ConstructorHelpers::FObjectFinder<UBlueprint> bulletBlueprint(TEXT("/Game/Blueprints/BulletBP"));
	//if (bulletBlueprint.Object) {
		
		//projectile = (UClass*)bulletBlueprint.Object->GeneratedClass;
	//}
	
	healthValue = new ShipHealth(5, 10,true); // setting vulnerable state to true; -- begins vulnerable
	_rotationSpeed = 300.0f;
}

AShipPlayer::~AShipPlayer()
{
}

void AShipPlayer::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{

	if (healthValue->GetCurrentHealth() > 1) //if player has more than 0 lifes
	{
		if (healthValue->GetVulnerableState() == true) 
		{
			healthValue->RemoveHealth(1);
			
			healthValue->SetVulnerability(false); //não posso ser atacado

			this->playerBoxCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			
			UE_LOG(LogTemp, Warning, TEXT("Life Value: %d"), healthValue->GetCurrentHealth());
			GetWorldTimerManager().SetTimer(vulnerableTimerHandle, this, &AShipPlayer::InvulnerableTimerCallback, invulnerableDuration, false);
		}

	}
	else {
		//gameover
		Destroy();
	}
	deathParticleSystem->ActivateSystem();
	playerDeathAudio->Play();
	OtherActor->Destroy();
}

void AShipPlayer::InvulnerableTimerCallback()
{
	healthValue->SetVulnerability(true);
	this->playerBoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

// Called when the game starts or when spawned
void AShipPlayer::BeginPlay()
{
	Super::BeginPlay();	
	deathParticleSystem->Deactivate();
	playerDeathAudio->Deactivate();
	playerBoxCollider->OnComponentHit.AddDynamic(this, &AShipPlayer::OnHit);
	invulnerableDuration = 6.0f;
	
	

	FString DebugMessage = FString::Printf(TEXT("Valor de Vida: %d"), healthValue->GetCurrentHealth());
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, DebugMessage);

}

// Called every frame
void AShipPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//clamping the ship velocity to the correspondent max value
	FVector currentVelocity = playerMeshComponent->GetPhysicsLinearVelocity();
	if (currentVelocity.Size() > _maxSpeed) {
		FVector newVelocity = currentVelocity.GetSafeNormal() * _maxSpeed;
		playerMeshComponent->SetPhysicsLinearVelocity(newVelocity);
	}
	
	
}

// Called to bind functionality to input
void AShipPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("RotateRight", this,&AShipPlayer::RotateRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &AShipPlayer::MoveForward);
	PlayerInputComponent->BindAction("Fire", IE_Pressed,this, &AShipPlayer::HandleFire);

}

void AShipPlayer::MoveForward(float _value)
{
	isSpeeding = (_value > 0.0f);

	FVector forwardVector = GetActorRightVector();
	FVector currentVelocity = playerMeshComponent->GetPhysicsLinearVelocity();
	FVector desiredVelocity = forwardVector * _value * _moveForce;

	if (currentVelocity.Size() < _maxSpeed) {
		
		FVector force = (desiredVelocity - currentVelocity) * playerMeshComponent->GetMass();
		playerMeshComponent->AddForce(force);
	}
	
	
}

void AShipPlayer::RotateRight(float _value)
{
	//only allowing rotation when ship is not being moved - aka reciving 'forward' input
	if (!isSpeeding) {
		float deltafOdace = _value * _rotationSpeed * GetWorld()->GetDeltaSeconds();
		AddActorLocalRotation(FRotator(0.0f, deltafOdace, 0.0f));
	}
}

void AShipPlayer::HandleFire()
{
	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("FIRE!"));
	FVector projectileSpawnLocation = arrowComponent->GetComponentLocation();

	FRotator spawnRotation(0.0f,0.0f,0.0f);
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = this;

	//get a reference of the spawned actor
	ABullet *bullet = GetWorld()->SpawnActor<ABullet>(projectile,projectileSpawnLocation, spawnRotation,SpawnInfo);
	//get the projectile component
	UProjectileMovementComponent* projectileComponent = bullet->FindComponentByClass<UProjectileMovementComponent>();

	if (projectileComponent) 
	{
		//if able to get component --> make the simulation with the correct params
		FVector direction = -arrowComponent->GetRightVector();		
		FVector launchVelocity = direction * projectileComponent->InitialSpeed;

		projectileComponent->Velocity = launchVelocity;
	}
}


