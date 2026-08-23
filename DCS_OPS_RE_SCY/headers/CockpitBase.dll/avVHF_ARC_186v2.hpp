#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avVHF_ARC_186v2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avVHF_ARC_186v2
{
public:

    // RVA: 0x8A0 | Ordinal: 2209
        void SetCommand(int, float);

    // RVA: 0x1D4 | Ordinal: 469
        void avVHF_ARC_186v2(void);

    // RVA: 0xA57 | Ordinal: 2648
        void checkRadioDevices(void);

    // RVA: 0xB00 | Ordinal: 2817
        void connect_electric(class EagleFM::Elec::ItemBase &);

    // RVA: 0xBDF | Ordinal: 3040
        void ext_set_frequency(int);

    // RVA: 0xF19 | Ordinal: 3866
        void get_digit(enum cockpit::avVHF_ARC_186v2::VHF_186_digits) const;

    // RVA: 0xF88 | Ordinal: 3977
        void get_knobs_frequency(void) const;

    // RVA: 0x108A | Ordinal: 4235
        void get_set_frequency(void) const;

    // RVA: 0x1202 | Ordinal: 4611
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1244 | Ordinal: 4677
        void isAMRadio(void) const;

    // RVA: 0x126C | Ordinal: 4717
        void isModulationAllowable(int);

    // RVA: 0x12D3 | Ordinal: 4820
        void knobs_frequency_changed(void);

    // RVA: 0x13AC | Ordinal: 5037
        void load_dials(class Lua::Config &);

    // RVA: 0x13B0 | Ordinal: 5041
        void load_freq_dialer(class Lua::Config &);

    // RVA: 0x146D | Ordinal: 5230
        void on_frequency_changed(void);

    // RVA: 0x1473 | Ordinal: 5236
        void on_mode_change(int);

    // RVA: 0x14AA | Ordinal: 5291
        void perform_init_state(void);

    // RVA: 0x1503 | Ordinal: 5380
        void post_initialize(void);

    // RVA: 0x1651 | Ordinal: 5714
        void save_dials(void) const;

    // RVA: 0x18B7 | Ordinal: 6328
        void set_knobs_frequency(int);

    // RVA: 0x18ED | Ordinal: 6382
        void set_modulation(char);

    // RVA: 0x1915 | Ordinal: 6422
        void set_preset_channel(unsigned int);

    // RVA: 0x1B7C | Ordinal: 7037
        void update_power_and_tone(void);

    // RVA: 0x367 | Ordinal: 872
        void _avVHF_ARC_186v2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVVHF_ARC_186V2_HPP
