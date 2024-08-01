// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FreshPickup.generated.h"

UCLASS()
class BINGUS1_API AFreshPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFreshPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MyMesh;

	UPROPERTY(EditDefaultsOnly, Category = " The Blingus") class UInterpToMovementComponent* MovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pathing", meta = (ExposeOnSpawn = "true", MakeEditWidget = "true"))
	TArray<FVector> ThePath;

	UFUNCTION(BlueprintCallable, Category = "Stevenson218")
	void MyGoofyFunction();



};
