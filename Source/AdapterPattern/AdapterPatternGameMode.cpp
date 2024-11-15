// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdapterPatternGameMode.h"
#include "AdapterPatternCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "MivimientoAdapter.h"
#include "Enemigo.h"

AAdapterPatternGameMode::AAdapterPatternGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AAdapterPatternGameMode::BeginPlay()
{
	Super::BeginPlay();

	enemigoAdaptado = GetWorld()->SpawnActor<AMivimientoAdapter>(AMivimientoAdapter::StaticClass());
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(1160.0f, 300.0f, 150.0f), FRotator::ZeroRotator);
	enemigo->SetAdaptador(enemigoAdaptado);
	enemigo->Cargar();
}

void AAdapterPatternGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
