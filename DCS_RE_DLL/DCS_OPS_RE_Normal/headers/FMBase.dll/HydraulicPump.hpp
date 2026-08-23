#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicPump
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicPump
{
public:

    // RVA: 0xB4 | Ordinal: 181
        void HydraulicPump(double, double, double);

    // RVA: 0x626 | Ordinal: 1575
        void getProductivity(void) const;

    // RVA: 0x722 | Ordinal: 1827
        void init(double, double, double);

    // RVA: 0x757 | Ordinal: 1880
        void initRPMdeadzone(double, double);

    // RVA: 0x964 | Ordinal: 2405
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICPUMP_HPP
