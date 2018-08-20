// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SkeletalAnimationLODTarget : TargetRules
{
	public SkeletalAnimationLODTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "SkeletalAnimationLOD" } );
	}
}
