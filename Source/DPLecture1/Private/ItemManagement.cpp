// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemManagement.h"

UItemManagement::UItemManagement()
{
	AllItems.Init(true, 3);
	Items.Reserve(AllItems.Num());
	UpdateItems();
}

int UItemManagement::GetRandomItem()
{
	if (Items.IsEmpty())
		return -1;
	return FMath::RandRange(0, Items.Num() - 1);
}

void UItemManagement::SetItem(int item, bool active)
{
	if (item >= AllItems.Num())
		return;

	AllItems[item] = active;
}

void UItemManagement::ResetAllItems()
{
	for (int i = 0; i < AllItems.Num(); ++i)
		AllItems[i] = true;
}

void UItemManagement::UpdateItems()
{
	Items.Empty();

	for (int i = 0; i < AllItems.Num(); ++i)
		if (AllItems[i])
			Items.Add(i);
}