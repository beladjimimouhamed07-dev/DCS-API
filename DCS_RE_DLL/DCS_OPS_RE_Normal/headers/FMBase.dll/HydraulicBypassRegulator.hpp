#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicBypassRegulator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicBypassRegulator
{
public:

    // RVA: 0xAE | Ordinal: 175
        void HydraulicBypassRegulator(double, double);

    // RVA: 0x42C | Ordinal: 1069
        void calcPressureAndConsumption(double, double);

    // RVA: 0x50D | Ordinal: 1294
        void getConsumption(void) const;

    // RVA: 0x621 | Ordinal: 1570
        void getPressure(void) const;

    // RVA: 0x649 | Ordinal: 1610
        void getRelativeControl(void) const;

    // RVA: 0x650 | Ordinal: 1617
        void getRelativePressure(void) const;

    // RVA: 0x71E | Ordinal: 1823
        void init(double, double);

    // RVA: 0x8E9 | Ordinal: 2282
        void setRelativeControl(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICBYPASSREGULATOR_HPP
