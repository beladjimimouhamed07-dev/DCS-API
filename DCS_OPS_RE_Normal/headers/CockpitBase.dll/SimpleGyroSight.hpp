#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SimpleGyroSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SimpleGyroSight
{
public:

    // RVA: 0x7C | Ordinal: 125
        void SimpleGyroSight(void);

    // RVA: 0x930 | Ordinal: 2353
        void adjustBallisticData(float, float);

    // RVA: 0x1694 | Ordinal: 5781
        void setAircraftSpeed(float);

    // RVA: 0x1698 | Ordinal: 5785
        void setAltitude(float);

    // RVA: 0x1A38 | Ordinal: 6713
        void time_by_distance(float);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SIMPLEGYROSIGHT_HPP
