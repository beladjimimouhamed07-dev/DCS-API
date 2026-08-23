#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: gauge_limited
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class gauge_limited
{
public:

    // RVA: 0x274 | Ordinal: 629
        void gauge_limited(class cockpit::gauge_limited &&);

    // RVA: 0x275 | Ordinal: 630
        void gauge_limited(class cockpit::gauge_limited const &);

    // RVA: 0x276 | Ordinal: 631
        void gauge_limited(void);

    // RVA: 0x198B | Ordinal: 6540
        void simulate(double, double);

    // RVA: 0x198F | Ordinal: 6544
        void simulateF(double, double, double, double);

    // RVA: 0x1991 | Ordinal: 6546
        void simulateM(double, double, double);

    // RVA: 0x3B5 | Ordinal: 950
        void _gauge_limited(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GAUGE_LIMITED_HPP
