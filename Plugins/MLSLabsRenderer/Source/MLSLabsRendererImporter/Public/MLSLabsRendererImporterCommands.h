// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.


#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "MLSLabsRendererImporterStyle.h"

class FMLSLabsRendererImporterCommands : public TCommands<FMLSLabsRendererImporterCommands>
{
public:

	FMLSLabsRendererImporterCommands()
		: TCommands<FMLSLabsRendererImporterCommands>(TEXT("MLSLabsRendererImporter"), NSLOCTEXT("Contexts", "MLSLabsRendererImporter", "MLSLabsRenderer Plugin"), NAME_None, FMLSLabsRendererImporterStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginSetupAction;
	TSharedPtr< FUICommandInfo > PluginImportSignleFileAction;
	TSharedPtr< FUICommandInfo > PluginImportMultipleFilesAction;
};
