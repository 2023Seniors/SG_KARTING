// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ItemManagement.generated.h"

/**
 * 
 */
UCLASS()
class DPLECTURE1_API UItemManagement : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UItemManagement();

	UFUNCTION(BlueprintCallable)
		int GetRandomItem();
	UFUNCTION(BlueprintCallable)
		void SetItem(int item, bool active);
	UFUNCTION(BlueprintCallable)
		void ResetAllItems();
	UFUNCTION(BlueprintCallable)
		void UpdateItems();

private:
	TArray<int> Items;
	TArray<bool> AllItems;
};
