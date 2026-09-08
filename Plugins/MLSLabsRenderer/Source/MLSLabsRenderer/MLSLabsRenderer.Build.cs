// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.
using System;
using System.IO;
using UnrealBuildTool;

public class MLSLabsRenderer : ModuleRules
{
    public MLSLabsRenderer(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        IWYUSupport = IWYUSupport.KeepAsIs;
        // UE 5.6 packaged games link Installed marketplace plugins from UnrealGame
        // Development .precompiled (5.5 did not require this). Keep game+editor precompile.
        PrecompileForTargets = PrecompileTargetsType.Any;

        string PrivateSceneRenderingPath = EngineDirectory + "/Source/Runtime/Renderer/Private";
        if (System.IO.Directory.Exists(PrivateSceneRenderingPath))
        {
            PrivateIncludePaths.Add(PrivateSceneRenderingPath);
        }

        string InternalSceneRenderingPath = EngineDirectory + "/Source/Runtime/Renderer/Internal";
        if (System.IO.Directory.Exists(InternalSceneRenderingPath))
        {
            PrivateIncludePaths.Add(InternalSceneRenderingPath);
        }

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "RenderCore",
                "RHI",
                "Renderer",
                "Projects",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "HTTP",
                "SSL",
                "InputCore",
                "ImageCore",
                "ImageWrapper",
                "Json",
                "RHICore",
                "Renderer",
                "RenderCore",
                "UMG",
                "LevelSequence",
                "Slate",
                "SlateCore"
            }
        );

        if (Target.Platform.IsInGroup(UnrealPlatformGroup.Windows))
        {
            PublicDependencyModuleNames.Add("D3D12RHI");
            PrivateDependencyModuleNames.Add("D3D12RHI");
            // Windows Vulkan RHI path (UE -vulkan): needed for IVulkanDynamicRHI.h / external memory interop.
            PublicDependencyModuleNames.Add("VulkanRHI");
            PrivateDependencyModuleNames.Add("VulkanRHI");
            AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
        }
        else if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            PublicDependencyModuleNames.Add("VulkanRHI");
            PrivateDependencyModuleNames.Add("VulkanRHI");
            // IVulkanDynamicRHI.h pulls VulkanThirdParty.h -> <vulkan.h>; paths come from Engine ThirdParty Vulkan (VulkanRHI keeps this private).
            AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            // Android uses Vulkan RHI; keep module able to query device UUID during deferred GSR init.
            PublicDependencyModuleNames.Add("VulkanRHI");
            PrivateDependencyModuleNames.Add("VulkanRHI");
            AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
            // AHardwareBuffer_release / acquire for GSR Vulkan AHB interop.
            PublicSystemLibraries.Add("android");
        }

        string PrivateDir = Path.Combine(ModuleDirectory, "Private");
        string LogoPath = Path.Combine(PluginDirectory, "Resources", "logo.png");
        string OutInlPath = Path.Combine(PrivateDir, "EmbeddedLogo.inl");
        if (Directory.Exists(PrivateDir))
        {
            if (File.Exists(LogoPath))
            {
                byte[] Bytes = File.ReadAllBytes(LogoPath);
                using (StreamWriter Sw = new StreamWriter(OutInlPath, false, new System.Text.UTF8Encoding(false)))
                {
                    Sw.WriteLine("// Auto-generated from Resources/logo.png. Do not edit.");
                    for (int i = 0; i < Bytes.Length; i++)
                    {
                        if (i % 16 == 0) Sw.Write("\n\t");
                        Sw.Write("0x" + Bytes[i].ToString("X2"));
                        if (i < Bytes.Length - 1) Sw.Write(", ");
                    }
                }
            }
            else
            {
                using (StreamWriter Sw = new StreamWriter(OutInlPath, false, new System.Text.UTF8Encoding(false)))
                {
                    Sw.WriteLine("// No logo.png found; empty array.");
                    Sw.Write("\t0x00");
                }
            }
        }

        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "UnrealEd",
                    "Slate",
                    "SlateCore",
                    "EditorFramework"
                }
            );
        }

        if (Target.Platform.IsInGroup(UnrealPlatformGroup.Windows))
        {
            // Stage in-place under Source/ThirdParty (files already exist there).
            // Do NOT two-arg copy to Plugin/Binaries: Installed marketplace plugins skip
            // that UBT copy (IsFileInstalled), then UAT fails staging a missing dest.
            // Do NOT copy libwebp.dll / libsharpyuv.dll into GSR Bin/Win64 — they stay in libwebp/bin.
            StageLooseNativeRuntimeDirectory(
                Path.Combine(PluginDirectory, "Source", "ThirdParty", "GaussianSplatingRenderer", "Bin", "Win64"),
                "libwebp.dll", "libsharpyuv.dll");
            StageLooseNativeRuntimeDirectory(
                Path.Combine(PluginDirectory, "Source", "ThirdParty", "libwebp", "bin"));
        }
        else if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            StageLooseNativeRuntimeDirectory(
                Path.Combine(PluginDirectory, "Source", "ThirdParty", "GaussianSplatingRenderer", "Bin", "Linux"));
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            // Prebuilt arm64-v8a libs are staged into the APK via MLSLabsRenderer_APL.xml (resourceCopies + soLoadLibrary).
            string AndroidRendererDir = Path.Combine(PluginDirectory, "Source", "ThirdParty", "GaussianSplatingRenderer", "Bin", "Android", "arm64-v8a");
            // Ship NDK libc++_shared.so: UE Shipping typically links c++_static and does not
            // package libc++_shared, but GSR/OpenMesh DT_NEEDED it (PICO dlopen otherwise fails).
            string[] AndroidSos =
            {
                "libc++_shared.so",
                "libGaussianSplatingRenderer.so",
                "libOpenMeshCore.so",
                "libomp.so",
            };
            foreach (string SoName in AndroidSos)
            {
                string SoPath = Path.Combine(AndroidRendererDir, SoName);
                if (File.Exists(SoPath))
                {
                    RuntimeDependencies.Add(SoPath);
                }
            }
            string AndroidShaderPath = Path.Combine(AndroidRendererDir, "vulkan_rasterizer.shader");
            if (File.Exists(AndroidShaderPath))
            {
                // Native GSR fopen's this zip package as vulkan_rasterizer.shader next to the .so.
                RuntimeDependencies.Add(AndroidShaderPath, StagedFileType.NonUFS);
            }

            // Windows 登录后导出的 MLSLabsAuthStorage.ini，随 APK 下发供 Pico/Android 首启免登录。
            if (!Target.bBuildEditor && Target.ProjectFile != null)
            {
                string PackagedAuthIni = Path.Combine(Target.ProjectFile.Directory.FullName, "Config", "Android", "MLSLabsAuthStorage.ini");
                if (File.Exists(PackagedAuthIni))
                {
                    RuntimeDependencies.Add("$(ProjectDir)/Config/Android/MLSLabsAuthStorage.ini", StagedFileType.NonUFS);
                }
                else
                {
                    System.Console.WriteLine(
                        "MLSLabsRenderer: Config/Android/MLSLabsAuthStorage.ini not found — log in on Windows Editor first to export auth for Android APK.");
                }
            }

            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "MLSLabsRenderer_APL.xml"));
        }

        string PasswordVisibilitySvg = Path.Combine(PluginDirectory, "Resources", "password_visibility.svg");
        if (File.Exists(PasswordVisibilitySvg))
        {
            RuntimeDependencies.Add(PasswordVisibilitySvg);
        }

        // Loose PLY / SOG / mlslabs: native GSR uses fopen, so these must be NonUFS (not pak/UFS).
        // SystemNonUFS is for third-party .so and is not deployed as game content.
        if (!Target.bBuildEditor && Target.ProjectFile != null)
        {
            string PlyStagingRoot = Path.Combine(Target.ProjectFile.Directory.FullName, "Content", "MLSLabsRenderer", "ply");
            if (Directory.Exists(PlyStagingRoot))
            {
                RuntimeDependencies.Add("$(ProjectDir)/Content/MLSLabsRenderer/ply/...", StagedFileType.NonUFS);
            }

            string SogStagingRoot = Path.Combine(Target.ProjectFile.Directory.FullName, "Content", "MLSLabsRenderer", "sog");
            if (Directory.Exists(SogStagingRoot))
            {
                RuntimeDependencies.Add("$(ProjectDir)/Content/MLSLabsRenderer/sog/...", StagedFileType.NonUFS);
            }

            string MlslabsStagingRoot = Path.Combine(Target.ProjectFile.Directory.FullName, "Content", "MLSLabsRenderer", "mlslabs");
            if (Directory.Exists(MlslabsStagingRoot))
            {
                RuntimeDependencies.Add("$(ProjectDir)/Content/MLSLabsRenderer/mlslabs/...", StagedFileType.NonUFS);
            }
        }
    }

    /// <summary>
    /// Stage every loose native file in-place as NonUFS so packaged games can
    /// LoadLibrary/fopen them from Source/ThirdParty (same layout as the editor).
    /// </summary>
    private void StageLooseNativeRuntimeDirectory(string NativeDir, params string[] SkipFileNames)
    {
        if (!Directory.Exists(NativeDir))
        {
            return;
        }

        foreach (string SourcePath in Directory.GetFiles(NativeDir))
        {
            string FileName = Path.GetFileName(SourcePath);
            if (SkipFileNames != null)
            {
                bool bSkip = false;
                foreach (string SkipName in SkipFileNames)
                {
                    if (FileName.Equals(SkipName, StringComparison.OrdinalIgnoreCase))
                    {
                        bSkip = true;
                        break;
                    }
                }
                if (bSkip)
                {
                    continue;
                }
            }

            string Ext = Path.GetExtension(SourcePath);
            if (Ext.Equals(".lib", StringComparison.OrdinalIgnoreCase)
                || Ext.Equals(".exp", StringComparison.OrdinalIgnoreCase)
                || Ext.Equals(".ilk", StringComparison.OrdinalIgnoreCase)
                || Ext.Equals(".def", StringComparison.OrdinalIgnoreCase)
                || Ext.Equals(".a", StringComparison.OrdinalIgnoreCase)
                || Ext.Equals(".pdb", StringComparison.OrdinalIgnoreCase))
            {
                continue;
            }

            ExternalDependencies.Add(SourcePath);
            RuntimeDependencies.Add(SourcePath, StagedFileType.NonUFS);
        }
    }
}
