#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccLocalTime
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccLocalTime
{
public:

    // RVA: 0xC88 | Ordinal: 3209
        void getDeltaLocalTime(void);

    // RVA: 0xD36 | Ordinal: 3383
        void getLocalModelTime(void);

    // RVA: 0xD56 | Ordinal: 3415
        void getMissionDate(unsigned int &, unsigned int &, unsigned int &);

    // RVA: 0x1218 | Ordinal: 4633
        void initialize(void);

    // RVA: 0x1747 | Ordinal: 5960
        void setLocalTime(double);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCLOCALTIME_HPP
