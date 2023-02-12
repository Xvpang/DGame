// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DGame : ModuleRules
{
	public DGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
	        "Core",
	        "CoreUObject", 
	        "Engine",
	        "EngineSettings",
	        
	        "InputCore", 
	        "EnhancedInput",
	        
	        "UMG",
	        "Slate",
	        "SlateCore",
	        
	        "NavigationSystem", 
	        "AIModule",
	        
	        "Niagara",
	        "OnlineSubsystem",
	        
	        "DeveloperSettings",
        });
    }
}
