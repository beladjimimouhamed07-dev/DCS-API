#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avRadioTransceiver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avRadioTransceiver
{
public:

    // RVA: 0x2C2 | Ordinal: 707
        void SetCommand(int, float);

    // RVA: 0xCC | Ordinal: 205
        void avRadioTransceiver(class cockpit::dcswwii::avRadioTransceiver const &);

    // RVA: 0xCD | Ordinal: 206
        void avRadioTransceiver(enum cockpit::avBaseRadio::RadioGUI_Type, struct cockpit::avBaseRadio::FrequencyRanges const &, unsigned char, double, double);

    // RVA: 0x2E5 | Ordinal: 742
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x2EA | Ordinal: 747
        void checkRadioDevices(void);

    // RVA: 0x30C | Ordinal: 781
        void connectTo(class EagleFM::Elec::ItemBase &);

    // RVA: 0x3E8 | Ordinal: 1001
        void get_set_frequency(void) const;

    // RVA: 0x42E | Ordinal: 1071
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x44D | Ordinal: 1102
        void load_dials(class Lua::Config &);

    // RVA: 0x450 | Ordinal: 1105
        void load_presets(void);

    // RVA: 0x452 | Ordinal: 1107
        void mic_button_pressed(bool);

    // RVA: 0x48E | Ordinal: 1167
        void onFunctionalModeChanging(int);

    // RVA: 0x4A2 | Ordinal: 1187
        void on_frequency_changed(void);

    // RVA: 0x4A5 | Ordinal: 1190
        void perform_init_state(void);

    // RVA: 0x4E0 | Ordinal: 1249
        void receiver_failure(void) const;

    // RVA: 0x520 | Ordinal: 1313
        void repair(void);

    // RVA: 0x528 | Ordinal: 1321
        void save_dials(void) const;

    // RVA: 0x5AC | Ordinal: 1453
        void set_damage(unsigned int, bool);

    // RVA: 0x5BF | Ordinal: 1472
        void set_intercom_delegate(class cockpit::dcswwii::avRadioTransceiver::IIntercomDelegate *);

    // RVA: 0x5C5 | Ordinal: 1478
        void set_preset_channel(unsigned int);

    // RVA: 0x5C7 | Ordinal: 1480
        void set_tuned_frequency(int);

    // RVA: 0x640 | Ordinal: 1601
        void update_communicator_state(void);

    // RVA: 0x140 | Ordinal: 321
        void _avRadioTransceiver(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVRADIOTRANSCEIVER_HPP
