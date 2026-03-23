// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

using UnrealBuildTool;

public class MLSLabsRendererImporter : ModuleRules
{
	public MLSLabsRendererImporter(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        IWYUSupport = IWYUSupport.KeepAsIs;

        //////////////////////////////////
        bEnableExceptions = true;
		bUseRTTI = true;

		AddEngineThirdPartyPrivateStaticDependencies(Target, "Imath");
		AddEngineThirdPartyPrivateStaticDependencies(Target, "UEOpenExr");
		AddEngineThirdPartyPrivateStaticDependencies(Target, "zlib");
		//////////////////////////////////

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Projects",
				"InputCore",
				"EditorFramework",
				"UnrealEd",
				"ToolMenus",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "RenderCore",
                "ApplicationCore",
				// ... add private dependencies that you statically link with here ...	
				"EditorScriptingUtilities",

				"MLSLabsRenderer", 
				"PythonScriptPlugin"
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
