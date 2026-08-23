#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: Mat3x3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class Mat3x3
{
public:

    // RVA: 0x44 | Ordinal: 69
        void Mat3x3(class SpeedTree::Vec3 const &, class SpeedTree::Vec3 const &, class SpeedTree::Vec3 const &);

    // RVA: 0x45 | Ordinal: 70
        void Mat3x3(float const *const);

    // RVA: 0x46 | Ordinal: 71
        void Mat3x3(bool);

    // RVA: 0x24C | Ordinal: 589
        void RotateArbitrary(class SpeedTree::Vec3 const &, float);

    // RVA: 0x252 | Ordinal: 595
        void RotateX(float);

    // RVA: 0x254 | Ordinal: 597
        void RotateY(float);

    // RVA: 0x256 | Ordinal: 599
        void RotateZ(float);

    // RVA: 0x25A | Ordinal: 603
        void Scale(class SpeedTree::Vec3 const &);

    // RVA: 0x25B | Ordinal: 604
        void Scale(float, float, float);

    // RVA: 0x266 | Ordinal: 615
        void Set(float const *const);

    // RVA: 0x280 | Ordinal: 641
        void SetIdentity(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_MAT3X3_HPP
