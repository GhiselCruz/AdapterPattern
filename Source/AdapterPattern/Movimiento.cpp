// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento.h"

// Sets default values
AMovimiento::AMovimiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    

	// Inicializar valores de movimiento
	incremento = 200.0f;
	moverseY = true;
	moverseZ = true;
}

// Called when the game starts or when spawned
void AMovimiento::BeginPlay()
{
	Super::BeginPlay();
	
	/*inicialY = GetActorLocation();
	posicionInicialY = inicialY + FVector(0.f, 2000.f, 0.f); 
    posicionFinalY = inicialY + FVector(0.f, -2000.f, 0.f);

	inicialZ = GetActorLocation();
	posicionInicialZ = inicialZ + FVector(0.f, 0.f, 50.f); 
    posicionFinalZ = inicialZ + FVector(0.f, 0.f, -50.f);*/
}

// Called every frame
void AMovimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    

}

void AMovimiento::Moverse()
{

    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Movimiento apliacado")));


    /*posicionActualY = GetActorLocation();

    FVector posicionActual = GetActorLocation();

    // Movimiento en Y
    if (moverseY)
    {
        if (posicionActual.Y > posicionFinalY.Y)
            posicionActual.Y -= incremento;
        else
            moverseY = false;
    }
    else
    {
        if (posicionActual.Y < posicionInicialY.Y)
            posicionActual.Y += incremento;
        else
            moverseY = true;
    }

    // Movimiento en Z
    if (moverseZ)
    {
        if (posicionActual.Z > posicionFinalZ.Z)
            posicionActual.Z -= incremento;
        else
            moverseZ = false;
    }
    else
    {
        if (posicionActual.Z < posicionInicialZ.Z)
            posicionActual.Z += incremento;
        else
            moverseZ = true;
    }

    // Actualizar la ubicación del actor
    SetActorLocation(posicionActual);*/


}

