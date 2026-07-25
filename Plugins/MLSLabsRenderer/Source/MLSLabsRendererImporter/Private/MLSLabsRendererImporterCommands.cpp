// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.


#include "MLSLabsRendererImporterCommands.h"

#define LOCTEXT_NAMESPACE "FMLSLabsRendererImporterModule"

void FMLSLabsRendererImporterCommands::RegisterCommands()
{
	UI_COMMAND(PluginSetupAction, "Setup Environment", "Setup Environment", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(PluginImportSignleFileAction, "Import Single 3D Gaussian File", "Import single 3D Gaussians Splatting file", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(PluginImportMultipleFilesAction, "Import Multiple 3D Gaussians File", "Import multiple 3D Gaussians Splatting files", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
