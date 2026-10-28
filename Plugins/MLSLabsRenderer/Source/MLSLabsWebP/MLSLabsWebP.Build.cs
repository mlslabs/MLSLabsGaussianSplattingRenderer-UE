// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class MLSLabsWebP : ModuleRules
{
    public MLSLabsWebP(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.CPlusPlus;
        PCHUsage = PCHUsageMode.NoPCHs;
        IWYUSupport = IWYUSupport.None;
        bUseUnity = false;
        bUseRTTI = false;
        bEnableExceptions = false;
        bDisableStaticAnalysis = true;
        bWarningsAsErrors = false;
        CppCompileWarningSettings.UndefinedIdentifierWarningLevel = WarningLevel.Off;
        CppCompileWarningSettings.ShadowVariableWarningLevel = WarningLevel.Off;
        CppCompileWarningSettings.UnsafeTypeCastWarningLevel = WarningLevel.Off;

        PublicDependencyModuleNames.Add("Core");

        // Release packages delete Private and libwebp after precompile. Link the .precompiled objects instead.
        if (!Directory.Exists(Path.Combine(ModuleDirectory, "Private")))
        {
            bUsePrecompiled = true;
        }

        // Skip include paths when the sources are gone.
        string WarningsHeader = Path.Combine(ModuleDirectory, "Private", "MLSLabsWebPWarnings.h");
        if (File.Exists(WarningsHeader))
        {
            ForceIncludeFiles.Add(WarningsHeader);
        }

        string LibRoot = Path.Combine(ModuleDirectory, "libwebp");
        if (Directory.Exists(LibRoot))
        {
            PublicIncludePaths.Add(LibRoot);
            PublicIncludePaths.Add(Path.Combine(LibRoot, "src"));
        }

        // Portable C only. Do not define WEBP_USE_THREAD (that is an #ifdef, not a 0/1 flag).
        PublicDefinitions.Add("HAVE_CONFIG_H=1");
        PublicDefinitions.Add("WEBP_DSP_OMIT_C_CODE=0");
        PublicDefinitions.Add("WEBP_DISABLE_STATS");

        if (Target.Platform.IsInGroup(UnrealPlatformGroup.Windows))
        {
            PrivateDefinitions.Add("_CRT_SECURE_NO_WARNINGS");
        }
        else
        {
            // Linux / Android clang: libwebp C sources trip unused/sign/fallthrough as errors.
            PublicSystemLibraries.Add("m");
        }
    }
}
