// Fill out your copyright notice in the Description page of Project Settings.

#include "GetMac.h"


// Sets default values
AGetMac::AGetMac()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGetMac::BeginPlay()
{
	Super::BeginPlay();

	FString uuid = FPlatformMisc::GetHashedMacAddressString();
	UE_LOG(LogTemp, Warning, TEXT("uuid is %s"), *uuid);

	//TEMP
	TArray<uint8> macAddress = FWindowsPlatformMisc::GetMacAddress();
	
	for (auto value : macAddress)
	{
		UE_LOG(LogTemp, Warning, TEXT("macAddress is %d"), value);
		mac.Add(value);
	}
}

// Called every frame
void AGetMac::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}		
