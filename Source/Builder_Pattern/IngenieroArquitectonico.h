// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorDeAlojamiento.h"
#include "IngenieroArquitectonico.generated.h"

UCLASS()
class BUILDER_PATTERN_API AIngenieroArquitectonico : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIngenieroArquitectonico();

private:
	//El Constructor Actor, que debe ser un ConstructorDeAlojamiento
	IConstructorDeAlojamiento* ConstructorDeAlojamiento;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Establecer el Actor Constructor
	void EstablecerConstructorDeAlojamiento(AActor* _Constructor);

	//Crea los edificios
	void ConstruirAlojamiento();

	//Obtener el alojamiento
	class AAlojamiento* ObtenerAlojamiento();

};
