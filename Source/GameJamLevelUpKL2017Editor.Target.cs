// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GameJamLevelUpKL2017EditorTarget : TargetRules
{
	public GameJamLevelUpKL2017EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "GameJamLevelUpKL2017" } );
	}
}
