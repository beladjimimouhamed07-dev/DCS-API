#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVec3d
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVec3d
{
public:

    // RVA: 0x35F | Ordinal: 864
        void FXVec3d(class FX::FXVec3d const &);

    // RVA: 0x360 | Ordinal: 865
        void FXVec3d(class FX::FXVec2d const &, double);

    // RVA: 0x361 | Ordinal: 866
        void FXVec3d(double, double, double);

    // RVA: 0x362 | Ordinal: 867
        void FXVec3d(double const *const);

    // RVA: 0x363 | Ordinal: 868
        void FXVec3d(void);

    // RVA: 0xAC9 | Ordinal: 2762
        void clamp(double, double);

    // RVA: 0x1A8B | Ordinal: 6796
        void length(void) const;

    // RVA: 0x1A80 | Ordinal: 6785
        void length2(void) const;

    // RVA: 0x2953 | Ordinal: 10580
        void set(class FX::FXVec3d const &);

    // RVA: 0x2954 | Ordinal: 10581
        void set(double, double, double);

    // RVA: 0x2955 | Ordinal: 10582
        void set(double const *const);

    // RVA: 0x4EA | Ordinal: 1259
        void _FXVec3d(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVEC3D_HPP
