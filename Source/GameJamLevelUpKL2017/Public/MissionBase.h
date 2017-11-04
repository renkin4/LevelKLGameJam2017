// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainStruct.h"
#include "MissionBase.generated.h"

UCLASS()
class GAMEJAMLEVELUPKL2017_API AMissionBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMissionBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Requirements")
	FMissionRequirement MissionRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Requirements")
	EDayNight DayNightTraits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Requirements")
	FHeroesTraits HeroesTraits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Requirements")
	float Charm = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Requirements")
	float Agility = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mission Requirements")
	float Strength = 0.0f;

};
