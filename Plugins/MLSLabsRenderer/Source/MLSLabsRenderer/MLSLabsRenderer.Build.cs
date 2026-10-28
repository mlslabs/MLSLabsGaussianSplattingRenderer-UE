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

        // Release packages delete Private/.cpp. Monolithic APK/game links BuildPlugin's .precompiled objects.
        if (!Directory.Exists(Path.Combine(ModuleDirectory, "Private")))
        {
            bUsePrecompiled = true;
        }

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
                "InputCore",
                "ImageCore",
                "ImageWrapper",
                "Json",
                "MLSLabsWebP",
                "RHICore",
                "Renderer",
                "RenderCore",
                "UMG",
                "LevelSequence",
                "Slate",
                "SlateCore"
            }
        );

        // Every platform rasterizes splats with UE compute shaders: no RHI-specific modules or native renderer binaries.
        // X-Auth-Info AES-GCM: Windows uses bcrypt; Android/Linux/Mac use engine OpenSSL.
        // zlib inflates stored SOG ZIP entries on Win64 / Linux / Android.
        // MLSLabsWebP is a portable C libwebp decoder .
        AddEngineThirdPartyPrivateStaticDependencies(Target, "zlib");
        if (Target.Platform.IsInGroup(UnrealPlatformGroup.Windows))
        {
            PublicSystemLibraries.Add("bcrypt.lib");
        }
        else
        {
            AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenSSL");
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

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
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
        }

        string PasswordVisibilitySvg = Path.Combine(PluginDirectory, "Resources", "password_visibility.svg");
        if (File.Exists(PasswordVisibilitySvg))
        {
            RuntimeDependencies.Add(PasswordVisibilitySvg);
        }

        // Loose PLY / SOG / mlslabs: the splat readers use fopen / opendir, so these must be NonUFS (not pak/UFS).
        // SystemNonUFS is not deployed as game content.
        if (!Target.bBuildEditor && Target.ProjectFile != null)
        {
            StageLooseContentForPackaging(Target, Path.Combine("Content", "MLSLabsRenderer", "ply"));
            StageLooseContentForPackaging(Target, Path.Combine("Content", "MLSLabsRenderer", "sog"));
            StageLooseContentForPackaging(Target, Path.Combine("Content", "MLSLabsRenderer", "mlslabs"));
        }
    }

    /// <summary>
    /// Stage loose splat files next to the cooked project. Android OBB is ZIP32/ZIP64 with a
    /// 4 GiB per-file cap (bAllowLargeOBBFiles); overflow OBBs cannot split one file, so
    /// anything larger must be adb-pushed after install.
    /// </summary>
    private void StageLooseContentForPackaging(ReadOnlyTargetRules Target, string ContentRelativeDir)
    {
        string AbsRoot = Path.Combine(Target.ProjectFile.Directory.FullName, ContentRelativeDir);
        if (!Directory.Exists(AbsRoot))
        {
            return;
        }

        string Glob = "$(ProjectDir)/" + ContentRelativeDir.Replace('\\', '/') + "/...";
        if (Target.Platform != UnrealTargetPlatform.Android)
        {
            RuntimeDependencies.Add(Glob, StagedFileType.NonUFS);
            return;
        }

        // Match AndroidPlatform.Automation.cs OBBSizeAllowed (4 GiB) minus zip local/central overhead.
        const long MaxAndroidObbFileBytes = 4294967296L - (1024L * 1024L);
        string ProjectDir = Target.ProjectFile.Directory.FullName;
        int StagedCount = 0;
        int SkippedCount = 0;
        foreach (string FilePath in Directory.GetFiles(AbsRoot, "*", SearchOption.AllDirectories))
        {
            long Length = new FileInfo(FilePath).Length;
            if (Length > MaxAndroidObbFileBytes)
            {
                ++SkippedCount;
                System.Console.WriteLine(
                    "MLSLabsRenderer: skip Android OBB staging of {0} ({1} bytes > 4GiB). adb push after install.",
                    FilePath, Length);
                continue;
            }

            string Rel = FilePath.Substring(ProjectDir.Length).TrimStart('\\', '/').Replace('\\', '/');
            RuntimeDependencies.Add("$(ProjectDir)/" + Rel, StagedFileType.NonUFS);
            ++StagedCount;
        }

        System.Console.WriteLine(
            "MLSLabsRenderer: Android staged {0} file(s) from {1}, skipped {2} over OBB limit.",
            StagedCount, ContentRelativeDir.Replace('\\', '/'), SkippedCount);
    }
}
