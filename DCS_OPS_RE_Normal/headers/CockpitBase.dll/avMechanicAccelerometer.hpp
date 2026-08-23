#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMechanicAccelerometer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMechanicAccelerometer
{
public:

    // RVA: 0x88D | Ordinal: 2190
        void SetCommand(int, float);

    // RVA: 0x158 | Ordinal: 345
        void avMechanicAccelerometer(class cockpit::avMechanicAccelerometer const &);

    // RVA: 0x159 | Ordinal: 346
        void avMechanicAccelerometer(void);

    // RVA: 0xF51 | Ordinal: 3922
        void get_gauge_acceleration(void) const;

    // RVA: 0xFBC | Ordinal: 4029
        void get_max_achieved_acc(void) const;

    // RVA: 0xFC6 | Ordinal: 4039
        void get_min_achieved_acc(void) const;

    // RVA: 0x11D3 | Ordinal: 4564
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14F1 | Ordinal: 5362
        void post_initialize(void);

    // RVA: 0x1AC1 | Ordinal: 6850
        void update(void);

    // RVA: 0x325 | Ordinal: 806
        void _avMechanicAccelerometer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMECHANICACCELEROMETER_HPP
