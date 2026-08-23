#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleRadarTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleRadarTimer
{
public:

    // RVA: 0x827 | Ordinal: 2088
        void NextEvent(void);

    // RVA: 0x1B2 | Ordinal: 435
        void avSimpleRadarTimer(class cockpit::avSimpleRadar *, double);

    // RVA: 0x352 | Ordinal: 851
        void _avSimpleRadarTimer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLERADARTIMER_HPP
