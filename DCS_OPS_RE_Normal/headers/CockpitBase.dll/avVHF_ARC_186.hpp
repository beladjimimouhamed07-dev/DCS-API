#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avVHF_ARC_186
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avVHF_ARC_186
{
public:

    // RVA: 0x89F | Ordinal: 2208
        void SetCommand(int, float);

    // RVA: 0x1D3 | Ordinal: 468
        void avVHF_ARC_186(void);

    // RVA: 0xA56 | Ordinal: 2647
        void checkRadioDevices(void);

    // RVA: 0xAFF | Ordinal: 2816
        void connect_electric(class EagleFM::Elec::ItemBase &);

    // RVA: 0xBDE | Ordinal: 3039
        void ext_set_frequency(int);

    // RVA: 0xF18 | Ordinal: 3865
        void get_digit(enum cockpit::avVHF_ARC_186::VHF_186_digits) const;

    // RVA: 0xF87 | Ordinal: 3976
        void get_knobs_frequency(void) const;

    // RVA: 0x1089 | Ordinal: 4234
        void get_set_frequency(void) const;

    // RVA: 0x1201 | Ordinal: 4610
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1243 | Ordinal: 4676
        void isAMRadio(void) const;

    // RVA: 0x12D2 | Ordinal: 4819
        void knobs_frequency_changed(void);

    // RVA: 0x13AB | Ordinal: 5036
        void load_dials(class Lua::Config &);

    // RVA: 0x13AF | Ordinal: 5040
        void load_freq_dialer(class Lua::Config &);

    // RVA: 0x146C | Ordinal: 5229
        void on_frequency_changed(void);

    // RVA: 0x1472 | Ordinal: 5235
        void on_mode_change(int);

    // RVA: 0x14A9 | Ordinal: 5290
        void perform_init_state(void);

    // RVA: 0x1650 | Ordinal: 5713
        void save_dials(void) const;

    // RVA: 0x18B6 | Ordinal: 6327
        void set_knobs_frequency(int);

    // RVA: 0x18EC | Ordinal: 6381
        void set_modulation(char);

    // RVA: 0x1914 | Ordinal: 6421
        void set_preset_channel(unsigned int);

    // RVA: 0x1B7B | Ordinal: 7036
        void update_power_and_tone(void);

    // RVA: 0x366 | Ordinal: 871
        void _avVHF_ARC_186(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVVHF_ARC_186_HPP
