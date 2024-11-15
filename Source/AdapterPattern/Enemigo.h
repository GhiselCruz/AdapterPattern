// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IAdapter.h"
#include "MivimientoAdapter.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class ADAPTERPATTERN_API AEnemigo : public AActor, public IIAdapter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

	// Componente de malla
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemigo")
	UStaticMeshComponent* EnemigoMesh;

	int proyectilRecordCono;
	int tiempo; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Cargar() override;
	void SetAdaptador(AActor* _Movimiento);

private:
	IIAdapter* adapter;
private:
	AMivimientoAdapter* adapter2;

public:
	void moverse();
};
