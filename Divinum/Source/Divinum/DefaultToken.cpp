// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultToken.h"

// Sets default values
ADefaultToken::ADefaultToken()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADefaultToken::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADefaultToken::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADefaultToken::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ADefaultToken::movement(int xpos, int ypos, int dir, int movespeed) {
	//should take in the location of the selected token, look in the direction it needs to go, and move number of squares based on movespeed
}