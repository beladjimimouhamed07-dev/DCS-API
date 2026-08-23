#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: ControlSurface_ADC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class ControlSurface_ADC
{
public:

    // RVA: 0x34E | Ordinal: 847
        void Construct(void);

    // RVA: 0x3C | Ordinal: 61
        void ControlSurface_ADC(class AFM::ControlSurface_ADC &&);

    // RVA: 0x3D | Ordinal: 62
        void ControlSurface_ADC(class AFM::ControlSurface_ADC const &);

    // RVA: 0x3E | Ordinal: 63
        void ControlSurface_ADC(void);

    // RVA: 0x3A7 | Ordinal: 936
        void Create(void);

    // RVA: 0x434 | Ordinal: 1077
        void Init(double, double *, double *, double *, double *);

    // RVA: 0x515 | Ordinal: 1302
        void calcAerodynamics(double, double, double, double *, double *, double *, double *);

    // RVA: 0x6B7 | Ordinal: 1720
        void getMach(double *);

    // RVA: 0x116 | Ordinal: 279
        void _ControlSurface_ADC(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_CONTROLSURFACE_ADC_HPP
