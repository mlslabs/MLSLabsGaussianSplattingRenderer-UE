// Silence libwebp C diagnostics that UE treats as errors on MSVC and Clang
// (Win64 / Linux / Android). Included via ForceIncludeFiles.

#pragma once

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wunused-function"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-but-set-variable"
#pragma clang diagnostic ignored "-Wimplicit-fallthrough"
#pragma clang diagnostic ignored "-Wsign-compare"
#pragma clang diagnostic ignored "-Wshift-negative-value"
#pragma clang diagnostic ignored "-Wcomma"
#pragma clang diagnostic ignored "-Wextra-semi"
#elif defined(_MSC_VER)
#pragma warning(disable : 4018)
#pragma warning(disable : 4146)
#pragma warning(disable : 4244)
#pragma warning(disable : 4267)
#pragma warning(disable : 4334)
#pragma warning(disable : 4701)
#pragma warning(disable : 4703)
#endif
