// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Battery_Fetch : ModuleRules
{
	public Battery_Fetch(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
