// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GetMac.generated.h"

UCLASS()
class AIAVATARTEST_API AGetMac : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGetMac();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public: 
	// string str;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		TArray<int32> mac;
};
