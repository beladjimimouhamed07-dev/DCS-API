#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Fuelmeter_5000
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Fuelmeter_5000
{
public:

    // RVA: 0x355 | Ordinal: 854
        void Construct(void);

    // RVA: 0x3B0 | Ordinal: 945
        void Create(void);

    // RVA: 0x57 | Ordinal: 88
        void Fuelmeter_5000(class AFM::Fuelmeter_5000 &&);

    // RVA: 0x58 | Ordinal: 89
        void Fuelmeter_5000(class AFM::Fuelmeter_5000 const &);

    // RVA: 0x59 | Ordinal: 90
        void Fuelmeter_5000(void);

    // RVA: 0x488 | Ordinal: 1161
        void LockFuelSystem(class AFM::FuelSystem *);

    // RVA: 0x4DE | Ordinal: 1247
        void Simulation(double);

    // RVA: 0x60C | Ordinal: 1549
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x67A | Ordinal: 1659
        void getIPointerSensor(class AFM::Sensor **);

    // RVA: 0x77C | Ordinal: 1917
        void setActiveTanks(int *);

    // RVA: 0x11F | Ordinal: 288
        void _Fuelmeter_5000(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_FUELMETER_5000_HPP
