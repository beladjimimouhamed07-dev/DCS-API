#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avUHF_ARC_164
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avUHF_ARC_164
{
public:

    // RVA: 0x89C | Ordinal: 2205
        void SetCommand(int, float);

    // RVA: 0x1CE | Ordinal: 463
        void avUHF_ARC_164(class cockpit::avUHF_ARC_164 const &);

    // RVA: 0x1CF | Ordinal: 464
        void avUHF_ARC_164(void);

    // RVA: 0xA55 | Ordinal: 2646
        void checkRadioDevices(void);

    // RVA: 0xAFD | Ordinal: 2814
        void connect_electric(class EagleFM::Elec::ItemBase &);

    // RVA: 0xB77 | Ordinal: 2936
        void displayTesting(void);

    // RVA: 0xBDD | Ordinal: 3038
        void ext_set_frequency(int);

    // RVA: 0xC40 | Ordinal: 3137
        void getAlternateFrequency(void) const;

    // RVA: 0xC51 | Ordinal: 3154
        void getBearing(void) const;

    // RVA: 0xD25 | Ordinal: 3366
        void getKnobsFrequencyKHz(void) const;

    // RVA: 0xD26 | Ordinal: 3367
        void getKnobsFrequencyMHz(void) const;

    // RVA: 0xD6F | Ordinal: 3440
        void getNetAddress(void) const;

    // RVA: 0xF86 | Ordinal: 3975
        void get_knobs_frequency(void) const;

    // RVA: 0x1088 | Ordinal: 4233
        void get_set_frequency(void) const;

    // RVA: 0x114E | Ordinal: 4431
        void indicationOff(void) const;

    // RVA: 0x11FE | Ordinal: 4607
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1245 | Ordinal: 4678
        void isActiveMode(void);

    // RVA: 0x124A | Ordinal: 4683
        void isAlternateFreqStatus(void) const;

    // RVA: 0x127C | Ordinal: 4733
        void isPresetChannelMode(void) const;

    // RVA: 0x12D1 | Ordinal: 4818
        void knobs_frequency_changed(void);

    // RVA: 0x1343 | Ordinal: 4932
        void l_metatable_name(void) const;

    // RVA: 0x13AA | Ordinal: 5035
        void load_dials(class Lua::Config &);

    // RVA: 0x1470 | Ordinal: 5233
        void on_mode_change(int);

    // RVA: 0x14A7 | Ordinal: 5288
        void perform_init_state(void);

    // RVA: 0x1501 | Ordinal: 5378
        void post_initialize(void);

    // RVA: 0x15C8 | Ordinal: 5577
        void release(void);

    // RVA: 0x164F | Ordinal: 5712
        void save_dials(void) const;

    // RVA: 0x18B5 | Ordinal: 6326
        void set_knobs_frequency(int);

    // RVA: 0x1913 | Ordinal: 6420
        void set_preset_channel(unsigned int);

    // RVA: 0x1A54 | Ordinal: 6741
        void transmit_DF_tone(bool);

    // RVA: 0x1AE0 | Ordinal: 6881
        void update(void);

    // RVA: 0x363 | Ordinal: 868
        void _avUHF_ARC_164(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVUHF_ARC_164_HPP
