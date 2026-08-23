#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleVariometer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleVariometer
{
public:

    // RVA: 0x1B4 | Ordinal: 437
        void avSimpleVariometer(int);

    // RVA: 0x1B5 | Ordinal: 438
        void avSimpleVariometer(void);

    // RVA: 0x1084 | Ordinal: 4229
        void get_sensor_speed(void) const;

    // RVA: 0x10EE | Ordinal: 4335
        void get_vertical_speed(void) const;

    // RVA: 0x11F3 | Ordinal: 4596
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1ADA | Ordinal: 6875
        void update(void);

    // RVA: 0x354 | Ordinal: 853
        void _avSimpleVariometer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLEVARIOMETER_HPP
