// Fill out your copyright notice in the Description page of Project Settings.


#include "Alojamiento.h"

// Sets default values
AAlojamiento::AAlojamiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAlojamiento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAlojamiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAlojamiento::EstablecerPiscina(FString myPiscina)
{
	//Establecer el nombre de la piscina con la cadena pasada
	Piscina = myPiscina;
}

void AAlojamiento::EstablecerVestibulo(FString myVestibulo)
{
	//Establecer el nombre del vestibulo con la cadena pasada
	Vestibulo = myVestibulo;
}

void AAlojamiento::EstablecerHabitaciones(FString myHabitacion)
{
	//Establecer el nombre de la habitacion con la cadena pasada
	Habitaciones = myHabitacion;
}

void AAlojamiento::EstablecerRestaurantes(FString myRestaurante)
{
	//Establecer el nombre del restaurante con la cadena pasada
	Restaurantes = myRestaurante;
}

void AAlojamiento::CaracteristicasDelAlojamiento()
{
	//Registra el nombre de cada planta
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Piscina));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Vestibulo));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Habitaciones));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Restaurantes));

}



