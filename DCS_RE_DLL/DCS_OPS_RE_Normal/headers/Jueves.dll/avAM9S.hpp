#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avAM9S
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avAM9S
{
public:

    // RVA: 0x9A | Ordinal: 155
        void avAM9S(void);

    // RVA: 0x3E5 | Ordinal: 998
        void get_sensor_G(void) const;

    // RVA: 0x415 | Ordinal: 1046
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x56E | Ordinal: 1391
        void setOverloadSwitch(class EagleFM::Elec::Switch *);

    // RVA: 0x61E | Ordinal: 1567
        void update(void);

    // RVA: 0x125 | Ordinal: 294
        void _avAM9S(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVAM9S_HPP
