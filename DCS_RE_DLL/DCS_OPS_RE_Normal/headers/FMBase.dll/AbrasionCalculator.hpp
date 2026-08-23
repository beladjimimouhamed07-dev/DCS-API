#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AbrasionCalculator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class AbrasionCalculator
{
public:

    // RVA: 0x5 | Ordinal: 6
        void AbrasionCalculator(class EagleFM::AbrasionCalculator const &);

    // RVA: 0x6 | Ordinal: 7
        void AbrasionCalculator(void);

    // RVA: 0x3D2 | Ordinal: 979
        void calc(double);

    // RVA: 0x3D3 | Ordinal: 980
        void calc(double, double);

    // RVA: 0x6B4 | Ordinal: 1717
        void getTimeFull(void) const;

    // RVA: 0x752 | Ordinal: 1875
        void initParameter1(double, double, double, int);

    // RVA: 0x753 | Ordinal: 1876
        void initParameter2(double, double, double, int);

    // RVA: 0x90F | Ordinal: 2320
        void setTimeFull(double);

    // RVA: 0x177 | Ordinal: 376
        void _AbrasionCalculator(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ABRASIONCALCULATOR_HPP
