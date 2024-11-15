// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "IAdapter.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AdapterPatternGameMode.generated.h"

UCLASS(minimalapi)
class AAdapterPatternGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAdapterPatternGameMode();





protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class AEnemigo* enemigo;
	class AMivimientoAdapter* enemigoAdaptado;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};



