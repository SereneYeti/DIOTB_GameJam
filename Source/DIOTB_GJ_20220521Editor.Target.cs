// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DIOTB_GJ_20220521EditorTarget : TargetRules
{
	public DIOTB_GJ_20220521EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("DIOTB_GJ_20220521");
	}
}
