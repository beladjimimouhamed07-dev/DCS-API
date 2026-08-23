#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: gauge
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class gauge
{
public:

    // RVA: 0x26E | Ordinal: 623
        void gauge(class cockpit::gauge &&);

    // RVA: 0x26F | Ordinal: 624
        void gauge(class cockpit::gauge const &);

    // RVA: 0x270 | Ordinal: 625
        void gauge(void);

    // RVA: 0xF2F | Ordinal: 3888
        void get_error(void) const;

    // RVA: 0xF31 | Ordinal: 3890
        void get_failure(void) const;

    // RVA: 0x10E4 | Ordinal: 4325
        void get_value_max(void) const;

    // RVA: 0x10E5 | Ordinal: 4326
        void get_value_min(void) const;

    // RVA: 0x10E6 | Ordinal: 4327
        void get_value_out(void) const;

    // RVA: 0x1352 | Ordinal: 4947
        void l_read(class Lua::Config &, char const *);

    // RVA: 0x1888 | Ordinal: 6281
        void set_failure(bool);

    // RVA: 0x1965 | Ordinal: 6502
        void set_value_max(double);

    // RVA: 0x1966 | Ordinal: 6503
        void set_value_min(double);

    // RVA: 0x1967 | Ordinal: 6504
        void set_value_out(double);

    // RVA: 0x198A | Ordinal: 6539
        void simulate(double, double);

    // RVA: 0x19FA | Ordinal: 6651
        void stop(double);

    // RVA: 0x3B3 | Ordinal: 948
        void _gauge(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GAUGE_HPP
