// Fill out your copyright notice in the Description page of Project Settings.

#include <string>
#include "GetMac.h"

using namespace std;

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

	// string str;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = MacAddress, meta = (AllowPrivateAccess = "true"))
		int test = 2;

	FString uuid = FPlatformMisc::GetHashedMacAddressString();
	UE_LOG(LogTemp, Warning, TEXT("uuid is %s"), *uuid);

	//TEMP
	TArray<uint8> macAddress = FWindowsPlatformMisc::GetMacAddress();
	
	// UE_LOG(LogTemp, Warning, TEXT("new- macAddress is %s"), macAddress);
	for (auto value : macAddress)
	{
		UE_LOG(LogTemp, Warning, TEXT("macAddress is %d"), value);
		//mac += value;
	}

	//UE_LOG(LogTemp, Warning, TEXT("macAddress mac is %s"), mac);
}

// Called every frame
void AGetMac::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}		
