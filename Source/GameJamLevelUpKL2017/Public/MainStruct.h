// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainStruct.generated.h"

UENUM(BlueprintType)
enum class EDayNight : uint8
{
	DY_Day		UMETA(DisplayName = "Day"),
	DY_Night	UMETA(DisplayName = "Night")
};

USTRUCT(BlueprintType)
struct FHeroesTraits
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Traits")
	float Smart = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Traits")
	float Math = 0.0f;
};

USTRUCT(BlueprintType)
struct FHeroesStats
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	EDayNight DayNightTraits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	FHeroesTraits HeroesTraits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	float Charm = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	float Agility = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	float Strength = 0.0f;
};

USTRUCT(BlueprintType)
struct FMissionRequirement
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirements")
	EDayNight DayNightTraits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirements")
	FHeroesTraits HeroesTraits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirements")
	float Charm = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirements")
	float Agility = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirements")
	float Strength = 0.0f;
};
