// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "MLSLabsWebPDecode.h"

THIRD_PARTY_INCLUDES_START
#include "webp/decode.h"
THIRD_PARTY_INCLUDES_END

bool MLSLabsWebP::GetInfo(const uint8* Data, int32 Size, int32& OutWidth, int32& OutHeight)
{
	OutWidth = 0;
	OutHeight = 0;
	if (!Data || Size <= 0)
	{
		return false;
	}

	int Width = 0;
	int Height = 0;
	if (!WebPGetInfo(Data, static_cast<size_t>(Size), &Width, &Height) || Width <= 0 || Height <= 0)
	{
		return false;
	}

	OutWidth = Width;
	OutHeight = Height;
	return true;
}

uint8* MLSLabsWebP::DecodeRGBA(const uint8* Data, int32 Size, int32& OutWidth, int32& OutHeight)
{
	OutWidth = 0;
	OutHeight = 0;
	if (!Data || Size <= 0)
	{
		return nullptr;
	}

	int Width = 0;
	int Height = 0;
	uint8_t* Decoded = WebPDecodeRGBA(Data, static_cast<size_t>(Size), &Width, &Height);
	if (!Decoded)
	{
		return nullptr;
	}

	OutWidth = Width;
	OutHeight = Height;
	return Decoded;
}

void MLSLabsWebP::Free(void* Ptr)
{
	WebPFree(Ptr);
}
