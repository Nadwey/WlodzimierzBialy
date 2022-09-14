// Fill out your copyright notice in the Description page of Project Settings.


#include "Character2D.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACharacter2D::ACharacter2D()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacter2D::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter2D::Tick(float DeltaTime)
{
	FVector playerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	FRotator newRotation = UKismetMathLibrary::FindLookAtRotation(this->GetActorLocation(), playerLocation);

	this->SetActorRotation(newRotation);

	Super::Tick(DeltaTime);
}