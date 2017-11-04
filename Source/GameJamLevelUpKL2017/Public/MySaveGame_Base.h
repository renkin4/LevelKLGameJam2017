// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MainStruct.h"
#include "MySaveGame_Base.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAMLEVELUPKL2017_API UMySaveGame_Base : public USaveGame
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats")
	TArray<FHeroesStatsIncrementation> HeroesStatsIncrementation;
	
	
};
