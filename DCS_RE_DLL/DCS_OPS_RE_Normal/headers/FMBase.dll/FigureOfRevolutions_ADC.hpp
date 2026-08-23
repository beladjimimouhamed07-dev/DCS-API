#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FigureOfRevolutions_ADC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FigureOfRevolutions_ADC
{
public:

    // RVA: 0x7A | Ordinal: 123
        void FigureOfRevolutions_ADC(double, double *, double *, double *);

    // RVA: 0x3E3 | Ordinal: 996
        void calcAerodynamics(double, double, double *, double *, double *);

    // RVA: 0x5B9 | Ordinal: 1466
        void getMach(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FIGUREOFREVOLUTIONS_ADC_HPP
