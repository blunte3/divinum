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

	InputComponent->BindAxis(TEXT("", Object:this, &ADefaultToken::MoveForward));
	InputComponent->BindAxis(TEXT("", Object:this, &ADefaultToken::MoveBackward));
	InputComponent->BindAxis(TEXT("", Object:this, &ADefaultToken::MoveLeft));
	InputComponent->BindAxis(TEXT("", Object:this, &ADefaultToken::MoveRight));

}