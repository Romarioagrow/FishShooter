// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once
#include "GameHUD.h"
#include "TeddyBear.h"
#include "Delegates/DelegateInstanceInterface.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventManagerActor.generated.h"

UCLASS()
class FISHSHOOTER_API AEventManagerActor : public AActor
{
	GENERATED_BODY()

private:
	TArray<ATeddyBear*> KillAddedEventInvokers;

	TMap<AGameHUD*, TMap<ATeddyBear*, FDelegateHandle>> KillAddedEventListeners;

public:	
	// Sets default values for this actor's properties
	AEventManagerActor();

	void AddInvoker(ATeddyBear* Invoker);

	void RemoveInvoker(ATeddyBear* Invoker);

	void AddListener(AGameHUD* Listener);

	void RemoveListener(AGameHUD* Listener);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
