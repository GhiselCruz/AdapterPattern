// Fill out your copyright notice in the Description page of Project Settings.


#include "MivimientoAdapter.h"
#include "Movimiento.h"

// Sets default values
AMivimientoAdapter::AMivimientoAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMivimientoAdapter::BeginPlay()
{
	Super::BeginPlay();

	Movimiento = GetWorld()->SpawnActor<AMovimiento>(AMovimiento::StaticClass());
}

// Called every frame
void AMivimientoAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
}

void AMivimientoAdapter::Cargar()
{
	Movimiento->Moverse();
}

