#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: track_simulation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class track_simulation
{
public:

    // RVA: 0x8F0 | Ordinal: 2289
        void active(void) const;

    // RVA: 0xAC1 | Ordinal: 2754
        void clear(void);

    // RVA: 0xF44 | Ordinal: 3909
        void get_frame(double, double) const;

    // RVA: 0xF45 | Ordinal: 3910
        void get_frame(void) const;

    // RVA: 0x19D2 | Ordinal: 6611
        void start(struct cockpit::sensor_frame const &, double, double, double);

    // RVA: 0x292 | Ordinal: 659
        void track_simulation(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_TRACK_SIMULATION_HPP
