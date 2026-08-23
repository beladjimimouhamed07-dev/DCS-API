#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: Mat4x4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class Mat4x4
{
public:

    // RVA: 0x178 | Ordinal: 377
        void AdjustPerspectiveNearAndFar(float, float);

    // RVA: 0x1B6 | Ordinal: 439
        void Frustum(float, float, float, float, float, float);

    // RVA: 0x1DF | Ordinal: 480
        void GetVectorComponents(class SpeedTree::Vec3 &, class SpeedTree::Vec3 &, class SpeedTree::Vec3 &);

    // RVA: 0x1EB | Ordinal: 492
        void Invert(class SpeedTree::Mat4x4 &) const;

    // RVA: 0x209 | Ordinal: 522
        void LookAt(class SpeedTree::Vec3 const &, class SpeedTree::Vec3 const &, class SpeedTree::Vec3 const &);

    // RVA: 0x47 | Ordinal: 72
        void Mat4x4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

    // RVA: 0x48 | Ordinal: 73
        void Mat4x4(float const *const);

    // RVA: 0x49 | Ordinal: 74
        void Mat4x4(bool);

    // RVA: 0x215 | Ordinal: 534
        void Multiply4f(float const *const, float *const) const;

    // RVA: 0x21E | Ordinal: 543
        void Ortho(float, float, float, float, float, float, bool);

    // RVA: 0x237 | Ordinal: 568
        void Perspective(float, float, float, float);

    // RVA: 0x24D | Ordinal: 590
        void RotateArbitrary(class SpeedTree::Vec3 const &, float);

    // RVA: 0x253 | Ordinal: 596
        void RotateX(float);

    // RVA: 0x255 | Ordinal: 598
        void RotateY(float);

    // RVA: 0x257 | Ordinal: 600
        void RotateZ(float);

    // RVA: 0x25C | Ordinal: 605
        void Scale(class SpeedTree::Vec3 const &);

    // RVA: 0x25D | Ordinal: 606
        void Scale(float, float, float);

    // RVA: 0x267 | Ordinal: 616
        void Set(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

    // RVA: 0x268 | Ordinal: 617
        void Set(float const *const);

    // RVA: 0x281 | Ordinal: 642
        void SetIdentity(void);

    // RVA: 0x29F | Ordinal: 672
        void Translate(class SpeedTree::Vec3 const &);

    // RVA: 0x2A0 | Ordinal: 673
        void Translate(float, float, float);

    // RVA: 0x2A1 | Ordinal: 674
        void Transpose(void) const;
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_MAT4X4_HPP
