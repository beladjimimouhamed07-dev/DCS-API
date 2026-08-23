#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GyroAirSource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class GyroAirSource
{
public:

    // RVA: 0x57 | Ordinal: 88
        void GyroAirSource(class cockpit::GyroAirSource const &);

    // RVA: 0x58 | Ordinal: 89
        void GyroAirSource(void);

    // RVA: 0x102C | Ordinal: 4141
        void get_pressure(void) const;

    // RVA: 0x112F | Ordinal: 4400
        void hot_start(double);

    // RVA: 0x12C1 | Ordinal: 4802
        void is_powered(void) const;

    // RVA: 0x1832 | Ordinal: 6195
        void set_broken(bool);

    // RVA: 0x190B | Ordinal: 6412
        void set_power(float);

    // RVA: 0x1983 | Ordinal: 6532
        void simulate(double);

    // RVA: 0x2AA | Ordinal: 683
        void _GyroAirSource(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GYROAIRSOURCE_HPP
