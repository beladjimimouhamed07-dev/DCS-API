#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDevice_BasicTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDevice_BasicTimer
{
public:

    // RVA: 0x826 | Ordinal: 2087
        void NextEvent(void);

    // RVA: 0xFB | Ordinal: 252
        void avDevice_BasicTimer(class cockpit::avDevice *, double);

    // RVA: 0x2F8 | Ordinal: 761
        void _avDevice_BasicTimer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDEVICE_BASICTIMER_HPP
