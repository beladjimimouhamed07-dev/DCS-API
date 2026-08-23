#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: FuelPump
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class FuelPump
{
public:

    // RVA: 0x87 | Ordinal: 136
        void FuelPump(class EagleFM::FuelPump &&);

    // RVA: 0x88 | Ordinal: 137
        void FuelPump(class EagleFM::FuelPump const &);

    // RVA: 0x89 | Ordinal: 138
        void FuelPump(double);

    // RVA: 0x8A | Ordinal: 139
        void FuelPump(double, double, double);

    // RVA: 0x7FD | Ordinal: 2046
        void setActiveDelivery(double);

    // RVA: 0x8BD | Ordinal: 2238
        void setPassiveDelivery(double);

    // RVA: 0x95B | Ordinal: 2396
        void simulate(double);

    // RVA: 0x1A6 | Ordinal: 423
        void _FuelPump(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_FUELPUMP_HPP
