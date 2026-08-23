#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Sound
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Sound
{
public:

    // RVA: 0x594 | Ordinal: 1429
        void Headset(void);

    // RVA: 0x61E | Ordinal: 1567
        void add_sounddir(char const *);

    // RVA: 0x633 | Ordinal: 1588
        void bind_api(struct lua_State *);

    // RVA: 0x753 | Ordinal: 1876
        void createMainSounderName(class MovingObject *);

    // RVA: 0x78A | Ordinal: 1931
        void enter_interface(void);

    // RVA: 0x78B | Ordinal: 1932
        void enter_simulation(void);

    // RVA: 0x798 | Ordinal: 1945
        void exit(void);

    // RVA: 0x949 | Ordinal: 2378
        void get_mute(void);

    // RVA: 0x97B | Ordinal: 2428
        void init(void);

    // RVA: 0x980 | Ordinal: 2433
        void initMovObjSounder(void);

    // RVA: 0x988 | Ordinal: 2441
        void init_userdirs(void);

    // RVA: 0xAB0 | Ordinal: 2737
        void opt_fake_afterburner(void);

    // RVA: 0xAB1 | Ordinal: 2738
        void opt_hear_in_helmet(void);

    // RVA: 0xAB2 | Ordinal: 2739
        void override_default_devices_with_guid(class ed::basic_string<char> const &);

    // RVA: 0xB23 | Ordinal: 2852
        void prestart_simulation(void);

    // RVA: 0xB26 | Ordinal: 2855
        void process(void);

    // RVA: 0xB81 | Ordinal: 2946
        void reset_simulation(void);

    // RVA: 0xBEC | Ordinal: 3053
        void set_mute(bool);

    // RVA: 0xBEF | Ordinal: 3056
        void set_orientation(double *const, class wPosition3<float> const &);

    // RVA: 0xBF0 | Ordinal: 3057
        void set_orientation(double *const, class wPosition3<double> const &);

    // RVA: 0xBF7 | Ordinal: 3064
        void set_sonic_boom(int, enum Sound::SonicBoomType, float);

    // RVA: 0xC0F | Ordinal: 3088
        void start(void);

    // RVA: 0xC4D | Ordinal: 3150
        void updateSounder(class ed::SounderRef &, class MovingObject *);

    // RVA: 0xC53 | Ordinal: 3156
        void update_listeners(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_SOUND_HPP
