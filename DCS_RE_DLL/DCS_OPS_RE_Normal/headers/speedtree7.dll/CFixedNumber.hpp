#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CFixedNumber
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CFixedNumber
{
public:

    // RVA: 0x2F | Ordinal: 48
        void CFixedNumber(class SpeedTree::CFixedNumber const &);

    // RVA: 0x30 | Ordinal: 49
        void CFixedNumber(float);

    // RVA: 0x31 | Ordinal: 50
        void CFixedNumber(void);

    // RVA: 0x273 | Ordinal: 628
        void SetBitsUsedForFraction(unsigned int);

    // RVA: 0x29C | Ordinal: 669
        void ToFloat(void);

    // RVA: 0x14B | Ordinal: 332
        void operator_(class SpeedTree::CFixedNumber const &) const;
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CFIXEDNUMBER_HPP
