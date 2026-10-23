// Portable C-only libwebp for Win64 / Linux / Android.
// SIMD objects are not compiled; HAVE_CONFIG_H must stay on so cpu.h does not
// enable WEBP_USE_SSE2 / WEBP_USE_NEON (those omit C kernels and call missing Init*).

#ifndef WEBP_CONFIG_H_
#define WEBP_CONFIG_H_

#define WEBP_DSP_OMIT_C_CODE 0

#endif
