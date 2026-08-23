#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBasicSensor_SearchTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBasicSensor_SearchTimer
{
public:

    // RVA: 0x7C6 | Ordinal: 1991
        void GetStartTime(void) const;

    // RVA: 0x7C7 | Ordinal: 1992
        void GetTimeout(void) const;

    // RVA: 0x825 | Ordinal: 2086
        void NextEvent(void);

    // RVA: 0x8BF | Ordinal: 2240
        void SetTimeout(double);

    // RVA: 0x8CC | Ordinal: 2253
        void Start(double);

    // RVA: 0xE1 | Ordinal: 226
        void avBasicSensor_SearchTimer(class cockpit::avBasicSensor *, double);

    // RVA: 0x1A39 | Ordinal: 6714
        void time_out(void);

    // RVA: 0x2EC | Ordinal: 749
        void _avBasicSensor_SearchTimer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASICSENSOR_SEARCHTIMER_HPP
