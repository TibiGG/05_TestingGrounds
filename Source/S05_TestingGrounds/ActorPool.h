// Copyright SeeShore Games.inc

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorPool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class S05_TESTINGGROUNDS_API UActorPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorPool();

	UFUNCTION()
	AActor* Checkout();

	UFUNCTION()
	void Return(AActor* ActorToReturn);

	UFUNCTION()
	void Add(AActor* ActorToAdd);

private:
	TArray<AActor*> Pool;
};
