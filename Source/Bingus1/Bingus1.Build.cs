// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Bingus1 : ModuleRules
{
	public Bingus1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
