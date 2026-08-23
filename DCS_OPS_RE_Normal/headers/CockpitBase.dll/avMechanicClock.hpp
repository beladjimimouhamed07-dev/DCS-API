#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMechanicClock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMechanicClock
{
public:

    // RVA: 0x88E | Ordinal: 2191
        void SetCommand(int, float);

    // RVA: 0x15A | Ordinal: 347
        void avMechanicClock(class cockpit::avMechanicClock const &);

    // RVA: 0x15B | Ordinal: 348
        void avMechanicClock(void);

    // RVA: 0xEFB | Ordinal: 3836
        void get_currtime(void) const;

    // RVA: 0x11D4 | Ordinal: 4565
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x326 | Ordinal: 807
        void _avMechanicClock(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMECHANICCLOCK_HPP
