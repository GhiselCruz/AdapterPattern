// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
//#include "Movimiento.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Inicializar la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Enemigo(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	EnemigoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla_Enemigo"));
	EnemigoMesh->SetStaticMesh(Enemigo.Object);

	SetRootComponent(EnemigoMesh);

}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

	

}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigo::Cargar()
{
	if (!adapter2) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Cargar(): El adaptador es null, revise la conversion")));
		return;
	}
	else {
		adapter2->Cargar();
	}
}

void AEnemigo::SetAdaptador(AActor* _Movimiento)
{
	adapter2 = Cast<AMivimientoAdapter>(_Movimiento);
	if (!adapter2) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("SetArma(): El actor pasado no pudo convetirse a tipo IAdapter")));
		
	}

}


