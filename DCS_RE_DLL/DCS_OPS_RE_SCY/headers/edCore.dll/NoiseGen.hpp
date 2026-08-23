#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: NoiseGen
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class NoiseGen
{
public:

    // RVA: 0x128 | Ordinal: 297
        void Noise1(float, int) const;

    // RVA: 0x129 | Ordinal: 298
        void Noise2(float *const, int) const;

    // RVA: 0x12A | Ordinal: 299
        void Noise3(float *const, int) const;

    // RVA: 0x74 | Ordinal: 117
        void NoiseGen(unsigned int);

    // RVA: 0x75 | Ordinal: 118
        void NoiseGen(void);

    // RVA: 0x12E | Ordinal: 303
        void PerlinNoise1D(float, float, float, int) const;

    // RVA: 0x12F | Ordinal: 304
        void PerlinNoise2D(float, float, float, float, int) const;

    // RVA: 0x130 | Ordinal: 305
        void PerlinNoise3D(float, float, float, float, float, int) const;

    // RVA: 0xC7 | Ordinal: 200
        void _NoiseGen(void);
};

// DCS_OPS_RE_EDCORE.DLL_NOISEGEN_HPP
