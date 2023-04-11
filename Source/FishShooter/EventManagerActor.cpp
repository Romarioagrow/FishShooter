// Copyright A.T. Chamillard. All Rights Reserved.

#include "EventManagerActor.h"

// Sets default values
AEventManagerActor::AEventManagerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEventManagerActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEventManagerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEventManagerActor::AddInvoker(ATeddyBear* Invoker)
{
	// add new invoker and add all listeners for new invoker
	KillAddedEventInvokers.Add(Invoker);
	for (auto& Listener : KillAddedEventListeners)
	{
		FDelegateHandle DelegateHandle = Listener.Key->AddToKillAddedEvent(Invoker->GetKillAddedEvent());
		Listener.Value.Add(Invoker, DelegateHandle);
	}
}

void AEventManagerActor::RemoveInvoker(ATeddyBear* Invoker)
{
	for (auto& Listener : KillAddedEventListeners)
	{
		if (Listener.Value.Contains(Invoker))
		{
			Invoker->GetKillAddedEvent().Remove(
				Listener.Value[Invoker]
			);
			Listener.Value.Remove(Invoker);
		}
	}
	KillAddedEventInvokers.Remove(Invoker);
}

void AEventManagerActor::AddListener(AGameHUD* Listener)
{
	KillAddedEventListeners.Add(Listener);
	for (auto& Invoker : KillAddedEventInvokers)
	{
		FDelegateHandle DelegateHandle = Listener->AddToKillAddedEvent(Invoker->GetKillAddedEvent());
		KillAddedEventListeners[Listener].Add(Invoker, DelegateHandle);
	}
}

void AEventManagerActor::RemoveListener(AGameHUD* Listener)
{
	for (auto& Invoker : KillAddedEventInvokers)
	{
		if (KillAddedEventListeners[Listener].Contains(Invoker))
		{
			Invoker->GetKillAddedEvent().Remove(
				KillAddedEventListeners[Listener][Invoker]
			);
			KillAddedEventListeners[Listener].Remove(Invoker);
		}
	}
	KillAddedEventListeners.Remove(Listener);
}



