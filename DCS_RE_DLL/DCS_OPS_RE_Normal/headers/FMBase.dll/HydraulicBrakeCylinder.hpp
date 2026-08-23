#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HydraulicBrakeCylinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HydraulicBrakeCylinder
{
public:

    // RVA: 0xAC | Ordinal: 173
        void HydraulicBrakeCylinder(double, double);

    // RVA: 0x50F | Ordinal: 1296
        void getConsumptionDeliver(void) const;

    // RVA: 0x510 | Ordinal: 1297
        void getConsumptionSink(void) const;

    // RVA: 0x5C7 | Ordinal: 1480
        void getMaxPressure(void) const;

    // RVA: 0x61F | Ordinal: 1568
        void getPressure(void) const;

    // RVA: 0x648 | Ordinal: 1609
        void getRelativeControl(void) const;

    // RVA: 0x64F | Ordinal: 1616
        void getRelativePressure(void) const;

    // RVA: 0x71C | Ordinal: 1821
        void init(double, double);

    // RVA: 0x7C9 | Ordinal: 1994
        void repair(void);

    // RVA: 0x8E8 | Ordinal: 2281
        void setRelativeControl(double);

    // RVA: 0x93D | Ordinal: 2366
        void set_failure(unsigned int);

    // RVA: 0x961 | Ordinal: 2402
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HYDRAULICBRAKECYLINDER_HPP
