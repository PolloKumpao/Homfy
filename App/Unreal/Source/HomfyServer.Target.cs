// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
[SupportedPlatforms(UnrealPlatformClass.Server)]
public class HomfyServerTarget : TargetRules
{
	public HomfyServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("Homfy");
	}
}
