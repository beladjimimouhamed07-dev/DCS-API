#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avActuator_BasicTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avActuator_BasicTimer
{
public:

    // RVA: 0x824 | Ordinal: 2085
        void NextEvent(void);

    // RVA: 0xC2 | Ordinal: 195
        void avActuator_BasicTimer(class cockpit::avActuator *, double);

    // RVA: 0x2D9 | Ordinal: 730
        void _avActuator_BasicTimer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVACTUATOR_BASICTIMER_HPP
