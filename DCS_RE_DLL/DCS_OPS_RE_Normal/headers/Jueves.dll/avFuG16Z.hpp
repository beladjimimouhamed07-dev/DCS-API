#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avFuG16Z
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avFuG16Z
{
public:

    // RVA: 0x2BE | Ordinal: 703
        void SetCommand(int, float);

    // RVA: 0xB3 | Ordinal: 180
        void avFuG16Z(void);

    // RVA: 0x2E2 | Ordinal: 739
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x2E8 | Ordinal: 745
        void checkRadioDevices(void);

    // RVA: 0x314 | Ordinal: 789
        void connect_electric(class EagleFM::Elec::Wire &);

    // RVA: 0x356 | Ordinal: 855
        void ext_set_channel(int);

    // RVA: 0x3E6 | Ordinal: 999
        void get_set_frequency(void) const;

    // RVA: 0x423 | Ordinal: 1060
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x44B | Ordinal: 1100
        void load_dials(class Lua::Config &);

    // RVA: 0x44F | Ordinal: 1104
        void load_presets(void);

    // RVA: 0x451 | Ordinal: 1106
        void mic_button_pressed(bool);

    // RVA: 0x48D | Ordinal: 1166
        void onFunctionalModeChanging(int);

    // RVA: 0x4A3 | Ordinal: 1188
        void perform_init_state(void);

    // RVA: 0x4DF | Ordinal: 1248
        void receiver_failure(void) const;

    // RVA: 0x4EE | Ordinal: 1263
        void release(void);

    // RVA: 0x51C | Ordinal: 1309
        void repair(void);

    // RVA: 0x526 | Ordinal: 1319
        void save_dials(void) const;

    // RVA: 0x55D | Ordinal: 1374
        void setKnobsByChannel(int);

    // RVA: 0x55E | Ordinal: 1375
        void setKnobsByFrequency(float);

    // RVA: 0x5A7 | Ordinal: 1448
        void set_channel_frequency(int);

    // RVA: 0x5AB | Ordinal: 1452
        void set_damage(unsigned int, bool);

    // RVA: 0x5BE | Ordinal: 1471
        void set_intercom_delegate(class cockpit::avFuG16Z::IIntercomDelegate *);

    // RVA: 0x62C | Ordinal: 1581
        void update(void);

    // RVA: 0x63F | Ordinal: 1600
        void update_communicator_state(void);

    // RVA: 0x134 | Ordinal: 309
        void _avFuG16Z(void);
};

} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVFUG16Z_HPP
