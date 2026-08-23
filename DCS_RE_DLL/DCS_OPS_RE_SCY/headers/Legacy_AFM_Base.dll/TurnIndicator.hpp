#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: TurnIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class TurnIndicator
{
public:

    // RVA: 0x37A | Ordinal: 891
        void Construct(void);

    // RVA: 0x3E1 | Ordinal: 994
        void Create(void);

    // RVA: 0x4AE | Ordinal: 1199
        void LockSensor(class AFM::Sensor *);

    // RVA: 0x4F8 | Ordinal: 1273
        void Simulation(double);

    // RVA: 0xED | Ordinal: 238
        void TurnIndicator(class AFM::TurnIndicator &&);

    // RVA: 0xEE | Ordinal: 239
        void TurnIndicator(class AFM::TurnIndicator const &);

    // RVA: 0xEF | Ordinal: 240
        void TurnIndicator(void);

    // RVA: 0x611 | Ordinal: 1554
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x151 | Ordinal: 338
        void _TurnIndicator(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_TURNINDICATOR_HPP
