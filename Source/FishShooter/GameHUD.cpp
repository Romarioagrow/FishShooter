// Copyright A.T. Chamillard. All Rights Reserved.


#include "GameHUD.h"
#include "Kismet/GameplayStatics.h"
#include "EventManagerActor.h"

/**
 * Draws the HUD
*/
void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	// draw kills
	DrawText(KillLabel + FString::FromInt(Kills),
		FLinearColor::White,
		LeftOffset, TopOffset, HudFont);
}

/**
 * Adds a kill to the kill count
*/
void AGameHUD::AddKill()
{
	Kills++;
}

FDelegateHandle AGameHUD::AddToKillAddedEvent(FKillAddedEvent& KillAddedEvent)
{
	return KillAddedEvent.AddUObject(this, &AGameHUD::AddKill);
}

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->AddListener(this);
	}
}

void AGameHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "EventManager", TaggedActors);
	if (TaggedActors.Num() > 0)
	{
		AEventManagerActor* EventManager = Cast<AEventManagerActor>(TaggedActors[0]);
		EventManager->RemoveListener(this);
	}
}
