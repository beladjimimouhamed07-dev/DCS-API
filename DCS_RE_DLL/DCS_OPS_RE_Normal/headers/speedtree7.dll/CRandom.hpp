#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: speedtree7.dll
// Class: CRandom
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace SpeedTree {

class CRandom
{
public:

    // RVA: 0x3C | Ordinal: 61
        void CRandom(class SpeedTree::CRandom const &);

    // RVA: 0x3D | Ordinal: 62
        void CRandom(unsigned int);

    // RVA: 0x3E | Ordinal: 63
        void CRandom(void);

    // RVA: 0x1C1 | Ordinal: 450
        void GetDouble(double, double);

    // RVA: 0x1C5 | Ordinal: 454
        void GetFloat(float, float);

    // RVA: 0x1C6 | Ordinal: 455
        void GetGaussianDouble(void);

    // RVA: 0x1C7 | Ordinal: 456
        void GetGaussianFloat(void);

    // RVA: 0x1CC | Ordinal: 461
        void GetInteger(int, int);

    // RVA: 0x1D8 | Ordinal: 473
        void GetRawInteger(void);

    // RVA: 0x243 | Ordinal: 580
        void Reload(void);

    // RVA: 0x260 | Ordinal: 609
        void Seed(unsigned int);

    // RVA: 0x2A2 | Ordinal: 675
        void Twist(unsigned int, unsigned int, unsigned int) const;

    // RVA: 0x8D | Ordinal: 142
        void _CRandom(void);
};

} // namespace SpeedTree

// DCS_OPS_RE_SPEEDTREE7.DLL_CRANDOM_HPP
