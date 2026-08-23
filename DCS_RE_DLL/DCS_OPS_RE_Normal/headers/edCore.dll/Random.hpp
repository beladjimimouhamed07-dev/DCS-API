#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Random
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class Random
{
public:

    // RVA: 0x77 | Ordinal: 120
        void Random(unsigned long);

    // RVA: 0x78 | Ordinal: 121
        void Random(int *const, int);

    // RVA: 0x79 | Ordinal: 122
        void Random(void);

    // RVA: 0x1D1 | Ordinal: 466
        void genDouble(double);

    // RVA: 0x1D2 | Ordinal: 467
        void genDouble(double, double);

    // RVA: 0x1D5 | Ordinal: 470
        void genInt(int);

    // RVA: 0x1D6 | Ordinal: 471
        void genInt(int, int);

    // RVA: 0x1D3 | Ordinal: 468
        void genInt31(void);

    // RVA: 0x1D4 | Ordinal: 469
        void genInt32(void);

    // RVA: 0x1D7 | Ordinal: 472
        void genReal(void);

    // RVA: 0x269 | Ordinal: 618
        void initLong(unsigned long);

    // RVA: 0xC9 | Ordinal: 202
        void _Random(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_RANDOM_HPP
