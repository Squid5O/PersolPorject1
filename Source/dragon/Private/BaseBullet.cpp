// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBullet.h"
#include "Components/SphereComponent.h"
#include "dragon/dragonCharacter.h"

// Sets default values
ABaseBullet::ABaseBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	this->SetRootComponent(SphereComp);

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABaseBullet::BeginPlay()
{
	Super::BeginPlay();

	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ABaseBullet::OnMyCompBeginOverLap);
	
}

// Called every frame
void ABaseBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector dir = GetActorForwardVector();

	FVector P0 = GetActorLocation();
	FVector vt = dir * Speed * GetWorld()->GetDeltaSeconds(); // deltatime ´ë½Å

	SetActorLocation(P0 + vt);
}

void ABaseBullet::OnMyCompBeginOverLap(UPrimitiveComponent* OnComponentBeginOverlap, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	AdragonCharacter* MyPlayerControllerActor = Cast<AdragonCharacter>(OtherActor);

	if(OtherActor != MyPlayerControllerActor){
	OtherActor->Destroy();
	//³Ê Á×°í ³ª Á×ÀÚ
	this->Destroy();
	}
}

