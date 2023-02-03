// Copyright Epic Games, Inc. All Rights Reserved.


#include "Builder_PatternGameModeBase.h"
#include "ConstructorDeAlojamientoHotelero.h"
#include "IngenieroArquitectonico.h"
#include "Alojamiento.h"

ABuilder_PatternGameModeBase::ABuilder_PatternGameModeBase()
{
	//Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ABuilder_PatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Engendramos el ConstructorDeAlojamientoHotelero y al IngenieroArquitectonico
	ConstructorDeHoteles = GetWorld()->SpawnActor<AConstructorDeAlojamientoHotelero>(AConstructorDeAlojamientoHotelero::StaticClass());
	Ingeniero = GetWorld()->SpawnActor<AIngenieroArquitectonico>(AIngenieroArquitectonico::StaticClass());

	//Establecer el Constructor para el Ingeniero y crea los edificios
	Ingeniero->EstablecerConstructorDeAlojamiento(ConstructorDeHoteles);
	Ingeniero->ConstruirAlojamiento();

	//Consigue el alojamiento del ingeniero y registra los edificios creados
	AAlojamiento* Alojamiento = Ingeniero->ObtenerAlojamiento();
	Alojamiento->CaracteristicasDelAlojamiento();

}

void ABuilder_PatternGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
