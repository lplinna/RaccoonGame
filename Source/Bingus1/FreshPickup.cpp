

// Fill out your copyright notice in the Description page of Project Settings.


#include "FreshPickup.h"
#include "Components/InterpToMovementComponent.h"

// Sets default values
AFreshPickup::AFreshPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MyMesh;


	MovementComponent = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("Movement Component"));

	MovementComponent->Duration = 5.0f;
	MovementComponent->bSweep = true;
	MovementComponent->BehaviourType = EInterpToBehaviourType::PingPong;



}

// Called when the game starts or when spawned
void AFreshPickup::BeginPlay()
{
	Super::BeginPlay();

	MovementComponent->ControlPoints.Add(FInterpControlPoint(FVector(0.f, 0.f, 0.f), true));
	for (int i = 0; i < ThePath.Num(); i++)
	{
		MovementComponent->ControlPoints.Add(FInterpControlPoint(ThePath[i], true));
	}
	MovementComponent->FinaliseControlPoints();
	
}

// Called every frame
void AFreshPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

void AFreshPickup::MyGoofyFunction()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("I AM BALLIN, I AM FADED"));
}

