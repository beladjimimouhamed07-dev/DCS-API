#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avVHF_SCR_522A
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avVHF_SCR_522A
{
public:

    // RVA: 0x8A2 | Ordinal: 2211
        void SetCommand(int, float);

    // RVA: 0x1D6 | Ordinal: 471
        void avVHF_SCR_522A(void);

    // RVA: 0xA44 | Ordinal: 2629
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xA59 | Ordinal: 2650
        void checkRadioDevices(void);

    // RVA: 0xB02 | Ordinal: 2819
        void connect_electric(class EagleFM::Elec::Wire &);

    // RVA: 0xBD5 | Ordinal: 3030
        void ext_is_on(void) const;

    // RVA: 0xBDA | Ordinal: 3035
        void ext_set_channel(int);

    // RVA: 0xFA0 | Ordinal: 4001
        void get_light(unsigned int) const;

    // RVA: 0x108C | Ordinal: 4237
        void get_set_frequency(void) const;

    // RVA: 0x1204 | Ordinal: 4613
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1345 | Ordinal: 4934
        void l_metatable_name(void) const;

    // RVA: 0x13AE | Ordinal: 5039
        void load_dials(class Lua::Config &);

    // RVA: 0x13B6 | Ordinal: 5047
        void load_presets(void);

    // RVA: 0x1407 | Ordinal: 5128
        void mic_button_pressed(bool);

    // RVA: 0x1443 | Ordinal: 5188
        void onFunctionalModeChanging(int);

    // RVA: 0x14AC | Ordinal: 5293
        void perform_init_state(void);

    // RVA: 0x1581 | Ordinal: 5506
        void receiver_failure(void) const;

    // RVA: 0x15CC | Ordinal: 5581
        void release(void);

    // RVA: 0x1605 | Ordinal: 5638
        void repair(void);

    // RVA: 0x1653 | Ordinal: 5716
        void save_dials(void) const;

    // RVA: 0x1741 | Ordinal: 5954
        void setKnobsByChannel(int);

    // RVA: 0x1743 | Ordinal: 5956
        void setKnobsByFrequency(float);

    // RVA: 0x1867 | Ordinal: 6248
        void set_damage(unsigned int, bool);

    // RVA: 0x1B54 | Ordinal: 6997
        void update_communicator_state(void);

    // RVA: 0x369 | Ordinal: 874
        void _avVHF_SCR_522A(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVVHF_SCR_522A_HPP
