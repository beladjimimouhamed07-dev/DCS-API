#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVec2d
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVec2d
{
public:

    // RVA: 0x357 | Ordinal: 856
        void FXVec2d(class FX::FXVec2d const &);

    // RVA: 0x358 | Ordinal: 857
        void FXVec2d(double, double);

    // RVA: 0x359 | Ordinal: 858
        void FXVec2d(double const *const);

    // RVA: 0x35A | Ordinal: 859
        void FXVec2d(void);

    // RVA: 0xAC7 | Ordinal: 2760
        void clamp(double, double);

    // RVA: 0x1A89 | Ordinal: 6794
        void length(void) const;

    // RVA: 0x1A7E | Ordinal: 6783
        void length2(void) const;

    // RVA: 0x294D | Ordinal: 10574
        void set(class FX::FXVec2d const &);

    // RVA: 0x294E | Ordinal: 10575
        void set(double, double);

    // RVA: 0x294F | Ordinal: 10576
        void set(double const *const);

    // RVA: 0x4E8 | Ordinal: 1257
        void _FXVec2d(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVEC2D_HPP
