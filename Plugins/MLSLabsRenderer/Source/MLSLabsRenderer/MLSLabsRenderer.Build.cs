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
            string libwebpLibDir = Path.Combine(PluginDirectory, "Source", "ThirdParty", "libwebp", "bin");
            string[] CoreDllsOfLibwebp = { "libwebp.dll", "libsharpyuv.dll" };
            foreach (string DllName in CoreDllsOfLibwebp)
            {
                string DllPath = Path.Combine(libwebpLibDir, DllName);
                if (File.Exists(DllPath))
                {
                    RuntimeDependencies.Add(DllPath);
                }
            }

            string RendererDllDir = Path.Combine(PluginDirectory, "Source", "ThirdParty", "GaussianSplatingRenderer", "Bin", "Win64");
            string RendererDllPath = Path.Combine(RendererDllDir, "GaussianSplatingRenderer.dll");
            if (File.Exists(RendererDllPath))
            {
                RuntimeDependencies.Add(RendererDllPath);
            }
            // Ship PDB next to the DLL for Debug/Development so the debugger can
            // resolve symbols when the module is loaded from Binaries/Win64.
            string RendererPdbPath = Path.Combine(RendererDllDir, "GaussianSplatingRenderer.pdb");
            if (File.Exists(RendererPdbPath) && Target.Configuration != UnrealTargetConfiguration.Shipping)
            {
                RuntimeDependencies.Add(RendererPdbPath);
            }
            string Tbb12DllPath = Path.Combine(RendererDllDir, "tbb12.dll");
            if (File.Exists(Tbb12DllPath))
            {
                RuntimeDependencies.Add(Tbb12DllPath);
            }
            string[] RendererRuntimeDlls =
            {
                "archive.dll",
                "bz2.dll",
                "deflate.dll",
                "libcrypto-3-x64.dll",
                "liblzma.dll",
                "libwebpdecoder.dll",
                "lz4.dll",
                "SDL3.dll",
                "vulkan-1.dll",
                "zlib1.dll",
                "zstd.dll",
            };
            foreach (string DllName in RendererRuntimeDlls)
            {
                string DllPath = Path.Combine(RendererDllDir, DllName);
                if (File.Exists(DllPath))
                {
                    RuntimeDependencies.Add(DllPath);
                }
            }
            
        }
        else if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            string LinuxRendererDir = Path.Combine(PluginDirectory, "Source", "ThirdParty", "GaussianSplatingRenderer", "Bin", "Linux");
            string SoPath = Path.Combine(LinuxRendererDir, "libGaussianSplatingRenderer.so");
            if (File.Exists(SoPath))
            {
                RuntimeDependencies.Add(SoPath);
            }
            string OpenMeshSoPath = Path.Combine(LinuxRendererDir, "libOpenMeshCore.so.11.0");
            if (File.Exists(OpenMeshSoPath))
            {
                RuntimeDependencies.Add(OpenMeshSoPath);
            }
            string VulkanShaderPath = Path.Combine(LinuxRendererDir, "vulkan_rasterizer.shader");
            if (File.Exists(VulkanShaderPath))
            {
                RuntimeDependencies.Add(VulkanShaderPath);
            }
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
}
