// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

#include"Components/BoxComponent.h"
#include"Components/StaticMeshComponent.h"
#include"Components/ArrowComponent.h"
#include"Camera/CameraComponent.h"
#include"GameFramework/SpringArmComponent.h"
#include"GameFramework/FloatingPawnMovement.h"



// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	 
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = Box;

	Flight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flight"));
	Flight->SetupAttachment(Box);

	PP_L = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PP_L"));
	PP_L->SetupAttachment(Flight);

	PP_R = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PP_R"));
	PP_R->SetupAttachment(Flight);

	PP_C = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PP_C"));
	PP_C->SetupAttachment(Flight);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Box);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(Box);

	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
	










}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPawn::RotatePropeller(UStaticMeshComponent* Where)
{

	Where->AddLocalRotation(FRotator(0, 0, 3600.f * UGameplayStatics::GetWorldDeltaSeconds(GetWorld())));

}

void AMyPawn::Boost()
{
}

void AMyPawn::Short()
{
}

