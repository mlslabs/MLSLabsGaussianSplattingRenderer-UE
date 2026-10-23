// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

namespace MLSLabsWebP
{
	MLSLABSWEBP_API bool GetInfo(const uint8* Data, int32 Size, int32& OutWidth, int32& OutHeight);
	MLSLABSWEBP_API uint8* DecodeRGBA(const uint8* Data, int32 Size, int32& OutWidth, int32& OutHeight);
	MLSLABSWEBP_API void Free(void* Ptr);
}
