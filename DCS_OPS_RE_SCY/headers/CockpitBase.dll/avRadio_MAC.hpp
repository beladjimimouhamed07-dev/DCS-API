#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRadio_MAC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRadio_MAC
{
public:

    // RVA: 0x18C | Ordinal: 397
        void avRadio_MAC(class cockpit::avRadio_MAC const &);

    // RVA: 0x18D | Ordinal: 398
        void avRadio_MAC(void);

    // RVA: 0xBDC | Ordinal: 3037
        void ext_set_frequency(int);

    // RVA: 0xBE1 | Ordinal: 3042
        void ext_set_modulation(char);

    // RVA: 0xCA0 | Ordinal: 3233
        void getElecPower(void) const;

    // RVA: 0x1087 | Ordinal: 4232
        void get_set_frequency(void) const;

    // RVA: 0x11E0 | Ordinal: 4577
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x13A9 | Ordinal: 5034
        void load_dials(class Lua::Config &);

    // RVA: 0x14A6 | Ordinal: 5287
        void perform_init_state(void);

    // RVA: 0x164E | Ordinal: 5711
        void save_dials(void) const;

    // RVA: 0x16F3 | Ordinal: 5876
        void setElecPower(bool);

    // RVA: 0x18EB | Ordinal: 6380
        void set_modulation(char);

    // RVA: 0x33D | Ordinal: 830
        void _avRadio_MAC(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVRADIO_MAC_HPP
