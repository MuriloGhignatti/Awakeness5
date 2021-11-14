#pragma once

#include "../MasterClass/MasterItem/MasterItem.h"
#include "GenericPlatform/GenericPlatform.h"
#include "InventorySlot.generated.h"

USTRUCT(BlueprintType)
struct FInventorySlot
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AMasterItem* ItemClass;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Amount;
};