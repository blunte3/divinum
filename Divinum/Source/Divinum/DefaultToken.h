// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DefaultToken.generated.h"

UCLASS()
class DIVINUM_API ADefaultToken : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADefaultToken();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveForward();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveBackward();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveLeft();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveRight();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
