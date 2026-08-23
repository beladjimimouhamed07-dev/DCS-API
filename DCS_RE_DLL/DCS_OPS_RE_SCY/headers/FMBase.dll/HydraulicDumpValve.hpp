#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicDumpValve
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicDumpValve
{
public:

    // RVA: 0xB2 | Ordinal: 179
        void HydraulicDumpValve(double, double);

    // RVA: 0x42D | Ordinal: 1070
        void calcPressureAndConsumption(double, double, double *, double *);

    // RVA: 0x720 | Ordinal: 1825
        void init(double, double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICDUMPVALVE_HPP
