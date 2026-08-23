#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GyroElectricSource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class GyroElectricSource
{
public:

    // RVA: 0x59 | Ordinal: 90
        void GyroElectricSource(class cockpit::GyroElectricSource const &);

    // RVA: 0x5A | Ordinal: 91
        void GyroElectricSource(double);

    // RVA: 0xFE2 | Ordinal: 4067
        void get_nominal_rpm(void) const;

    // RVA: 0x1023 | Ordinal: 4132
        void get_power_connector(void);

    // RVA: 0x118A | Ordinal: 4491
        void initialize(float, float, float);

    // RVA: 0x12C2 | Ordinal: 4803
        void is_powered(void) const;

    // RVA: 0x134F | Ordinal: 4944
        void l_read(class Lua::Config &);

    // RVA: 0x1833 | Ordinal: 6196
        void set_broken(bool);

    // RVA: 0x1984 | Ordinal: 6533
        void simulate(double);

    // RVA: 0x2AB | Ordinal: 684
        void _GyroElectricSource(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GYROELECTRICSOURCE_HPP
