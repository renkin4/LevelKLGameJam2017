// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainStruct.h"
#include "Hero_Base.generated.h"

UCLASS()
class GAMEJAMLEVELUPKL2017_API AHero_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHero_Base();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Hero Stats")
	FHeroesStats HeroStats;

};
