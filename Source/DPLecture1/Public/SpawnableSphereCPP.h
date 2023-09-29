// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpawnableSphereCPP.generated.h"

UCLASS()
class DPLECTURE1_API ASpawnableSphereCPP : public APawn
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere) 
		FString myActorName;
	UFUNCTION(BlueprintCallable)
		void SayHello();
	UFUNCTION(BlueprintCallable)
		FString  AddForce(UPrimitiveComponent* objectToPush, FVector direction, float intensity);

	// Sets default values for this pawn's properties
	ASpawnableSphereCPP();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
