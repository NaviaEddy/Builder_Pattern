// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorDeAlojamiento.h"
#include "ConstructorDeAlojamientoHotelero.generated.h"

UCLASS()
class BUILDER_PATTERN_API AConstructorDeAlojamientoHotelero : public AActor, public IConstructorDeAlojamiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstructorDeAlojamientoHotelero();

private:
	//El Actor Alojamiento
	UPROPERTY(VisibleAnywhere, Category = "Alojamiento Hotelero")
		class AAlojamiento* Alojamiento;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Crear la piscina
	void ConstruirPiscina() override;

	//Crear el vestibulo
	void ConstruirVestibulo() override;

	//Crear las habitaciones
	void ConstruirHabitaciones() override;

	//Crear los restaurantes
	void ConstruirRestaurantes() override;

	//Devuelve el alojamiento
	AAlojamiento* ObtenerAlojamiento() override;

};
