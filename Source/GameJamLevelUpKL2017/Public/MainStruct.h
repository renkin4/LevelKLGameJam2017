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

UENUM(BlueprintType)
enum class EBonusTraits : uint8
{
	BT_Agility			UMETA(DisplayName = "Agility"),
	BT_Intelligent		UMETA(DisplayName = "Intelligent"),
	BT_Strength			UMETA(DisplayName = "Strength"),
	BT_Charm			UMETA(DisplayName = "Charm")
};


UENUM(BlueprintType)
enum class EMissionTraits : uint8
{
	MT_Smart	 UMETA(DisplayName = "Smart"),
	MT_Flithy	 UMETA(DisplayName = "Flithy"),
	MT_Math		 UMETA(DisplayName = "Math"),
	MT_Science	 UMETA(DisplayName = "Science"),
	MT_4		 UMETA(DisplayName = "4"),
	MT_5		 UMETA(DisplayName = "5"),
	MT_6		 UMETA(DisplayName = "6")
};

USTRUCT(BlueprintType)
struct FHeroesTraitsProgression
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
	TArray<EMissionTraits> HeroesTraits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	float Charm = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	float Agility = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	float Strength = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	float Intelligent = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heroes Stats")
	UTexture2D* MyIcon;
};

USTRUCT(BlueprintType)
struct FMissionRequirement
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirement")
	TArray<EMissionTraits> MissionTraits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirement")
	EBonusTraits BonusTraits;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirement")
	int32 MaxHeroes;
};
