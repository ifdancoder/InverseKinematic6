// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Animations23 : ModuleRules
{
	public Animations23(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
