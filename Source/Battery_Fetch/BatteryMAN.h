// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h" 
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "Blueprint/UserWidget.h"

#include "BatteryMAN.generated.h"

UCLASS()
class BATTERY_FETCH_API ABatteryMAN : public ACharacter
{
	GENERATED_BODY()

public:
	// A constructor which helps us create an object of the class
	ABatteryMAN();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;

	void MoveForward(float axis);
	void MoveRight(float axis);

	bool bDead; 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float Power;
	UPROPERTY(EditAnywhere)
		float Power_threshold;
	UFUNCTION()                   //Delegate Function
		void OnBeginOverlap(class UPrimitiveComponent* HitComp, 
			class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
