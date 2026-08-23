#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: FigureOfRevolutions_ADC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class FigureOfRevolutions_ADC
{
public:

    // RVA: 0x353 | Ordinal: 852
        void Construct(void);

    // RVA: 0x3AE | Ordinal: 943
        void Create(void);

    // RVA: 0x51 | Ordinal: 82
        void FigureOfRevolutions_ADC(class AFM::FigureOfRevolutions_ADC &&);

    // RVA: 0x52 | Ordinal: 83
        void FigureOfRevolutions_ADC(class AFM::FigureOfRevolutions_ADC const &);

    // RVA: 0x53 | Ordinal: 84
        void FigureOfRevolutions_ADC(void);

    // RVA: 0x435 | Ordinal: 1078
        void Init(double, double *, double *, double *);

    // RVA: 0x517 | Ordinal: 1304
        void calcAerodynamics(double, double, double *, double *, double *);

    // RVA: 0x6B8 | Ordinal: 1721
        void getMach(double *);

    // RVA: 0x11D | Ordinal: 286
        void _FigureOfRevolutions_ADC(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_FIGUREOFREVOLUTIONS_ADC_HPP
