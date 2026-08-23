#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRegion
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRegion
{
public:

    // RVA: 0x297 | Ordinal: 664
        void FXRegion(class FX::FXRegion const &);

    // RVA: 0x298 | Ordinal: 665
        void FXRegion(class FX::FXRectangle const &);

    // RVA: 0x299 | Ordinal: 666
        void FXRegion(int, int, int, int);

    // RVA: 0x29A | Ordinal: 667
        void FXRegion(class FX::FXPoint const *, unsigned int, bool);

    // RVA: 0x29B | Ordinal: 668
        void FXRegion(void);

    // RVA: 0xA70 | Ordinal: 2673
        void bounds(void) const;

    // RVA: 0xB6D | Ordinal: 2926
        void contains(int, int) const;

    // RVA: 0xB6E | Ordinal: 2927
        void contains(int, int, int, int) const;

    // RVA: 0xDF2 | Ordinal: 3571
        void empty(void) const;

    // RVA: 0x1F3A | Ordinal: 7995
        void offset(int, int);

    // RVA: 0x278A | Ordinal: 10123
        void reset(void);

    // RVA: 0x496 | Ordinal: 1175
        void _FXRegion(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXREGION_HPP
