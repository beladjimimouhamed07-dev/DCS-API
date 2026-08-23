#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Plane_ADC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Plane_ADC
{
public:

    // RVA: 0x365 | Ordinal: 870
        void Construct(void);

    // RVA: 0x3C7 | Ordinal: 968
        void Create(void);

    // RVA: 0x436 | Ordinal: 1079
        void Init(double, double *, double *, double *, double *);

    // RVA: 0x9C | Ordinal: 157
        void Plane_ADC(class AFM::Plane_ADC &&);

    // RVA: 0x9D | Ordinal: 158
        void Plane_ADC(class AFM::Plane_ADC const &);

    // RVA: 0x9E | Ordinal: 159
        void Plane_ADC(void);

    // RVA: 0x51D | Ordinal: 1310
        void calcAerodynamics(double, double, double *, double *, double *, double *, double *);

    // RVA: 0x6B9 | Ordinal: 1722
        void getMach(double *);

    // RVA: 0x136 | Ordinal: 311
        void _Plane_ADC(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_PLANE_ADC_HPP
