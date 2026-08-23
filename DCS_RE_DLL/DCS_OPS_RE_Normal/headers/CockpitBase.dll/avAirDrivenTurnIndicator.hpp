#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAirDrivenTurnIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAirDrivenTurnIndicator
{
public:

    // RVA: 0xC4 | Ordinal: 197
        void avAirDrivenTurnIndicator(void);

    // RVA: 0x119E | Ordinal: 4511
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x15EF | Ordinal: 5616
        void repair(void);

    // RVA: 0x1852 | Ordinal: 6227
        void set_damage(unsigned int, bool);

    // RVA: 0x190D | Ordinal: 6414
        void set_power(float);

    // RVA: 0x1993 | Ordinal: 6548
        void simulate_damage(void);

    // RVA: 0x1A9B | Ordinal: 6812
        void update(void);

    // RVA: 0x2DB | Ordinal: 732
        void _avAirDrivenTurnIndicator(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAIRDRIVENTURNINDICATOR_HPP
