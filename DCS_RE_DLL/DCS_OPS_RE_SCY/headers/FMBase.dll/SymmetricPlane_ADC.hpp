#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: SymmetricPlane_ADC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class SymmetricPlane_ADC
{
public:

    // RVA: 0x143 | Ordinal: 324
        void SymmetricPlane_ADC(double, double *, double *, double *);

    // RVA: 0x3E8 | Ordinal: 1001
        void calcAerodynamics(double, double, double *, double *, double *, double *);

    // RVA: 0x4FF | Ordinal: 1280
        void getChordQuarter(void) const;

    // RVA: 0x5BC | Ordinal: 1469
        void getMach(void) const;
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SYMMETRICPLANE_ADC_HPP
