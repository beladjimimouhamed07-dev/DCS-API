#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSpot_SearchTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSpot_SearchTimer
{
public:

    // RVA: 0x828 | Ordinal: 2089
        void NextEvent(void);

    // RVA: 0x1BD | Ordinal: 446
        void avSpot_SearchTimer(class cockpit::avLaserSpotDetector *, double);

    // RVA: 0x358 | Ordinal: 857
        void _avSpot_SearchTimer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSPOT_SEARCHTIMER_HPP
