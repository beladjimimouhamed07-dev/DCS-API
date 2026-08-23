#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVec4d
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVec4d
{
public:

    // RVA: 0x369 | Ordinal: 874
        void FXVec4d(class FX::FXVec4d const &);

    // RVA: 0x36A | Ordinal: 875
        void FXVec4d(class FX::FXVec3d const &, double);

    // RVA: 0x36B | Ordinal: 876
        void FXVec4d(double, double, double, double);

    // RVA: 0x36C | Ordinal: 877
        void FXVec4d(double const *const);

    // RVA: 0x36D | Ordinal: 878
        void FXVec4d(void);

    // RVA: 0xACB | Ordinal: 2764
        void clamp(double, double);

    // RVA: 0xBFD | Ordinal: 3070
        void crosses(class FX::FXVec3d const &, class FX::FXVec3d const &) const;

    // RVA: 0xCF8 | Ordinal: 3321
        void distance(class FX::FXVec3d const &) const;

    // RVA: 0x1A8D | Ordinal: 6798
        void length(void) const;

    // RVA: 0x1A82 | Ordinal: 6787
        void length2(void) const;

    // RVA: 0x2959 | Ordinal: 10586
        void set(class FX::FXVec4d const &);

    // RVA: 0x295A | Ordinal: 10587
        void set(double, double, double, double);

    // RVA: 0x295B | Ordinal: 10588
        void set(double const *const);

    // RVA: 0x4EC | Ordinal: 1261
        void _FXVec4d(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVEC4D_HPP
