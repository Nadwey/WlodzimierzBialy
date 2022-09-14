// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Character2D.generated.h"

UCLASS()
class WLODZIMIERZBIALY_API ACharacter2D : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACharacter2D();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
