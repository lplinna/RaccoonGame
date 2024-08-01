// Fill out your copyright notice in the Description page of Project Settings.


#include "RaccoonPlayer.h"

// Sets default values
ARaccoonPlayer::ARaccoonPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARaccoonPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARaccoonPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARaccoonPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Set up "movement" bindings.
	PlayerInputComponent->BindAxis("MoveForward", this, &ARaccoonPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARaccoonPlayer::MoveRight);


}


void ARaccoonPlayer::MoveForward(float Value)
{
    // Find out which way is "forward" and record that the player wants to move that way.
    FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
    AddMovementInput(Direction, Value);
}

void ARaccoonPlayer::MoveRight(float Value)
{
    // Find out which way is "right" and record that the player wants to move that way.
    FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
    AddMovementInput(Direction, Value);
}
