#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRWRradarParams
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRWRradarParams
{
public:

    // RVA: 0x17F | Ordinal: 384
        void avRWRradarParams(struct cockpit::avRWRradarParams &&);

    // RVA: 0x180 | Ordinal: 385
        void avRWRradarParams(struct cockpit::avRWRradarParams const &);

    // RVA: 0x181 | Ordinal: 386
        void avRWRradarParams(void);

    // RVA: 0x9BA | Ordinal: 2491
        void calcRadarConst(void);

    // RVA: 0xC8B | Ordinal: 3212
        void getDirectivityScan(class Math::Vector<2, double> const &, double, bool) const;

    // RVA: 0xC8C | Ordinal: 3213
        void getDirectivityTrack(class Math::Vector<2, double> const &) const;

    // RVA: 0x338 | Ordinal: 825
        void _avRWRradarParams(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVRWRRADARPARAMS_HPP
