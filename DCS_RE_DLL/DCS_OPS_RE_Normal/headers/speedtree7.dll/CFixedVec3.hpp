#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CFixedVec3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CFixedVec3
{
public:

    // RVA: 0x32 | Ordinal: 51
        void CFixedVec3(class SpeedTree::CFixedVec3 &&);

    // RVA: 0x33 | Ordinal: 52
        void CFixedVec3(class SpeedTree::CFixedVec3 const &);

    // RVA: 0x34 | Ordinal: 53
        void CFixedVec3(float, float);

    // RVA: 0x35 | Ordinal: 54
        void CFixedVec3(float, float, float);

    // RVA: 0x36 | Ordinal: 55
        void CFixedVec3(float const *const);

    // RVA: 0x37 | Ordinal: 56
        void CFixedVec3(class SpeedTree::CFixedNumber, class SpeedTree::CFixedNumber, class SpeedTree::CFixedNumber);

    // RVA: 0x38 | Ordinal: 57
        void CFixedVec3(class SpeedTree::CFixedNumber, class SpeedTree::CFixedNumber);

    // RVA: 0x39 | Ordinal: 58
        void CFixedVec3(void);

    // RVA: 0x261 | Ordinal: 610
        void Set(float, float);

    // RVA: 0x262 | Ordinal: 611
        void Set(float, float, float);

    // RVA: 0x263 | Ordinal: 612
        void Set(float const *const);

    // RVA: 0x264 | Ordinal: 613
        void Set(class SpeedTree::CFixedNumber, class SpeedTree::CFixedNumber, class SpeedTree::CFixedNumber);

    // RVA: 0x265 | Ordinal: 614
        void Set(class SpeedTree::CFixedNumber, class SpeedTree::CFixedNumber);

    // RVA: 0x29D | Ordinal: 670
        void ToVec3(void);

    // RVA: 0x14C | Ordinal: 333
        void operator_(class SpeedTree::CFixedVec3 const &) const;
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CFIXEDVEC3_HPP
