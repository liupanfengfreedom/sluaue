// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaActor.h"
#include "GameManagerbase.generated.h"

UCLASS()
class SLUA_PRIMARY_API AGameManagerbase : public ALuaActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManagerbase();
	UPROPERTY()
		UWorld* gworld;
	UPROPERTY()
		class USlua_GameInstance* Slua_GameInstance;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
