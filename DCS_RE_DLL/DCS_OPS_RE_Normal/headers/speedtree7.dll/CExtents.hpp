#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CExtents
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CExtents
{
public:

    // RVA: 0x29 | Ordinal: 42
        void CExtents(class SpeedTree::Vec3 const &, class SpeedTree::Vec3 const &);

    // RVA: 0x2A | Ordinal: 43
        void CExtents(float const *const);

    // RVA: 0x2B | Ordinal: 44
        void CExtents(void);

    // RVA: 0x18F | Ordinal: 400
        void ComputeRadiusFromCenter2D(void) const;

    // RVA: 0x190 | Ordinal: 401
        void ComputeRadiusFromCenter3D(void) const;

    // RVA: 0x191 | Ordinal: 402
        void ComputeRadiusSquaredFromCenter3D(void) const;

    // RVA: 0x1A9 | Ordinal: 426
        void ExpandAround(class SpeedTree::CExtents const &);

    // RVA: 0x1AA | Ordinal: 427
        void ExpandAround(class SpeedTree::Vec3 const &);

    // RVA: 0x1AB | Ordinal: 428
        void ExpandAround(class SpeedTree::Vec3 const &, float);

    // RVA: 0x1AC | Ordinal: 429
        void ExpandAround(float const *const);

    // RVA: 0x1BB | Ordinal: 444
        void GetCenter(void) const;

    // RVA: 0x1C0 | Ordinal: 449
        void GetDiagonal(void) const;

    // RVA: 0x1C9 | Ordinal: 458
        void GetHeight(void) const;

    // RVA: 0x211 | Ordinal: 530
        void Max(void) const;

    // RVA: 0x213 | Ordinal: 532
        void Midpoint(unsigned int) const;

    // RVA: 0x214 | Ordinal: 533
        void Min(void) const;

    // RVA: 0x21C | Ordinal: 541
        void Order(void);

    // RVA: 0x21D | Ordinal: 542
        void Orient(class SpeedTree::Vec3 const &, class SpeedTree::Vec3 const &);

    // RVA: 0x245 | Ordinal: 582
        void Reset(void);

    // RVA: 0x24B | Ordinal: 588
        void Rotate(float);

    // RVA: 0x258 | Ordinal: 601
        void Scale(float);

    // RVA: 0x28A | Ordinal: 651
        void SetToZeros(void);

    // RVA: 0x29E | Ordinal: 671
        void Translate(class SpeedTree::Vec3 const &);

    // RVA: 0x2A8 | Ordinal: 681
        void Valid(void) const;

    // RVA: 0x89 | Ordinal: 138
        void _CExtents(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CEXTENTS_HPP
