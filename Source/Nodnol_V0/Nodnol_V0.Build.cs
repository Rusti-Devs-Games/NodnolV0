// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Nodnol_V0 : ModuleRules
{
	public Nodnol_V0(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
