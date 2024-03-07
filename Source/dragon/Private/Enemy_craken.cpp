// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_craken.h"

// Sets default values
AEnemy_craken::AEnemy_craken()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy_craken::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy_craken::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy_craken::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

