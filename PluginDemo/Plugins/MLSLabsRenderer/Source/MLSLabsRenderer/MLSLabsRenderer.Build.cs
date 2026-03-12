// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.
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
                "D3D12RHI"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "D3D12RHI",
                "InputCore",
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

        string RendererDllPath = Path.Combine(PluginDirectory, "Source", "ThirdParty", "GaussianSplatingRenderer", "Bin", "Win64", "GaussianSplatingRenderer.dll");

        // 1. ȷ����Ⱦ DLL �����������Ŀ¼
        RuntimeDependencies.Add(RendererDllPath);

        string LibTorchPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../ThirdParty/libTorch"));
        string LibDir = Path.Combine(LibTorchPath, "lib");
        string[] CoreDlls = { "asmjit.dll", "c10.dll", "c10_cuda.dll", "cublas64_12.dll", "cublasLt64_12.dll", "cudart64_12.dll", "cudnn64_9.dll", "cufft64_11.dll", "cupti64_2025.1.0.dll", "cusolver64_11.dll", "cusparse64_12.dll", "fbgemm.dll", "libiomp5md.dll", "nvJitLink_120_0.dll", "torch_cpu.dll", "torch_cuda.dll", "uv.dll" };
        foreach (string DllName in CoreDlls)
        {
            string SourcePath = Path.Combine(LibDir, DllName);
            if (File.Exists(SourcePath))
            {
                RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", DllName), SourcePath);
            }
        }
    }
}