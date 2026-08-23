#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: FrequencyDial_Model
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class FrequencyDial_Model
{
public:

    // RVA: 0x3E | Ordinal: 63
        void FrequencyDial_Model(class cockpit::FrequencyDial_Model &&);

    // RVA: 0x3F | Ordinal: 64
        void FrequencyDial_Model(class cockpit::FrequencyDial_Model const &);

    // RVA: 0x40 | Ordinal: 65
        void FrequencyDial_Model(class cockpit::avDevice *, unsigned char);

    // RVA: 0xAE4 | Ordinal: 2789
        void compare(unsigned char, float) const;

    // RVA: 0xC15 | Ordinal: 3094
        void force_set_frequency(int);

    // RVA: 0xEA5 | Ordinal: 3750
        void get_arg(unsigned char) const;

    // RVA: 0xF4E | Ordinal: 3919
        void get_frequency(void) const;

    // RVA: 0xF7A | Ordinal: 3963
        void get_indicated_value(unsigned char, unsigned char) const;

    // RVA: 0x134A | Ordinal: 4939
        void l_read(class Lua::Config &, char const *);

    // RVA: 0x1424 | Ordinal: 5157
        void next_frequency_valid(unsigned char, int) const;

    // RVA: 0x1895 | Ordinal: 6294
        void set_frequency(void);

    // RVA: 0x1B66 | Ordinal: 7015
        void update_frequency(unsigned char);

    // RVA: 0x2A2 | Ordinal: 675
        void _FrequencyDial_Model(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_FREQUENCYDIAL_MODEL_HPP
