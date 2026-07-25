// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "ThreeDGaussiansStruct.generated.h"

/** Payload for Blueprint/C++ interchange (static splat). */
USTRUCT(BlueprintType)
struct FThreeDGaussiansData
{
	GENERATED_BODY()

public:
	FThreeDGaussiansData() {}

	explicit FThreeDGaussiansData(const FString& InSplatFileName)
	{
		SplatFileName = InSplatFileName;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MLSLabsRenderer")
	FString SplatFileName = TEXT("");
};

/** Payload for Blueprint/C++ interchange (animated splat sequence). */
USTRUCT(BlueprintType)
struct FThreeDGaussiansAnimation
{
	GENERATED_BODY()

public:
	FThreeDGaussiansAnimation() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3D Gaussians")
	TArray<FString> SplatFiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3D Gaussians")
	FString SplatFileDirName = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "3D Gaussians")
	int32 FrameNum = 0;
};
