#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicPressureRegulator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicPressureRegulator
{
public:

    // RVA: 0xB3 | Ordinal: 180
        void HydraulicPressureRegulator(double, double, double);

    // RVA: 0x3FA | Ordinal: 1019
        void calcConsumptions(double, double, double, double *, double *);

    // RVA: 0x64B | Ordinal: 1612
        void getRelativeControl(void) const;

    // RVA: 0x721 | Ordinal: 1826
        void init(double, double, double);

    // RVA: 0x8EB | Ordinal: 2284
        void setRelativeControl(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICPRESSUREREGULATOR_HPP
