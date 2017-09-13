// Copyright SeeShore Games.inc

#pragma once

#include "CoreMinimal.h"
#include "S05_TestingGroundsGameMode.h"
#include "InfiniteTerrainGameMode.generated.h"

/**
 * 
 */
class ANavMeshBoundsVolume;
class UActorPool;

UCLASS()
class S05_TESTINGGROUNDS_API AInfiniteTerrainGameMode : public AS05_TestingGroundsGameMode
{
	GENERATED_BODY()
	
public:
	AInfiniteTerrainGameMode();

	UFUNCTION(BlueprintCallable, Category = "Bounds Pool")
	void PopulateBoundsVolumePool();

	//UFUNCTION(BlueprintCallable, Category = "Scoring")
	//void NewTileConquered();

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
	//int32 Score = 0;
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Nav Mesh Bounds Volume Pool")
	UActorPool* NavMeshBoundsVolumePool;

private:
	UFUNCTION()
	void AddToPool(ANavMeshBoundsVolume *VolumeToAdd);
};
