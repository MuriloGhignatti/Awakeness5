﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../../Structs/ItemInfo.h"
#include "MasterItem.generated.h"

UCLASS(Blueprintable)
class AWAKENESS_API AMasterItem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMasterItem();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Id = -1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, BlueprintGetter=GetItemInfo)
	FItemInfo ItemInfo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 Hash();

	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(const int32 AmountUsed);

	UFUNCTION(BlueprintGetter)
	FItemInfo GetItemInfo()
	{
		return ItemInfo;
	}
};