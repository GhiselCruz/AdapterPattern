// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IAdapter.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MivimientoAdapter.generated.h"

UCLASS()
class ADAPTERPATTERN_API AMivimientoAdapter : public AActor, public IIAdapter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMivimientoAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	class AMovimiento* Movimiento;

public:
	void Cargar() override;

};
