#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avTrackData
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avTrackData
{
public:

    // RVA: 0x1C8 | Ordinal: 457
        void avTrackData(class cockpit::avTrackData const &);

    // RVA: 0x1C9 | Ordinal: 458
        void avTrackData(void);

    // RVA: 0xAC0 | Ordinal: 2753
        void clear(void);

    // RVA: 0x100F | Ordinal: 4112
        void get_point(void) const;

    // RVA: 0x1ADE | Ordinal: 6879
        void update(class wPosition3<double> const &);

    // RVA: 0x360 | Ordinal: 865
        void _avTrackData(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVTRACKDATA_HPP
