// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GameJamLevelUpKL2017Target : TargetRules
{
	public GameJamLevelUpKL2017Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "GameJamLevelUpKL2017" } );
	}
}
