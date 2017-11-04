// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainStruct.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAMLEVELUPKL2017_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Heroes Stats Incrementation")
	TArray<FHeroesStatsIncrementation> HeroesStatsIncrementation;
};
