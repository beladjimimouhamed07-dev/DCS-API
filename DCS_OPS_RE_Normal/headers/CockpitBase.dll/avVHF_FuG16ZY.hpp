#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avVHF_FuG16ZY
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avVHF_FuG16ZY
{
public:

    // RVA: 0x8A1 | Ordinal: 2210
        void SetCommand(int, float);

    // RVA: 0x1D5 | Ordinal: 470
        void avVHF_FuG16ZY(void);

    // RVA: 0xA43 | Ordinal: 2628
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xA58 | Ordinal: 2649
        void checkRadioDevices(void);

    // RVA: 0xB01 | Ordinal: 2818
        void connect_electric(class EagleFM::Elec::Wire &);

    // RVA: 0xBD4 | Ordinal: 3029
        void ext_is_on(void) const;

    // RVA: 0xBD9 | Ordinal: 3034
        void ext_set_channel(int);

    // RVA: 0x108B | Ordinal: 4236
        void get_set_frequency(void) const;

    // RVA: 0x1203 | Ordinal: 4612
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1344 | Ordinal: 4933
        void l_metatable_name(void) const;

    // RVA: 0x13AD | Ordinal: 5038
        void load_dials(class Lua::Config &);

    // RVA: 0x13B5 | Ordinal: 5046
        void load_presets(void);

    // RVA: 0x1406 | Ordinal: 5127
        void mic_button_pressed(bool);

    // RVA: 0x1442 | Ordinal: 5187
        void onFunctionalModeChanging(int);

    // RVA: 0x14AB | Ordinal: 5292
        void perform_init_state(void);

    // RVA: 0x15CB | Ordinal: 5580
        void release(void);

    // RVA: 0x1604 | Ordinal: 5637
        void repair(void);

    // RVA: 0x1652 | Ordinal: 5715
        void save_dials(void) const;

    // RVA: 0x1740 | Ordinal: 5953
        void setKnobsByChannel(int);

    // RVA: 0x1742 | Ordinal: 5955
        void setKnobsByFrequency(float);

    // RVA: 0x1866 | Ordinal: 6247
        void set_damage(unsigned int, bool);

    // RVA: 0x1916 | Ordinal: 6423
        void set_preset_channel(unsigned int);

    // RVA: 0x1AE3 | Ordinal: 6884
        void update(void);

    // RVA: 0x1B53 | Ordinal: 6996
        void update_communicator_state(void);

    // RVA: 0x368 | Ordinal: 873
        void _avVHF_FuG16ZY(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVVHF_FUG16ZY_HPP
