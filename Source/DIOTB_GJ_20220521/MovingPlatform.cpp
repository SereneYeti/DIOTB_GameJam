// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();	
	
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{	
	FRotator CurrentRot = GetActorRotation();
	CurrentRot +=  RotationVelocity * DeltaTime;
	SetActorRotation(CurrentRot);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{	
	if (ShouldPlatformReturn())
	{		
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MovedDistance;
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;		
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();	
		CurrentLocation += PlatformVelocity * DeltaTime;
		SetActorLocation(CurrentLocation);		
	}
}

float AMovingPlatform::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}

bool AMovingPlatform::ShouldPlatformReturn() const
{		
	return GetDistanceMoved() > MovedDistance;
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}


