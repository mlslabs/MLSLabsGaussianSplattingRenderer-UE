// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.


#include "MLSLabsRendererImporterStyle.h"
#include "MLSLabsRendererImporter.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FMLSLabsRendererImporterStyle::StyleInstance = nullptr;

void FMLSLabsRendererImporterStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FMLSLabsRendererImporterStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FMLSLabsRendererImporterStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("MLSLabsRendererImporterStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FMLSLabsRendererImporterStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("MLSLabsRendererImporterStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("MLSLabsRenderer")->GetBaseDir() / TEXT("Resources"));

	Style->Set("MLSLabsRendererImporter.PluginSetupAction", new IMAGE_BRUSH_SVG(TEXT("setting"), Icon20x20));
	Style->Set("MLSLabsRendererImporter.PluginImportSignleFileAction", new IMAGE_BRUSH_SVG(TEXT("import_single_file"), Icon20x20));
	Style->Set("MLSLabsRendererImporter.PluginImportMultipleFilesAction", new IMAGE_BRUSH_SVG(TEXT("import_multiple_files"), Icon20x20));
	return Style;
}

void FMLSLabsRendererImporterStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FMLSLabsRendererImporterStyle::Get()
{
	return *StyleInstance;
}
