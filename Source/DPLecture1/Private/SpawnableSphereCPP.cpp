// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnableSphereCPP.h"

// Sets default values
ASpawnableSphereCPP::ASpawnableSphereCPP()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASpawnableSphereCPP::BeginPlay()
{
	Super::BeginPlay(); 
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Hello world: I´m a C++ Actor" + myActorName));
}

// Called every frame
void ASpawnableSphereCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpawnableSphereCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASpawnableSphereCPP::SayHello() {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("Hello world: I´m a C++ Actor" + myActorName));
}


FString  ASpawnableSphereCPP::AddForce(UPrimitiveComponent* objectToPush, FVector direction, float intensity) {
	//Add some force to push the sphere
	objectToPush->AddForce(direction * intensity);
	return myActorName;
}
