// Fill out your copyright notice in the Description page of Project Settings.


#include "IngenieroArquitectonico.h"
#include "Alojamiento.h"

// Sets default values
AIngenieroArquitectonico::AIngenieroArquitectonico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIngenieroArquitectonico::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIngenieroArquitectonico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIngenieroArquitectonico::EstablecerConstructorDeAlojamiento(AActor* _Constructor)
{
	//Lanza el Actor pasado y establece el Constructor
	ConstructorDeAlojamiento = Cast<IConstructorDeAlojamiento>(_Constructor);

	if (!ConstructorDeAlojamiento) //Error de registro si falla el lanzamiento
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Lanzamiento no valido! Ver Registro de salida para más detalles")));
		UE_LOG(LogTemp, Error, TEXT("EstablecerConstructorDeAlojamiento(): El actor no es un ConstructorDeAlojamiento! Esta seguro de que el Actor implementa esa interfaz?"));
	}

}

void AIngenieroArquitectonico::ConstruirAlojamiento()
{
	//Registrar si el Constructor es NULL
	if (!ConstructorDeAlojamiento) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirAlojamiento(): ConstructorDeAlojamiento es NULL, asegurese de que este inicializado.")); 
		return;
	}

	//Crea los edificios
	ConstructorDeAlojamiento->ConstruirPiscina();
	ConstructorDeAlojamiento->ConstruirVestibulo();
	ConstructorDeAlojamiento->ConstruirHabitaciones();
	ConstructorDeAlojamiento->ConstruirRestaurantes();


}

AAlojamiento* AIngenieroArquitectonico::ObtenerAlojamiento()
{
	if (ConstructorDeAlojamiento)
	{
		//Devuelve el alojamiento del constructor
		return ConstructorDeAlojamiento->ObtenerAlojamiento();
	}

	//Registrar si el Constructor es NULL
	UE_LOG(LogTemp, Error, TEXT("ObtenerAlojamiento(): Devuelve nullptr"));
	return nullptr;
}

