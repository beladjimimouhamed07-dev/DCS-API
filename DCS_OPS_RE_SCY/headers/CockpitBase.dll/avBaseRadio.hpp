#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBaseRadio
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBaseRadio
{
public:

    // RVA: 0x82F | Ordinal: 2096
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x845 | Ordinal: 2118
        void OnPowerChanged(struct lwl::CSignalInfo const *);

    // RVA: 0xD3 | Ordinal: 212
        void avBaseRadio(enum cockpit::avBaseRadio::RadioGUI_Type, struct cockpit::avBaseRadio::FrequencyRanges const &, unsigned char);

    // RVA: 0xD4 | Ordinal: 213
        void avBaseRadio(class cockpit::avBaseRadio const &);

    // RVA: 0xA54 | Ordinal: 2645
        void checkRadioDevices(void);

    // RVA: 0xBD3 | Ordinal: 3028
        void ext_is_on(void) const;

    // RVA: 0xBD6 | Ordinal: 3031
        void ext_set_channel(int);

    // RVA: 0xBDB | Ordinal: 3036
        void ext_set_frequency(int);

    // RVA: 0xBE0 | Ordinal: 3041
        void ext_set_modulation(char);

    // RVA: 0xBE4 | Ordinal: 3045
        void extractReceiver(struct lua_State *);

    // RVA: 0xC12 | Ordinal: 3091
        void forceSetArgument(int, float);

    // RVA: 0xC6A | Ordinal: 3179
        void getCommunicator(void);

    // RVA: 0xC6B | Ordinal: 3180
        void getCommunicator(void) const;

    // RVA: 0xC97 | Ordinal: 3224
        void getElecPower(void) const;

    // RVA: 0xDF4 | Ordinal: 3573
        void getSoundElement(void);

    // RVA: 0xFD6 | Ordinal: 4055
        void get_modulation(void) const;

    // RVA: 0x1028 | Ordinal: 4137
        void get_preset_channel(void) const;

    // RVA: 0x102A | Ordinal: 4139
        void get_preset_frequency(int) const;

    // RVA: 0x102B | Ordinal: 4140
        void get_preset_frequency(void) const;

    // RVA: 0x10A7 | Ordinal: 4264
        void get_squelch(void) const;

    // RVA: 0x10DB | Ordinal: 4316
        void get_tuned_frequency(void) const;

    // RVA: 0x10F1 | Ordinal: 4338
        void get_volume(void) const;

    // RVA: 0x117D | Ordinal: 4478
        void init_dialog_panel(void);

    // RVA: 0x11A5 | Ordinal: 4518
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x130C | Ordinal: 4877
        void l_get_channel(struct lua_State *);

    // RVA: 0x1312 | Ordinal: 4883
        void l_get_frequency(struct lua_State *);

    // RVA: 0x1318 | Ordinal: 4889
        void l_get_modulation(struct lua_State *);

    // RVA: 0x1331 | Ordinal: 4914
        void l_is_frequency_in_range(struct lua_State *);

    // RVA: 0x1332 | Ordinal: 4915
        void l_is_on(struct lua_State *);

    // RVA: 0x133C | Ordinal: 4925
        void l_metatable_name(void) const;

    // RVA: 0x135B | Ordinal: 4956
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1372 | Ordinal: 4979
        void l_set_channel(struct lua_State *);

    // RVA: 0x1376 | Ordinal: 4983
        void l_set_frequency(struct lua_State *);

    // RVA: 0x1378 | Ordinal: 4985
        void l_set_modulation(struct lua_State *);

    // RVA: 0x13B3 | Ordinal: 5044
        void load_preset_channels(class Lua::Config &);

    // RVA: 0x13B7 | Ordinal: 5048
        void load_settings(void);

    // RVA: 0x146B | Ordinal: 5228
        void on_frequency_changed(void);

    // RVA: 0x14A4 | Ordinal: 5285
        void perform_init_state(void);

    // RVA: 0x14D5 | Ordinal: 5334
        void post_initialize(void);

    // RVA: 0x1558 | Ordinal: 5465
        void radio_path(void) const;

    // RVA: 0x15A9 | Ordinal: 5546
        void release(void);

    // RVA: 0x15F3 | Ordinal: 5620
        void repair(void);

    // RVA: 0x1655 | Ordinal: 5718
        void save_preset_channels(int) const;

    // RVA: 0x1656 | Ordinal: 5719
        void save_settings(void) const;

    // RVA: 0x16EB | Ordinal: 5868
        void setElecPower(bool);

    // RVA: 0x183D | Ordinal: 6206
        void set_channel_frequency(int, unsigned int);

    // RVA: 0x1856 | Ordinal: 6231
        void set_damage(unsigned int, bool);

    // RVA: 0x18EA | Ordinal: 6379
        void set_modulation(char);

    // RVA: 0x1911 | Ordinal: 6418
        void set_preset_channel(unsigned int);

    // RVA: 0x191E | Ordinal: 6431
        void set_receiver_noise(float);

    // RVA: 0x192F | Ordinal: 6448
        void set_squelch(bool);

    // RVA: 0x1954 | Ordinal: 6485
        void set_transmitter_power(float);

    // RVA: 0x1957 | Ordinal: 6488
        void set_tuned_frequency(int);

    // RVA: 0x196D | Ordinal: 6510
        void set_volume(float);

    // RVA: 0x19ED | Ordinal: 6638
        void start_tuning(void);

    // RVA: 0x1A0B | Ordinal: 6668
        void stop_tuning(void);

    // RVA: 0x1A61 | Ordinal: 6754
        void tuning_active(void) const;

    // RVA: 0x1A62 | Ordinal: 6755
        void tuning_finished(void);

    // RVA: 0x1AA2 | Ordinal: 6819
        void update(void);

    // RVA: 0x1B68 | Ordinal: 7017
        void update_frequency(void);

    // RVA: 0x2E5 | Ordinal: 742
        void _avBaseRadio(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASERADIO_HPP
