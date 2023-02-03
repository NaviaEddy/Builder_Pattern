// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorDeAlojamientoHotelero.h"
#include "Alojamiento.h"

// Sets default values
AConstructorDeAlojamientoHotelero::AConstructorDeAlojamientoHotelero()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConstructorDeAlojamientoHotelero::BeginPlay()
{
	Super::BeginPlay();

	//Engendramos el Actor Alojamiento
	Alojamiento = GetWorld()->SpawnActor<AAlojamiento>(AAlojamiento::StaticClass());

	//Fijando al ConstructorDeAlojamientoHotelero(Actual)
	Alojamiento->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

	
}

// Called every frame
void AConstructorDeAlojamientoHotelero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConstructorDeAlojamientoHotelero::ConstruirPiscina()
{
	if (!Alojamiento) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirPiscina(): Alojamiento es NULL, asegurese de que este inicializada."));
		return;
	}

	//Poner la piscina del alojamiento
	Alojamiento->EstablecerPiscina("Laguna cubierta");
}

void AConstructorDeAlojamientoHotelero::ConstruirVestibulo()
{
	if (!Alojamiento) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirVestibulo(): Alojamiento es NULL, asegurese de que este inicializada."));
		return;
	}

	//Configurar el vestíbulo del alojamiento
	Alojamiento->EstablecerVestibulo("Gran Salon");

}

void AConstructorDeAlojamientoHotelero::ConstruirHabitaciones()
{
	if (!Alojamiento) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirHabitaciones(): Alojamiento es NULL, asegurese de que este inicializada."));
		return;
	}

	//Establezca los Restaurantes del Alojamiento
	Alojamiento->EstablecerRestaurantes("Buffet 5 estrellas");

}

void AConstructorDeAlojamientoHotelero::ConstruirRestaurantes()
{
	if (!Alojamiento) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirRestaurantes(): Alojamiento es NULL, asegurese de que este inicializada."));
		return;
	}

	//Establecer las habitaciones del alojamiento
	Alojamiento->EstablecerHabitaciones("Suits de lujo");

}

AAlojamiento* AConstructorDeAlojamientoHotelero::ObtenerAlojamiento()
{
	return Alojamiento;
}

