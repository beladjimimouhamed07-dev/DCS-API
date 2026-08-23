#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleMachIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleMachIndicator
{
public:

    // RVA: 0x1AD | Ordinal: 430
        void avSimpleMachIndicator(int);

    // RVA: 0x1AE | Ordinal: 431
        void avSimpleMachIndicator(void);

    // RVA: 0xE6F | Ordinal: 3696
        void get_Mach(void) const;

    // RVA: 0x1081 | Ordinal: 4226
        void get_sensor_Mach(void) const;

    // RVA: 0x11EF | Ordinal: 4592
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1600 | Ordinal: 5633
        void repair(void);

    // RVA: 0x1862 | Ordinal: 6243
        void set_damage(unsigned int, bool);

    // RVA: 0x1AD7 | Ordinal: 6872
        void update(void);

    // RVA: 0x34F | Ordinal: 848
        void _avSimpleMachIndicator(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLEMACHINDICATOR_HPP
