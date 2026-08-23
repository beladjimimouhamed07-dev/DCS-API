#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Plane_ADC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Plane_ADC
{
public:

    // RVA: 0x10C | Ordinal: 269
        void Plane_ADC(double, double *, double *, double *, double *, double *, double *);

    // RVA: 0x3E6 | Ordinal: 999
        void calcAerodynamics(double, double, double *, double *, double *, double *, double *);

    // RVA: 0x4FD | Ordinal: 1278
        void getChordQuarter(void) const;

    // RVA: 0x51E | Ordinal: 1311
        void getCyaMaxData(int) const;

    // RVA: 0x5BB | Ordinal: 1468
        void getMach(void) const;

    // RVA: 0x88B | Ordinal: 2188
        void setK_AspectRatio(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PLANE_ADC_HPP
