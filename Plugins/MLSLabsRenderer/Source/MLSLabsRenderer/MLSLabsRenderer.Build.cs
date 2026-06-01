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
                "ColorManagement",
                "Slate",
                "SlateCore"
            }
        );

        if (Target.Platform.IsInGroup(UnrealPlatformGroup.Windows))
        {
            PublicDependencyModuleNames.Add("D3D12RHI");
            PrivateDependencyModuleNames.Add("D3D12RHI");
        }
        else if (Target.Platform == UnrealTargetPlatform.Linux)
        {
            PublicDependencyModuleNames.Add("VulkanRHI");
            PrivateDependencyModuleNames.Add("VulkanRHI");
            // IVulkanDynamicRHI.h pulls VulkanThirdParty.h -> <vulkan.h>; paths come from Engine ThirdParty Vulkan (VulkanRHI keeps this private).
            AddEngineThirdPartyPrivateStaticDependencies(Target, "Vulkan");
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
            string Tbb12DllPath = Path.Combine(RendererDllDir, "tbb12.dll");
            if (File.Exists(Tbb12DllPath))
            {
                RuntimeDependencies.Add(Tbb12DllPath);
            }

            string LibTorchLibDir = Path.Combine(PluginDirectory, "Source", "ThirdParty", "libTorch", "lib");
            string[] CoreDlls = { "asmjit.dll", "c10.dll", "c10_cuda.dll", "cublas64_12.dll", "cublasLt64_12.dll", "cudart64_12.dll", "cudnn64_9.dll", "cufft64_11.dll", "cupti64_2025.1.0.dll", "cusolver64_11.dll", "cusparse64_12.dll", "fbgemm.dll", "libiomp5md.dll", "nvJitLink_120_0.dll", "torch_cpu.dll", "torch_cuda.dll", "uv.dll" };
            foreach (string DllName in CoreDlls)
            {
                string DllPath = Path.Combine(LibTorchLibDir, DllName);
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
            string LinuxTorchLibDir = Path.Combine(PluginDirectory, "Source", "ThirdParty", "libTorch", "lib");
            if (Directory.Exists(LinuxTorchLibDir))
            {
                foreach (string F in Directory.GetFiles(LinuxTorchLibDir))
                {
                    if (F.EndsWith(".a", StringComparison.OrdinalIgnoreCase))
                    {
                        continue;
                    }
                    if (F.EndsWith(".so", StringComparison.OrdinalIgnoreCase) || F.Contains(".so.", StringComparison.OrdinalIgnoreCase))
                    {
                        RuntimeDependencies.Add(F);
                    }
                }
            }
        }

        string PasswordVisibilitySvg = Path.Combine(PluginDirectory, "Resources", "password_visibility.svg");
        if (File.Exists(PasswordVisibilitySvg))
        {
            RuntimeDependencies.Add(PasswordVisibilitySvg);
        }

        // Loose PLY and SOG under project Content (not UAssets). DirectoriesToAlwaysStageAsNonUFS is unreliable; RuntimeDependencies + SystemNonUFS stages real files for native DLL I/O.
        if (!Target.bBuildEditor && Target.ProjectFile != null)
        {
            string PlyStagingRoot = Path.Combine(Target.ProjectFile.Directory.FullName, "Content", "MLSLabsRenderer", "ply");
            if (Directory.Exists(PlyStagingRoot))
            {
                RuntimeDependencies.Add("$(ProjectDir)/Content/MLSLabsRenderer/ply/...", StagedFileType.SystemNonUFS);
            }

            string SogStagingRoot = Path.Combine(Target.ProjectFile.Directory.FullName, "Content", "MLSLabsRenderer", "sog");
            if (Directory.Exists(SogStagingRoot))
            {
                RuntimeDependencies.Add("$(ProjectDir)/Content/MLSLabsRenderer/sog/...", StagedFileType.SystemNonUFS);
            }
        }
    }
}
