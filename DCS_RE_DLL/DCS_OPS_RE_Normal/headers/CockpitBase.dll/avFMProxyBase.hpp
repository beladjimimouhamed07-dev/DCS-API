#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avFMProxyBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avFMProxyBase
{
public:

    // RVA: 0x111 | Ordinal: 274
        void avFMProxyBase(void);

    // RVA: 0x112 | Ordinal: 275
        void avFMProxyBase(class cockpit::avFMProxyBase const &);

    // RVA: 0xE57 | Ordinal: 3672
        void get_Barometric_Altitude_(void) const;

    // RVA: 0xE5F | Ordinal: 3680
        void get_G(void) const;

    // RVA: 0xE67 | Ordinal: 3688
        void get_IAS(int) const;

    // RVA: 0xE69 | Ordinal: 3690
        void get_IAS_(void) const;

    // RVA: 0xE6E | Ordinal: 3695
        void get_Mach(int) const;

    // RVA: 0xE70 | Ordinal: 3697
        void get_Mach_(void) const;

    // RVA: 0xE83 | Ordinal: 3716
        void get_Vertical_Speed_(void) const;

    // RVA: 0xEA8 | Ordinal: 3753
        void get_atmo_pressure(void) const;

    // RVA: 0xEB6 | Ordinal: 3767
        void get_barometric_altitude(int) const;

    // RVA: 0xEB8 | Ordinal: 3769
        void get_base_atmo_pressure_hg(unsigned char) const;

    // RVA: 0xF06 | Ordinal: 3847
        void get_data_ptr(class ed::basic_string<char> const &);

    // RVA: 0x1083 | Ordinal: 4228
        void get_sensor_output(int) const;

    // RVA: 0x10ED | Ordinal: 4334
        void get_vertical_speed(int) const;

    // RVA: 0x10F6 | Ordinal: 4343
        void get_wheelbrake(int) const;

    // RVA: 0x11B8 | Ordinal: 4537
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14E1 | Ordinal: 5346
        void post_initialize(void);

    // RVA: 0x1826 | Ordinal: 6183
        void set_atmo_pressure_hg(double, unsigned char);

    // RVA: 0x304 | Ordinal: 773
        void _avFMProxyBase(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVFMPROXYBASE_HPP
