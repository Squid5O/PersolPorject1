// Fill out your copyright notice in the Description page of Project Settings.


#include "juingongCharcter.h"


// Sets default values
AjuingongCharcter::AjuingongCharcter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AjuingongCharcter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AjuingongCharcter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AjuingongCharcter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Set up action bindings
}

