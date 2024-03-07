// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_craken.h"

#include "Kismet/GameplayStatics.h"
#include "dragon/dragonCharacter.h"

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

	//target = GetWorld()->GetFirstPlayerController()->GetPawn;
	target = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
}

// Called every frame
void AEnemy_craken::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector dir = target->GetActorLocation() - this->GetActorLocation();
	FVector P0 = GetActorLocation();
	FVector vt = dir.GetSafeNormal() * speed * DeltaTime;
	SetActorLocation(P0 + vt);

}

// Called to bind functionality to input
void AEnemy_craken::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy_craken::OnMyCompBeginOverLap(UPrimitiveComponent* OnComponentBeginOverlap, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
		OtherActor->Destroy();
}

