#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleAltimeter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleAltimeter
{
public:

    // RVA: 0x896 | Ordinal: 2199
        void SetCommand(int, float);

    // RVA: 0x1A9 | Ordinal: 426
        void avSimpleAltimeter(int, unsigned char);

    // RVA: 0x1AA | Ordinal: 427
        void avSimpleAltimeter(void);

    // RVA: 0xA41 | Ordinal: 2626
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xAE9 | Ordinal: 2794
        void computeAlt_MSL(double);

    // RVA: 0xE99 | Ordinal: 3738
        void get_altitude(void) const;

    // RVA: 0xE9A | Ordinal: 3739
        void get_altitude_MSL(void) const;

    // RVA: 0xEB9 | Ordinal: 3770
        void get_base_atmo_pressure_hg(void) const;

    // RVA: 0x1082 | Ordinal: 4227
        void get_sensor_altitude(void) const;

    // RVA: 0x11ED | Ordinal: 4590
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14F6 | Ordinal: 5367
        void post_initialize(void);

    // RVA: 0x1818 | Ordinal: 6169
        void set_altitude_MSL(double);

    // RVA: 0x182C | Ordinal: 6189
        void set_base_atmo_pressure_hg(double);

    // RVA: 0x1889 | Ordinal: 6282
        void set_field_pressure(void);

    // RVA: 0x1AD5 | Ordinal: 6870
        void update(void);

    // RVA: 0x34D | Ordinal: 846
        void _avSimpleAltimeter(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLEALTIMETER_HPP
