// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#include "ThreeDGaussiansStruct.h"

class UAssetImportTask;
class UFactory;
class UObject;
class UTexture2D;

class FToolBarBuilder;
class FMenuBuilder;

struct FMLSLabsRendererSortPair
{
	uint32 Code;
	uint32 Index;

	bool operator<(const FMLSLabsRendererSortPair& Other) const { return Code < Other.Code; }
};

class FMLSLabsRendererImporterModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	void PluginImportSignleFileButtonClicked();
	void PluginImportMultipleFilesButtonClicked();
	void OnSetupButtonClicked();
	
private:

	void RegisterMenus();

	void* GetWindowHandle();
	bool OpenFileDialog(TArray<FString>& FilePaths, const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileType, bool bInIsMultiple);
	bool CheckAndSortPlyFiles(TArray<FString>& FilePaths);
	void ProcessAnimationSequence(const TArray<FString>& FilePaths);
	void ProcessSingleSceneFile(const FString& FilePath);
	FString GetWorkspaceName(const FString& InSourcePath, bool bInIsAnimation = false);
	FString GetDestinationDir(const FString& InWorkspaceName);
	FString GetDestinationBpPath(const FString& InWorkspaceName, bool bInIsAnimatable = false);
	

	UAssetImportTask* CreateImportTask(const FString& SrcFilePath, const FString& DestinationName, const FString& DestinationPath, UFactory* InFactory = nullptr, UObject* InOptions = nullptr, const bool bAutomated = true);
	UObject* ImportAsset(UAssetImportTask* TextureImportTask);
	UTexture2D* ImportTexture(const FString& SrcFilePath, const FString& DestinationName, const FString& DestinationPath);

	void CreateActorBpSubclass(const FString& MasterBpPath, const FString& BpDestinationPath, FThreeDGaussiansData* InPayload, bool bInIsAnimation = false, FThreeDGaussiansAnimation* InAnimatablePayload = nullptr);
	void CreateActorBpSubclassFromCPP(UClass* ParentClass, const FString& BpDestinationPath, const FString& SplatFilePath, bool bInIsAnimation = false);

	void CheckDependenciesAndNotify();
private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
