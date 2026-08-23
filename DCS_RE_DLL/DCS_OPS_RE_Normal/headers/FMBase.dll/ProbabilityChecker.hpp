#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ProbabilityChecker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ProbabilityChecker
{
public:

    // RVA: 0x10D | Ordinal: 270
        void ProbabilityChecker(class EagleFM::ProbabilityChecker const &);

    // RVA: 0x10E | Ordinal: 271
        void ProbabilityChecker(double);

    // RVA: 0x3C9 | Ordinal: 970
        void addProbabilityAndTime(double, double);

    // RVA: 0x493 | Ordinal: 1172
        void doSimulate(void);

    // RVA: 0x4FA | Ordinal: 1275
        void getCheckResult(void) const;

    // RVA: 0x6B3 | Ordinal: 1716
        void getTime(void);

    // RVA: 0x759 | Ordinal: 1882
        void initRandomizer(unsigned int);

    // RVA: 0x789 | Ordinal: 1930
        void isToOccure(void) const;

    // RVA: 0x7E1 | Ordinal: 2018
        void resetCheckResult(void);

    // RVA: 0x7E5 | Ordinal: 2022
        void resetEvent(void);

    // RVA: 0x7ED | Ordinal: 2030
        void resetProbability(void);

    // RVA: 0x7EE | Ordinal: 2031
        void resetTime(void);

    // RVA: 0x850 | Ordinal: 2129
        void setEvent(double, double, double);

    // RVA: 0x1CC | Ordinal: 461
        void _ProbabilityChecker(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PROBABILITYCHECKER_HPP
