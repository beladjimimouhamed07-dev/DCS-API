#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AngularRateSensor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class AngularRateSensor
{
public:

    // RVA: 0x1C | Ordinal: 29
        void AngularRateSensor(class EagleFM::DynamicBody *, double, double);

    // RVA: 0x3ED | Ordinal: 1006
        void calcAngularRate(void) const;

    // RVA: 0x844 | Ordinal: 2117
        void setDirection(double, double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ANGULARRATESENSOR_HPP
