#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: Vec3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class Vec3
{
public:

    // RVA: 0x19B | Ordinal: 412
        void Cross(class SpeedTree::Vec3 const &) const;

    // RVA: 0x1A4 | Ordinal: 421
        void Distance(class SpeedTree::Vec3 const &) const;

    // RVA: 0x1A5 | Ordinal: 422
        void DistanceSquared(class SpeedTree::Vec3 const &) const;

    // RVA: 0x1A6 | Ordinal: 423
        void Dot(class SpeedTree::Vec3 const &) const;

    // RVA: 0x20C | Ordinal: 525
        void Magnitude(void) const;

    // RVA: 0x20D | Ordinal: 526
        void MagnitudeSquared(void) const;

    // RVA: 0x217 | Ordinal: 536
        void Normalize(void);

    // RVA: 0x25F | Ordinal: 608
        void Scale(float);

    // RVA: 0x26B | Ordinal: 620
        void Set(float, float);

    // RVA: 0x26C | Ordinal: 621
        void Set(float, float, float);

    // RVA: 0x26D | Ordinal: 622
        void Set(float const *const);

    // RVA: 0x63 | Ordinal: 100
        void Vec3(float, float);

    // RVA: 0x64 | Ordinal: 101
        void Vec3(float, float, float);

    // RVA: 0x65 | Ordinal: 102
        void Vec3(float const *const);

    // RVA: 0x66 | Ordinal: 103
        void Vec3(void);

    // RVA: 0x14E | Ordinal: 335
        void operator_(class SpeedTree::Vec3 const &) const;
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_VEC3_HPP
