// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlantaBaja.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlantaBaja : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BUILDER_PATTERN_API IPlantaBaja
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//Las funciones virtuales puras de la PlantaBaja
	virtual void EstablecerPiscina(FString _Piscina) = 0;
	virtual void EstablecerVestibulo(FString _Vestibulo) = 0;
	virtual void EstablecerHabitaciones(FString _Habitaciones) = 0;
	virtual void EstablecerRestaurantes(FString _Restaurantes) = 0;

};
