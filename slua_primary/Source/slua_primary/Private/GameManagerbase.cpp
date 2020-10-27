// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManagerbase.h"
#include "Slua_GameInstance.h"

// Sets default values
AGameManagerbase::AGameManagerbase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameManagerbase::BeginPlay()
{
	gworld = GetWorld();
	Slua_GameInstance = Cast<USlua_GameInstance>(GetGameInstance());
	LuaFilePath = "gamemanager";
	Super::BeginPlay();
	//TArray<FLuaBPVar>par;
	//par.Add(FLuaBPVar("json"));
	//par.Add(FLuaBPVar(3));
	//FLuaBPVar ret = CallLuaMember("bpcall", par);
	//FString str = ret.value.asString();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, str);
	
}

// Called every frame
void AGameManagerbase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

