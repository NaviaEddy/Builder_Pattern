// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ConstructorDeAlojamiento.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UConstructorDeAlojamiento : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BUILDER_PATTERN_API IConstructorDeAlojamiento
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

    //Las funciones virtuales puras de ConstructorDeAlojamiento
    virtual void ConstruirPiscina() = 0;
    virtual void ConstruirVestibulo() = 0;
    virtual void ConstruirHabitaciones() = 0;
    virtual void ConstruirRestaurantes() = 0;
    virtual class AAlojamiento* ObtenerAlojamiento() = 0;

};
