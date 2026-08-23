#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVec4f
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVec4f
{
public:

    // RVA: 0x36E | Ordinal: 879
        void FXVec4f(class FX::FXVec4f const &);

    // RVA: 0x36F | Ordinal: 880
        void FXVec4f(class FX::FXVec3f const &, float);

    // RVA: 0x370 | Ordinal: 881
        void FXVec4f(float, float, float, float);

    // RVA: 0x371 | Ordinal: 882
        void FXVec4f(float const *const);

    // RVA: 0x372 | Ordinal: 883
        void FXVec4f(void);

    // RVA: 0xACC | Ordinal: 2765
        void clamp(float, float);

    // RVA: 0xBFE | Ordinal: 3071
        void crosses(class FX::FXVec3f const &, class FX::FXVec3f const &) const;

    // RVA: 0xCF9 | Ordinal: 3322
        void distance(class FX::FXVec3f const &) const;

    // RVA: 0x1A8E | Ordinal: 6799
        void length(void) const;

    // RVA: 0x1A83 | Ordinal: 6788
        void length2(void) const;

    // RVA: 0x295C | Ordinal: 10589
        void set(class FX::FXVec4f const &);

    // RVA: 0x295D | Ordinal: 10590
        void set(float, float, float, float);

    // RVA: 0x295E | Ordinal: 10591
        void set(float const *const);

    // RVA: 0x4ED | Ordinal: 1262
        void _FXVec4f(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVEC4F_HPP
