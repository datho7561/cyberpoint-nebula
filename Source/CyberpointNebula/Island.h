// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Island.generated.h"

UCLASS()
class CYBERPOINTNEBULA_API AIsland : public AActor
{
	GENERATED_BODY()

	// TODO:
	// Make sure that this code has actually complied and is running
	// Allow this object to have a static mesh (Pointer to static mesh, then something in the init)
	// Configure Vim as the editor because I'm not used to Visual Studio

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlatformWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SpawnHumanoidRobots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SpawnTurrets;

public:	
	// Sets default values for this actor's properties
	AIsland();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
