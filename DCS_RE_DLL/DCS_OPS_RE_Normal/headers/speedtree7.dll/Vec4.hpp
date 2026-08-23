#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: Vec4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class Vec4
{
public:

    // RVA: 0x26E | Ordinal: 623
        void Set(float, float);

    // RVA: 0x26F | Ordinal: 624
        void Set(float, float, float);

    // RVA: 0x270 | Ordinal: 625
        void Set(float, float, float, float);

    // RVA: 0x271 | Ordinal: 626
        void Set(float const *const);

    // RVA: 0x67 | Ordinal: 104
        void Vec4(class SpeedTree::Vec3 const &, float);

    // RVA: 0x68 | Ordinal: 105
        void Vec4(float, float);

    // RVA: 0x69 | Ordinal: 106
        void Vec4(float, float, float);

    // RVA: 0x6A | Ordinal: 107
        void Vec4(float, float, float, float);

    // RVA: 0x6B | Ordinal: 108
        void Vec4(float const *const);

    // RVA: 0x6C | Ordinal: 109
        void Vec4(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_VEC4_HPP
