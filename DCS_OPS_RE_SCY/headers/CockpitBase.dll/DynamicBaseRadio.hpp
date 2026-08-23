#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: DynamicBaseRadio
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class DynamicBaseRadio
{
public:

    // RVA: 0x39 | Ordinal: 58
        void DynamicBaseRadio(class cockpit::DynamicBaseRadio const &);

    // RVA: 0x3A | Ordinal: 59
        void DynamicBaseRadio(bool, bool);

    // RVA: 0x91B | Ordinal: 2332
        void add_guard_receiver(double, enum wModulation);

    // RVA: 0x91C | Ordinal: 2333
        void add_guard_receiver(double, enum wModulation, class Lua::Config &);

    // RVA: 0xA53 | Ordinal: 2644
        void checkPresetChannelsSize(unsigned __int64);

    // RVA: 0xAC6 | Ordinal: 2759
        void clearFrequencyRanges(void);

    // RVA: 0xC92 | Ordinal: 3219
        void getElecPower(void) const;

    // RVA: 0xDF2 | Ordinal: 3571
        void getSoundElement(void);

    // RVA: 0xE55 | Ordinal: 3670
        void get_AGC_params(double &, double &, double &);

    // RVA: 0xE56 | Ordinal: 3671
        void get_AMD_params(float &, float &);

    // RVA: 0xEAD | Ordinal: 3758
        void get_bandwidth(void) const;

    // RVA: 0xF4A | Ordinal: 3915
        void get_freq_accuracy(void) const;

    // RVA: 0xF4B | Ordinal: 3916
        void get_freq_ranges_min_max(unsigned __int64, int &, int &) const;

    // RVA: 0xF4C | Ordinal: 3917
        void get_freq_ranges_num(void) const;

    // RVA: 0xF4D | Ordinal: 3918
        void get_freq_step(void) const;

    // RVA: 0xF5A | Ordinal: 3931
        void get_guard_receiver_frequency(void) const;

    // RVA: 0xF5B | Ordinal: 3932
        void get_guard_receiver_modulation(void) const;

    // RVA: 0xF5C | Ordinal: 3933
        void get_guard_receiver_on_off_status(void) const;

    // RVA: 0xFD5 | Ordinal: 4054
        void get_modulation(void) const;

    // RVA: 0x1029 | Ordinal: 4138
        void get_preset_channels_number(void) const;

    // RVA: 0x1047 | Ordinal: 4168
        void get_receiver_inner_noise(void) const;

    // RVA: 0x1085 | Ordinal: 4230
        void get_set_frequency(void) const;

    // RVA: 0x10A8 | Ordinal: 4265
        void get_squelch_present(void) const;

    // RVA: 0x10F0 | Ordinal: 4337
        void get_volume(void) const;

    // RVA: 0x1161 | Ordinal: 4450
        void initInnerNoise(void);

    // RVA: 0x1188 | Ordinal: 4489
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x12B8 | Ordinal: 4793
        void is_guard_receiver_present(void);

    // RVA: 0x12E1 | Ordinal: 4834
        void l_dr_get_channel_frequency(struct lua_State *);

    // RVA: 0x12E2 | Ordinal: 4835
        void l_dr_get_channels_count(struct lua_State *);

    // RVA: 0x12E3 | Ordinal: 4836
        void l_dr_get_commanded_frequency(struct lua_State *);

    // RVA: 0x12E4 | Ordinal: 4837
        void l_dr_get_frequency(struct lua_State *);

    // RVA: 0x12E5 | Ordinal: 4838
        void l_dr_get_modulation(struct lua_State *);

    // RVA: 0x12E6 | Ordinal: 4839
        void l_dr_get_tuned_frequency(struct lua_State *);

    // RVA: 0x12E7 | Ordinal: 4840
        void l_dr_get_volume(struct lua_State *);

    // RVA: 0x12E8 | Ordinal: 4841
        void l_dr_init_channel_frequency(struct lua_State *);

    // RVA: 0x12E9 | Ordinal: 4842
        void l_dr_is_frequency_in_range(struct lua_State *);

    // RVA: 0x12EA | Ordinal: 4843
        void l_dr_is_on(struct lua_State *);

    // RVA: 0x12EB | Ordinal: 4844
        void l_dr_push_frequency_range(struct lua_State *);

    // RVA: 0x12EC | Ordinal: 4845
        void l_dr_set_channel(struct lua_State *);

    // RVA: 0x12ED | Ordinal: 4846
        void l_dr_set_channels_count(struct lua_State *);

    // RVA: 0x12EE | Ordinal: 4847
        void l_dr_set_frequency(struct lua_State *);

    // RVA: 0x12EF | Ordinal: 4848
        void l_dr_set_guard_frequency(struct lua_State *);

    // RVA: 0x12F0 | Ordinal: 4849
        void l_dr_set_guard_modulation(struct lua_State *);

    // RVA: 0x12F1 | Ordinal: 4850
        void l_dr_set_guard_on_off(struct lua_State *);

    // RVA: 0x12F2 | Ordinal: 4851
        void l_dr_set_modulation(struct lua_State *);

    // RVA: 0x12F3 | Ordinal: 4852
        void l_dr_set_on_off(struct lua_State *);

    // RVA: 0x12F4 | Ordinal: 4853
        void l_dr_set_squelch_on_off(struct lua_State *);

    // RVA: 0x12F5 | Ordinal: 4854
        void l_dr_set_transmitter_power(struct lua_State *);

    // RVA: 0x12F6 | Ordinal: 4855
        void l_dr_set_volume(struct lua_State *);

    // RVA: 0x1356 | Ordinal: 4951
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x13A7 | Ordinal: 5032
        void load_dials(class Lua::Config &);

    // RVA: 0x14C2 | Ordinal: 5315
        void post_initialize(void);

    // RVA: 0x1536 | Ordinal: 5431
        void pushParametersToConfig(class Lua::Config &) const;

    // RVA: 0x154E | Ordinal: 5455
        void push_freq_range(int, int, int);

    // RVA: 0x159B | Ordinal: 5532
        void release(void);

    // RVA: 0x164C | Ordinal: 5709
        void save_dials(void) const;

    // RVA: 0x1674 | Ordinal: 5749
        void select_channel(unsigned int);

    // RVA: 0x16E6 | Ordinal: 5863
        void setElecPower(bool);

    // RVA: 0x177B | Ordinal: 6012
        void setOwnerUnit(class cPointerTemplate<class MovingObject> const &);

    // RVA: 0x1806 | Ordinal: 6151
        void set_AGC_params(double, double, double);

    // RVA: 0x1807 | Ordinal: 6152
        void set_AMD_params(float, float);

    // RVA: 0x182A | Ordinal: 6187
        void set_bandwidth(double);

    // RVA: 0x183C | Ordinal: 6205
        void set_ch_frequency(double, unsigned int);

    // RVA: 0x1893 | Ordinal: 6292
        void set_freq_accuracy(double);

    // RVA: 0x1894 | Ordinal: 6293
        void set_frequency(double);

    // RVA: 0x18A2 | Ordinal: 6307
        void set_guard_receiver_frequency(double);

    // RVA: 0x18A3 | Ordinal: 6308
        void set_guard_receiver_modulation(enum wModulation);

    // RVA: 0x18A4 | Ordinal: 6309
        void set_guard_receiver_on_off_status(bool);

    // RVA: 0x18E9 | Ordinal: 6378
        void set_modulation(char);

    // RVA: 0x1917 | Ordinal: 6424
        void set_preset_channels_number(unsigned char, bool);

    // RVA: 0x191A | Ordinal: 6427
        void set_radio_gui_type(enum cockpit::DynamicBaseRadio::RadioGUI_Type_P);

    // RVA: 0x191D | Ordinal: 6430
        void set_receiver_inner_noise(double);

    // RVA: 0x1931 | Ordinal: 6450
        void set_squelch_on_off(bool);

    // RVA: 0x1932 | Ordinal: 6451
        void set_squelch_present(bool);

    // RVA: 0x1953 | Ordinal: 6484
        void set_transmitter_power(double);

    // RVA: 0x196B | Ordinal: 6508
        void set_volume(float);

    // RVA: 0x1A85 | Ordinal: 6790
        void update(void);

    // RVA: 0x2A1 | Ordinal: 674
        void _DynamicBaseRadio(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_DYNAMICBASERADIO_HPP
