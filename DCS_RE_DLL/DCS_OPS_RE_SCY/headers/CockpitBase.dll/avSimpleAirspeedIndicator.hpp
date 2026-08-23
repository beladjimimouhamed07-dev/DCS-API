#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleAirspeedIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleAirspeedIndicator
{
public:

    // RVA: 0x1A7 | Ordinal: 424
        void avSimpleAirspeedIndicator(int);

    // RVA: 0x1A8 | Ordinal: 425
        void avSimpleAirspeedIndicator(void);

    // RVA: 0xE68 | Ordinal: 3689
        void get_IAS(void) const;

    // RVA: 0x1080 | Ordinal: 4225
        void get_sensor_IAS(void) const;

    // RVA: 0x11EC | Ordinal: 4589
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x15FF | Ordinal: 5632
        void repair(void);

    // RVA: 0x1861 | Ordinal: 6242
        void set_damage(unsigned int, bool);

    // RVA: 0x1AD4 | Ordinal: 6869
        void update(void);

    // RVA: 0x34C | Ordinal: 845
        void _avSimpleAirspeedIndicator(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLEAIRSPEEDINDICATOR_HPP
