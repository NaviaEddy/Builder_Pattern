// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Builder_PatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BUILDER_PATTERN_API ABuilder_PatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ABuilder_PatternGameModeBase();

private:
    //El Actor Constructor
    UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
        class AConstructorDeAlojamientoHotelero* ConstructorDeHoteles;

    //El Actor Ingeniero
    UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
        class AIngenieroArquitectonico* Ingeniero;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;


};
	

