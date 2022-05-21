// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DIOTB_GJ_20220521 : ModuleRules
{
	public DIOTB_GJ_20220521(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
