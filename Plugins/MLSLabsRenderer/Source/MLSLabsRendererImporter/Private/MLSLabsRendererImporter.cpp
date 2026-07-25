// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "MLSLabsRendererImporter.h"
#include "MLSLabsRendererImporterStyle.h"
#include "MLSLabsRendererImporterCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

#include "Misc/Paths.h"
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"

#include <fstream>
#include <iostream>
#include <string>
#include <OpenEXR/ImfRgbaFile.h>
#include <OpenEXR/ImfArray.h>
#include "GenericPlatform/GenericPlatformMath.h"
#include "Templates/Sorting.h"
#include "HAL/PlatformFilemanager.h"

#include "EditorAssetLibrary.h"
#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "PackageTools.h"
#include "Factories/BlueprintFactory.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "AssetImportTask.h"
#include "ObjectTools.h"
#include "GaussianSplatingRendererLibrary.h"
#include "GaussianSplattingActor.h"
#include "AnimatableGaussianSplattingActor.h"
#include "AnimatableGaussianSplattingComponent.h"
#include "HAL/PlatformApplicationMisc.h"
#include "Framework/Application/SlateApplication.h"
#include "AssetRegistry/AssetRegistryModule.h"

#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/Text/SMultiLineEditableText.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBox.h"
#include "IPythonScriptPlugin.h"

#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"

#include "Interfaces/IPluginManager.h"

class SMLSLabsSetupWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMLSLabsSetupWindow) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs)
	{
		ChildSlot
			[
				SNew(SBox).Padding(15)
					[
						SNew(SVerticalBox)
							+ SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 10)
							[
								SNew(STextBlock)
									.Text(FText::FromString(TEXT("MLSLabs Plugin Environment Setup")))
									.Font(FCoreStyle::GetDefaultFontStyle("Bold", 14))
							]
							+ SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 15)
							[
								SNew(STextBlock)
									.Text(FText::FromString(TEXT("Clicking the button will install PyTorch 2.7.0 + cu128 via Python. Please restart the editor once the installation is complete.")))
									.AutoWrapText(true)
							]
							+ SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Left)
							[
								SNew(SButton)
									.ContentPadding(FMargin(20, 5))
									.OnClicked_Lambda([this]() {
									if (IPythonScriptPlugin::Get())
									{
										LogBox->SetText(FText::FromString(TEXT("Starting installation task... Please check the Output Log for details.")));
										FPythonCommandEx Command;
										Command.Command = TEXT("import install_deps; install_deps.install_pytorch_unified()");
										IPythonScriptPlugin::Get()->ExecPythonCommandEx(Command);

										UToolMenus::Get()->RefreshAllWidgets();
									}
									return FReply::Handled();
										})
									[
										SNew(STextBlock).Text(FText::FromString(TEXT("Install Dependencies")))
									]
							]
						+ SVerticalBox::Slot().FillHeight(1.0f).Padding(0, 10, 0, 0)
							[
								SAssignNew(LogBox, SMultiLineEditableText)
									.IsReadOnly(true)
									.HintText(FText::FromString(TEXT("Installation progress will be displayed here...")))
							]
					]
			];
	}

private:
	TSharedPtr<SMultiLineEditableText> LogBox;
};

#define PLUGIN_NAME "MLSLabsRenderer"
#define IMPORT_DEST "MLSLabsRenderer"

static TAutoConsoleVariable<int32> CVarDoSplitBy3dMortonOrder(
	TEXT("MLSLabsRenderer.DoSplitBy3dMortonOrder"),
	1,
	TEXT("Whether gaussians data will be splitted to multiple blocks when the number of gaussinas in .ply file is larger than the squre of MLSLabsRenderer.MaxTextureWidth.")
	TEXT("Data will be splitted by 3D Morton Order (which means splittd into 'clean' rectangular volumes).")
	TEXT("Translucent sort priority between blocks will be correctly set in this mode.")
);
static TAutoConsoleVariable<int32> CVarDoSplitByDistance(
	TEXT("MLSLabsRenderer.DoSplitByDistance"),
	0,
	TEXT("Whether gaussians data will be splitted to multiple blocks when the number of gaussinas in .ply file is larger than the squre of MLSLabsRenderer.MaxTextureWidth.")
	TEXT("Set MLSLabsRenderer.DoSplitBy3dMortonOrder=0 to enable this mode.")
	TEXT("Translucent sort priority between blocks will not be correctly set in this mode.")
);
static TAutoConsoleVariable<int32> CVarMaxTextureWidth(
	TEXT("MLSLabsRenderer.MaxTextureWidth"),
	1024,
	TEXT("The maximum width of the texture used to store gaussians data.\n")
	TEXT("The squre of this value must be smaller than the maximum number of particles in Niagara.\n")
	TEXT("If the number of gaussinas in .ply file is larger than the squre of this value and MLSLabsRenderer.DoSplit3dMortonOrder=1, gaussians data will be splitted to multiple blocks and assigned to multiple Niagara systems.")
);

static const FName MLSLabsRendererImporterTabName("MLSLabsRendererImporter");

namespace
{
	// IFileManager::Copy returns uint32 (ECopyResult); success is 0 (COPY_OK). Do not use !Copy(...): for uint32 0, !0 is true in C++.
	static bool MLSLabs_CopyFileReplace(const TCHAR* Dest, const TCHAR* Src)
	{
		return IFileManager::Get().Copy(Dest, Src, true, true) == 0u;
	}

	bool MLSLabs_EnsureDirectoryTree(const FString& DirectoryPath)
	{
		return IFileManager::Get().MakeDirectory(*DirectoryPath, true);
	}

	FString MLSLabs_GetPlyContentRootAbsolute()
	{
		return FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectContentDir(), TEXT("MLSLabsRenderer"), TEXT("ply")));
	}

	bool MLSLabs_CopySinglePlyIntoContent(const FString& WorkspaceName, const FString& SourceFilePath, FString& OutRelativeToContent)
	{
		const FString Root = MLSLabs_GetPlyContentRootAbsolute();
		if (!MLSLabs_EnsureDirectoryTree(Root))
		{
			UE_LOG(LogTemp, Error, TEXT("MLSLabs: failed to create directory %s"), *Root);
			return false;
		}
		const FString DestDir = FPaths::Combine(Root, WorkspaceName);
		if (!MLSLabs_EnsureDirectoryTree(DestDir))
		{
			UE_LOG(LogTemp, Error, TEXT("MLSLabs: failed to create directory %s"), *DestDir);
			return false;
		}
		const FString CleanName = FPaths::GetCleanFilename(SourceFilePath);
		const FString DestFile = FPaths::Combine(DestDir, CleanName);
		if (!MLSLabs_CopyFileReplace(*DestFile, *SourceFilePath))
		{
			UE_LOG(LogTemp, Error, TEXT("MLSLabs: failed to copy PLY to %s"), *DestFile);
			return false;
		}
		OutRelativeToContent = FPaths::Combine(TEXT("MLSLabsRenderer"), TEXT("ply"), WorkspaceName, CleanName);
		return true;
	}

	bool MLSLabs_CopyPlySequenceIntoContent(const FString& WorkspaceName, const TArray<FString>& SourcePaths, FString& OutRelativeDirToContent)
	{
		const FString Root = MLSLabs_GetPlyContentRootAbsolute();
		if (!MLSLabs_EnsureDirectoryTree(Root))
		{
			UE_LOG(LogTemp, Error, TEXT("MLSLabs: failed to create directory %s"), *Root);
			return false;
		}
		const FString DestDir = FPaths::Combine(Root, WorkspaceName);
		if (!MLSLabs_EnsureDirectoryTree(DestDir))
		{
			UE_LOG(LogTemp, Error, TEXT("MLSLabs: failed to create directory %s"), *DestDir);
			return false;
		}
		for (const FString& SrcPath : SourcePaths)
		{
			const FString DestFile = FPaths::Combine(DestDir, FPaths::GetCleanFilename(SrcPath));
			if (!MLSLabs_CopyFileReplace(*DestFile, *SrcPath))
			{
				UE_LOG(LogTemp, Error, TEXT("MLSLabs: failed to copy PLY to %s"), *DestFile);
				return false;
			}
		}
		OutRelativeDirToContent = FPaths::Combine(TEXT("MLSLabsRenderer"), TEXT("ply"), WorkspaceName);
		return true;
	}
}

#define LOCTEXT_NAMESPACE "FMLSLabsRendererImporterModule"

void FMLSLabsRendererImporterModule::StartupModule()
{
	FMLSLabsRendererImporterStyle::Initialize();
	FMLSLabsRendererImporterStyle::ReloadTextures();

	FMLSLabsRendererImporterCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FMLSLabsRendererImporterCommands::Get().PluginSetupAction,
		FExecuteAction::CreateRaw(this, &FMLSLabsRendererImporterModule::OnSetupButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FMLSLabsRendererImporterCommands::Get().PluginImportSignleFileAction,
		FExecuteAction::CreateRaw(this, &FMLSLabsRendererImporterModule::PluginImportSignleFileButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FMLSLabsRendererImporterCommands::Get().PluginImportMultipleFilesAction,
		FExecuteAction::CreateRaw(this, &FMLSLabsRendererImporterModule::PluginImportMultipleFilesButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FMLSLabsRendererImporterModule::RegisterMenus));

	FCoreDelegates::OnPostEngineInit.AddRaw(this, &FMLSLabsRendererImporterModule::CheckDependenciesAndNotify);
}

bool AreAllDependenciesPresent()
{
	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("MLSLabsRenderer"));
	if (!Plugin.IsValid()) return false;

	FString LibTorchBinDir = FPaths::Combine(*Plugin->GetBaseDir(), TEXT("Source"), TEXT("ThirdParty"), TEXT("libTorch"), TEXT("lib"));

	const TArray<FString> Dlls = {
		TEXT("asmjit.dll"), TEXT("c10.dll"), TEXT("c10_cuda.dll"),
		TEXT("cublas64_12.dll"), TEXT("cublasLt64_12.dll"), TEXT("cudart64_12.dll"),
		TEXT("cudnn64_9.dll"), TEXT("cufft64_11.dll"), TEXT("cupti64_2025.1.0.dll"),
		TEXT("cusolver64_11.dll"), TEXT("cusparse64_12.dll"), TEXT("fbgemm.dll"),
		TEXT("libiomp5md.dll"), TEXT("nvJitLink_120_0.dll"), TEXT("torch_cpu.dll"),
		TEXT("torch_cuda.dll"), TEXT("uv.dll")
	};

	if (!FPaths::DirectoryExists(LibTorchBinDir)) return false;

	for (const FString& DllName : Dlls)
	{
		FString FullPath = FPaths::Combine(*LibTorchBinDir, DllName);
		if (!FPaths::FileExists(FullPath))
		{
			UE_LOG(LogTemp, Warning, TEXT("MLSLabs missing dependency: %s"), *DllName);
			return false;
		}
	}

	return true;
}

void FMLSLabsRendererImporterModule::CheckDependenciesAndNotify()
{
	if (!AreAllDependenciesPresent())
	{
		FNotificationInfo Info(FText::FromString(TEXT("MLSLabs plugin dependencies missing! Click here to open the Setup menu")));
		Info.ExpireDuration = 10.0f;
		Info.HyperlinkText = FText::FromString(TEXT("Open Installer"));

		Info.Hyperlink = FSimpleDelegate::CreateRaw(this, &FMLSLabsRendererImporterModule::OnSetupButtonClicked);

		FSlateNotificationManager::Get().AddNotification(Info);
	}
}

void FMLSLabsRendererImporterModule::ShutdownModule()
{
	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FMLSLabsRendererImporterStyle::Shutdown();

	FMLSLabsRendererImporterCommands::Unregister();
}

void FMLSLabsRendererImporterModule::PluginImportSignleFileButtonClicked()
{
	TArray<FString> point_cloud_paths;
	if (!OpenFileDialog(point_cloud_paths, "Open point_cloud.ply", "", "", "*.ply", false)) return;

	if (point_cloud_paths.Num() == 1)
	{
		ProcessSingleSceneFile(point_cloud_paths[0]);
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("The files provided do not adhere to naming conventions or the required quantity!"));
	}
}

void FMLSLabsRendererImporterModule::PluginImportMultipleFilesButtonClicked()
{
	TArray<FString> point_cloud_paths;
	if (!OpenFileDialog(point_cloud_paths, "Open point_cloud.ply", "", "", "*.ply", true)) return;

	if (CheckAndSortPlyFiles(point_cloud_paths))
	{
		ProcessAnimationSequence(point_cloud_paths);
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("The files provided do not adhere to naming conventions or the required quantity!"));
	}
}

void FMLSLabsRendererImporterModule::ProcessAnimationSequence(const TArray<FString>& FilePaths)
{
	const FString WorkspaceName = GetWorkspaceName(FilePaths[0], true);
	FString RelativeSplatDir;
	if (!MLSLabs_CopyPlySequenceIntoContent(WorkspaceName, FilePaths, RelativeSplatDir))
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(TEXT("Failed to copy PLY sequence into Content/MLSLabsRenderer/ply. See Output Log.")));
		return;
	}

	UClass* MasterClass = AAnimatableGaussianSplattingActor::StaticClass();
	if (!MasterClass)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find C++ base class AGaussianSplattingActor. Make sure the header is included and the class exists."));
		return;
	}
	const FString BpDestPath = GetDestinationBpPath(WorkspaceName, true);
	CreateActorBpSubclassFromCPP(MasterClass, BpDestPath, RelativeSplatDir, true);
}

void FMLSLabsRendererImporterModule::ProcessSingleSceneFile(const FString& FilePath)
{
	const FString WorkspaceName = GetWorkspaceName(FilePath);
	const FString BpDestPath = GetDestinationBpPath(WorkspaceName);

	FString RelativeSplatPath;
	if (!MLSLabs_CopySinglePlyIntoContent(WorkspaceName, FilePath, RelativeSplatPath))
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(TEXT("Failed to copy PLY into Content/MLSLabsRenderer/ply. See Output Log.")));
		return;
	}

	UClass* MasterClass = AGaussianSplattingActor::StaticClass();
	if (!MasterClass)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to find C++ base class AGaussianSplattingActor. Make sure the header is included and the class exists."));
		return;
	}

	CreateActorBpSubclassFromCPP(MasterClass, BpDestPath, RelativeSplatPath);
}

bool FMLSLabsRendererImporterModule::CheckAndSortPlyFiles(TArray<FString>& FilePaths)
{
	if (FilePaths.Num() < 2)
	{
		return false;
	}

	TMap<int32, FString> SortedFiles;

	for (const FString& FilePath : FilePaths)
	{
		FString FileName = FPaths::GetBaseFilename(FilePath);
		FString NumericPart;

		int32 LastDigitIndex = FileName.Len() - 1;
		while (LastDigitIndex >= 0 && FChar::IsDigit(FileName[LastDigitIndex]))
		{
			LastDigitIndex--;
		}

		NumericPart = FileName.RightChop(LastDigitIndex + 1);

		if (NumericPart.IsEmpty())
		{
			return false;
		}

		int32 FileNumber = FCString::Atoi(*NumericPart);

		if (SortedFiles.Contains(FileNumber))
		{
			return false;
		}

		SortedFiles.Add(FileNumber, FilePath);
	}

	if (SortedFiles.Num() != FilePaths.Num())
	{
		return false;
	}

	FilePaths.Empty();
	SortedFiles.KeySort(TLess<int32>());
	for (auto& Elem : SortedFiles)
	{
		FilePaths.Add(Elem.Value);
	}

	return true;
}

void FMLSLabsRendererImporterModule::RegisterMenus()
{
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");

		Section.AddDynamicEntry("MLSLabsDynamicLogic", FNewToolMenuSectionDelegate::CreateLambda([this](FToolMenuSection& InSection) {
			if (!AreAllDependenciesPresent())
			{
				InSection.AddMenuEntryWithCommandList(FMLSLabsRendererImporterCommands::Get().PluginSetupAction, PluginCommands);
			}
			else
			{
				InSection.AddMenuEntryWithCommandList(FMLSLabsRendererImporterCommands::Get().PluginImportSignleFileAction, PluginCommands);
				InSection.AddMenuEntryWithCommandList(FMLSLabsRendererImporterCommands::Get().PluginImportMultipleFilesAction, PluginCommands);
			}
			}));
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");

		Section.AddDynamicEntry("MLSLabsToolbarDynamicLogic", FNewToolMenuSectionDelegate::CreateLambda([this](FToolMenuSection& InSection) {
			if (!AreAllDependenciesPresent())
			{
				FToolMenuEntry SetupEntry = FToolMenuEntry::InitToolBarButton(FMLSLabsRendererImporterCommands::Get().PluginSetupAction);
				SetupEntry.SetCommandList(PluginCommands);
				InSection.AddEntry(SetupEntry);
			}
			else
			{
				FToolMenuEntry SingleEntry = FToolMenuEntry::InitToolBarButton(FMLSLabsRendererImporterCommands::Get().PluginImportSignleFileAction);
				SingleEntry.SetCommandList(PluginCommands);
				InSection.AddEntry(SingleEntry);

				FToolMenuEntry MultiEntry = FToolMenuEntry::InitToolBarButton(FMLSLabsRendererImporterCommands::Get().PluginImportMultipleFilesAction);
				MultiEntry.SetCommandList(PluginCommands);
				InSection.AddEntry(MultiEntry);
			}
			}));
	}
}

void* FMLSLabsRendererImporterModule::GetWindowHandle()
{
	if (GIsEditor)
	{
		IMainFrameModule& MainFrameModule = IMainFrameModule::Get();
		TSharedPtr<SWindow> MainWindow = MainFrameModule.GetParentWindow();

		if (MainWindow.IsValid() && MainWindow->GetNativeWindow().IsValid())
		{
			return MainWindow->GetNativeWindow()->GetOSWindowHandle();
		}
	}
	else
	{
		if (GEngine && GEngine->GameViewport)
		{
			return GEngine->GameViewport->GetWindow()->GetNativeWindow()->GetOSWindowHandle();
		}
	}

	return nullptr;
}

bool FMLSLabsRendererImporterModule::OpenFileDialog(TArray<FString>& FilePath, const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileType, bool bInIsMultiple)
{
	void* WindowHandle = GetWindowHandle();
	if (WindowHandle)
	{
		IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
		if (DesktopPlatform)
		{
			bool bResult = DesktopPlatform->OpenFileDialog(
				WindowHandle,
				DialogTitle,
				DefaultPath,
				DefaultFile,
				FileType,
				(bInIsMultiple ? EFileDialogFlags::Type::Multiple : EFileDialogFlags::Type::None),
				FilePath
			);

			if (bResult)
			{
				for (FString& fp : FilePath)
				{
					fp = FPaths::ConvertRelativePathToFull(fp);
				}

				return true;
			}
		}
	}
	return false;
}

FString FMLSLabsRendererImporterModule::GetWorkspaceName(const FString& InSourcePath, bool bInIsAnimation)
{
	const FString FileName = FPaths::GetBaseFilename(InSourcePath);
	const FString IterationDir = FPaths::GetPath(InSourcePath);
	const FString WorkspaceDir = FPaths::GetPath(FPaths::GetPath(IterationDir));
	const FString WorkspaceNameFromPath = FPaths::GetBaseFilename(WorkspaceDir);

	if ((FileName == TEXT("point_cloud") || FileName == TEXT("gaussian_splatting_point_cloud")) && !WorkspaceNameFromPath.IsEmpty())
	{
		return ObjectTools::SanitizeObjectName(WorkspaceNameFromPath);
	}
	else if (FileName == TEXT("point_cloud") || FileName == TEXT("gaussian_splatting_point_cloud") || FileName == TEXT("splat"))
	{
		FString Name;
		FString PackagePath;
		const FString DestPath = GetDestinationBpPath(FileName);
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		AssetTools.CreateUniqueAssetName(DestPath, FString(""), PackagePath, Name);
		return Name.Replace(*FString("BP_Gaussian_Splating_"), *FString(""), ESearchCase::CaseSensitive);
	}
	else if (!FileName.IsEmpty())
	{
		if (!bInIsAnimation)
		{
			return ObjectTools::SanitizeObjectName(FileName);
		}
		else
		{
			return ObjectTools::SanitizeObjectName(FPaths::GetBaseFilename(IterationDir));
		}
	}
	else
	{
		return TEXT("splat");
	}
}

FString FMLSLabsRendererImporterModule::GetDestinationDir(const FString& InWorkspaceName)
{
	return FString("/Game/") + IMPORT_DEST + "/" + InWorkspaceName;
}

FString FMLSLabsRendererImporterModule::GetDestinationBpPath(const FString& InWorkspaceName, bool bInIsAnimatable)
{
	if (!bInIsAnimatable)
	{
		return GetDestinationDir(InWorkspaceName) + "/BP_Gaussian_Splating_" + InWorkspaceName;
	}
	return GetDestinationDir(InWorkspaceName) + "/BP_Animatable_Gaussian_Splating_" + InWorkspaceName;
}

UAssetImportTask* FMLSLabsRendererImporterModule::CreateImportTask(const FString& SrcFilePath, const FString& DestinationName, const FString& DestinationPath, UFactory* InFactory, UObject* InOptions, const bool bAutomated)
{
	UAssetImportTask* ImportTask = NewObject<UAssetImportTask>();
	ImportTask->bAutomated = bAutomated;
	ImportTask->bSave = false;
	ImportTask->Filename = SrcFilePath;
	ImportTask->DestinationName = DestinationName;
	ImportTask->DestinationPath = DestinationPath;
	ImportTask->bReplaceExisting = true;
	ImportTask->Options = InOptions;
	ImportTask->Factory = InFactory;
	return ImportTask;
}

UObject* FMLSLabsRendererImporterModule::ImportAsset(UAssetImportTask* TextureImportTask)
{
	TArray<UAssetImportTask*> ImportTasks;
	IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
	ImportTasks.Add(TextureImportTask);

	AssetTools.ImportAssetTasks(ImportTasks);
	for (UAssetImportTask* ImpTask : ImportTasks)
	{
		if (ImpTask->ImportedObjectPaths.Num() > 0)
		{
			return UEditorAssetLibrary::LoadAsset(ImpTask->ImportedObjectPaths[0]);
		}
	}
	return nullptr;
}

UTexture2D* FMLSLabsRendererImporterModule::ImportTexture(const FString& SrcFilePath, const FString& DestinationName, const FString& DestinationPath)
{
	UAssetImportTask* ImportTask = CreateImportTask(SrcFilePath, DestinationName, DestinationPath);
	UTexture2D* Texture = CastChecked<UTexture2D>(ImportAsset(ImportTask));
	if (Texture)
	{
		Texture->SRGB = 0;
		Texture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
		Texture->Filter = TextureFilter::TF_Nearest;
		Texture->CompressionSettings = TextureCompressionSettings::TC_HDR;

		Texture->UpdateResource();
		UPackageTools::SavePackagesForObjects({ Texture });
	}
	return Texture;
}

void FMLSLabsRendererImporterModule::CreateActorBpSubclass(const FString& MasterBpPath, const FString& BpDestinationPath, FThreeDGaussiansData* InPayload, bool bInIsAnimation, FThreeDGaussiansAnimation* InAnimatablePayload)
{
	if (!UEditorAssetLibrary::DoesAssetExist(MasterBpPath)) return;
	UBlueprint* MasterBP = CastChecked<UBlueprint>(UEditorAssetLibrary::LoadAsset(MasterBpPath));

	FString Name;
	FString PackagePath;
	IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
	AssetTools.CreateUniqueAssetName(BpDestinationPath, FString(""), PackagePath, Name);

	UBlueprintFactory* Factory = NewObject<UBlueprintFactory>();
	Factory->ParentClass = MasterBP->GeneratedClass;

	UBlueprint* NewBP = CastChecked<UBlueprint>(AssetTools.CreateAsset(Name, FPackageName::GetLongPackagePath(PackagePath), UBlueprint::StaticClass(), Factory));
	if (NewBP)
	{
		UObject* BpObject = NewBP->GeneratedClass->GetDefaultObject();

		if (!bInIsAnimation)
		{
			if (UFunction* Func = BpObject->FindFunction(FName("SetData")))
			{
				BpObject->ProcessEvent(Func, InPayload);
			}
		}
		else
		{
			if (UFunction* Func = BpObject->FindFunction(FName("SetData")))
			{
				BpObject->ProcessEvent(Func, InAnimatablePayload);
			}
		}

		FKismetEditorUtilities::CompileBlueprint(NewBP, EBlueprintCompileOptions::None);
		AssetTools.SyncBrowserToAssets(TArray<UObject*>{ NewBP });
		NewBP->MarkPackageDirty();
		UPackageTools::SavePackagesForObjects({ NewBP });
	}
}

struct GSLatentContext
{
	std::atomic<float> Progress{ 0.0f };
	std::atomic<bool> bIsCancelled{ false };
};

static void LoadProgressHandler(float Percentage, void* Context)
{
	if (Context)
	{
		GSLatentContext* LatentContext = static_cast<GSLatentContext*>(Context);
		LatentContext->Progress.store(Percentage);
	}
}

void FMLSLabsRendererImporterModule::CreateActorBpSubclassFromCPP(UClass* ParentClass, const FString& BpDestinationPath, const FString& SplatFilePath, bool bInIsAnimation)
{
	if (!ParentClass) return;

	FString Name;
	FString PackagePath;
	IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
	AssetTools.CreateUniqueAssetName(BpDestinationPath, FString(""), PackagePath, Name);

	UBlueprintFactory* Factory = NewObject<UBlueprintFactory>();
	Factory->ParentClass = ParentClass;

	UBlueprint* NewBP = CastChecked<UBlueprint>(AssetTools.CreateAsset(Name, FPackageName::GetLongPackagePath(PackagePath), UBlueprint::StaticClass(), Factory));
	if (!NewBP) return;

	AActor* DefaultActor = Cast<AActor>(NewBP->GeneratedClass->GetDefaultObject());
	if (DefaultActor)
	{
		UGaussianSplattingComponent* Comp = nullptr;
		if (!bInIsAnimation)
		{
			AGaussianSplattingActor* DefaultGaussianSplattingActor = Cast<AGaussianSplattingActor>(NewBP->GeneratedClass->GetDefaultObject());
			Comp = DefaultGaussianSplattingActor->SplattingComponent;
		}
		else
		{
			AAnimatableGaussianSplattingActor* DefaultAnimatableGaussianSplattingActor = Cast<AAnimatableGaussianSplattingActor>(NewBP->GeneratedClass->GetDefaultObject());
			Comp = DefaultAnimatableGaussianSplattingActor->SplattingComponent;
		}

		if (!Comp)
			return;

		Comp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		Comp->bAlwaysCreatePhysicsState = false;
		Comp->SplatDataPath = SplatFilePath;

		TSharedPtr<GSLatentContext> LatentContext = MakeShared<GSLatentContext>();
		TSharedPtr<bool> bIsTaskFinished = MakeShared<bool>(false);
		FString InstanceName = DefaultActor->GetName();

		FText TaskMsg = bInIsAnimation ? LOCTEXT("LoadAnim", "Importing Animatable GS...") : LOCTEXT("LoadStatic", "Importing Static GS...");
		FScopedSlowTask ProgressTask(100.0f, TaskMsg);
		ProgressTask.MakeDialog(true); 

		Async(EAsyncExecution::Thread, [InstanceName, SplatFilePath, Comp, bInIsAnimation, LatentContext, bIsTaskFinished]() {
			FString Identifier = FString::Printf(TEXT("%s_0x%p"), *InstanceName, Comp);
			uint64 NewHashCode = 0;
			int32 LoadedFrameCount = 0;

			if (!bInIsAnimation)
			{
				NewHashCode = UGaussianSplatingRendererLibrary::LoadSplatFile(Identifier, SplatFilePath, LoadProgressHandler, LatentContext.Get());
			}
			else
			{
				NewHashCode = UGaussianSplatingRendererLibrary::LoadAnimatableSplatFiles(Identifier, SplatFilePath, &LoadedFrameCount, LoadProgressHandler, LatentContext.Get());
			}

			AsyncTask(ENamedThreads::GameThread, [Comp, NewHashCode, bInIsAnimation, LoadedFrameCount, LatentContext, bIsTaskFinished]() {
				if (!LatentContext->bIsCancelled.load() && IsValid(Comp))
				{
					Comp->SplatNodeHashCode = NewHashCode;
					if (bInIsAnimation)
					{
						if (UAnimatableGaussianSplattingComponent* AnimComp = Cast<UAnimatableGaussianSplattingComponent>(Comp))
						{
							AnimComp->FrameCount = LoadedFrameCount;
						}
					}
					Comp->RefreshBoundsFromLoadedSplat();
				}
				*bIsTaskFinished = true;
				});
			});

		float LastDisplayedProgress = 0.0f;
		while (!(*bIsTaskFinished))
		{
			FPlatformApplicationMisc::PumpMessages(true);

			if (FSlateApplication::IsInitialized())
			{
				FSlateApplication::Get().Tick(ESlateTickType::All);
			}

			float CurrentVal = LatentContext->Progress.load() * 100.0f;
			if (CurrentVal - LastDisplayedProgress > 0.1f) {
				ProgressTask.EnterProgressFrame(CurrentVal - LastDisplayedProgress);
				LastDisplayedProgress = CurrentVal;
			}

			if (ProgressTask.ShouldCancel())
			{
				LatentContext->bIsCancelled.store(true);
				ProgressTask.DefaultMessage = LOCTEXT("CancellingMsg", "Closing threads... please wait.");
			}

			FPlatformProcess::Sleep(0.01f);
		}

		if (!LatentContext->bIsCancelled.load() && *bIsTaskFinished)
		{
			FKismetEditorUtilities::CompileBlueprint(NewBP, EBlueprintCompileOptions::None);
			AssetTools.SyncBrowserToAssets(TArray<UObject*>{ NewBP });
			NewBP->MarkPackageDirty();
			UPackageTools::SavePackagesForObjects({ NewBP });
		}
		else
		{
			if (NewBP && NewBP->GeneratedClass)
			{
				if (AActor* DefaultActorCDO = Cast<AActor>(NewBP->GeneratedClass->GetDefaultObject()))
				{
					TArray<UActorComponent*> CDOComponents;
					DefaultActorCDO->GetComponents(CDOComponents);

					for (UActorComponent* IterComp : CDOComponents)
					{
						if (IterComp)
						{
							IterComp->UnregisterComponent();
							IterComp->DestroyComponent();
						}
					}
				}
			}

			if (UBlueprint* BPToDestroy = NewBP)
			{
				UPackage* Pkg = BPToDestroy->GetPackage();
				FString PackageName = Pkg->GetName();

				if (Pkg)
				{
					Pkg->SetDirtyFlag(false);
				}

				FString UniqueTempName = FString::Printf(TEXT("TEMP_DELETE_%s"), *FGuid::NewGuid().ToString());
				NewBP->Rename(*UniqueTempName, GetTransientPackage(), REN_DontCreateRedirectors | REN_DoNotDirty);

				TArray<UObject*> AssetsToDelete;
				AssetsToDelete.Add(BPToDestroy);

				ObjectTools::DeleteObjects(AssetsToDelete, false);

				if (BPToDestroy->IsValidLowLevel())
				{
					BPToDestroy->ClearFlags(RF_Standalone | RF_Public);
					BPToDestroy->MarkAsGarbage();
				}

				IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
				AssetRegistry.AssetDeleted(BPToDestroy);

				FString LongPackagePath = FPackageName::GetLongPackagePath(PackagePath);
				AssetRegistry.RemovePath(LongPackagePath);

				TArray<FString> FoldersToSync;
				FoldersToSync.Add(FPackageName::GetLongPackagePath(PackageName));

				FAssetRegistryModule::GetRegistry().ScanPathsSynchronous(FoldersToSync, true);

				CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);

				UE_LOG(LogTemp, Warning, TEXT("Import cancelled. Asset %s removed from registry and UI."), *PackageName);
			}
		}
	}
}


void FMLSLabsRendererImporterModule::OnSetupButtonClicked()
{
	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(FText::FromString("MLSLabs Setup"))
		.ClientSize(FVector2D(600, 400));

	Window->SetContent(SNew(SMLSLabsSetupWindow));

	IMainFrameModule& MainFrame = FModuleManager::LoadModuleChecked<IMainFrameModule>("MainFrame");
	FSlateApplication::Get().AddWindowAsNativeChild(Window, MainFrame.GetParentWindow().ToSharedRef());
}
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMLSLabsRendererImporterModule, MLSLabsRendererImporter)