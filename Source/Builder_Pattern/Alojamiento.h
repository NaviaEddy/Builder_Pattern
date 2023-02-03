// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlantaBaja.h"
#include "Alojamiento.generated.h"

UCLASS()
class BUILDER_PATTERN_API AAlojamiento : public AActor, public IPlantaBaja
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAlojamiento();

private:
	//El nombre de la piscina
	FString Piscina;

	//El nombre del vestibulo
	FString Vestibulo;

	//El nombre de las habitaciones
	FString Habitaciones;

	//El nombre de los restaurantes
	FString Restaurantes;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Establecer el nombre de la piscina
	void EstablecerPiscina(FString myPiscina) override;

	//Establecer el nombre del vestibulo
	void EstablecerVestibulo(FString myVestibulo) override;

	//Establecer el nombre de las habitaciones
	void EstablecerHabitaciones(FString myHabitacion) override;

	//Establecer el nombre de los restaurantes
	void EstablecerRestaurantes(FString myRestaurante) override;

	//Registra todos los pisos del alojamiento
	FORCEINLINE void CaracteristicasDelAlojamiento();


};
