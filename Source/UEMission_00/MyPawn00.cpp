// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn00.h"

// Sets default values
AMyPawn00::AMyPawn00()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn00::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn00::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn00::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

