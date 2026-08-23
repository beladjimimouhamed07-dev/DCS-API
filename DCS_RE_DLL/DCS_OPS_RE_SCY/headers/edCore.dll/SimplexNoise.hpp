#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: SimplexNoise
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SimplexNoise
{
public:

    // RVA: 0x84 | Ordinal: 133
        void SimplexNoise(void);

    // RVA: 0x25D | Ordinal: 606
        void init(void);

    // RVA: 0x2BB | Ordinal: 700
        void noise2D(double, double);
};

// DCS_OPS_RE_EDCORE.DLL_SIMPLEXNOISE_HPP
