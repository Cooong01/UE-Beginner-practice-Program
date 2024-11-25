// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectTencent01 : ModuleRules
{
	public ProjectTencent01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
