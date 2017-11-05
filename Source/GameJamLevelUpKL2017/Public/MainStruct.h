// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundBase.h"
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
	MT_Hero			 UMETA(DisplayName = "Hero"),
	MT_Protective	 UMETA(DisplayName = "Protective"),
	MT_Skilled		 UMETA(DisplayName = "Skilled"),
	MT_Confident	 UMETA(DisplayName = "Confident"),
	MT_Charming		 UMETA(DisplayName = "Charming"),
	MT_Smart		 UMETA(DisplayName = "Smart"),
	MT_Ridiculous	 UMETA(DisplayName = "Ridiculous"),
	MT_Persuasive	 UMETA(DisplayName = "Persuasive"),
	MT_Streategist	 UMETA(DisplayName = "Streategist"),
	MT_Stealth		 UMETA(DisplayName = "Stealth")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heroes Stats")
	int32 HeroIndex;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	FString MyName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	USoundBase* MySound;
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
	float PenaltySuccessRate = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Requirement")
	int32 MaxHeroes;
};

USTRUCT(BlueprintType)
struct FMissionInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Info")
	FString MyName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mission Info")
	FString Description;
};

USTRUCT(BlueprintType)
struct FHeroesStatsIncrementation
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats Incrementation")
	float IncrementationAgility;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats Incrementation")
	float IncrementationStrength;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats Incrementation")
	float IncrementationCharm;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats Incrementation")
	float IncrementationIntelligent;
};