#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBaseIKP
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBaseIKP
{
public:

    // RVA: 0x848 | Ordinal: 2121
        void OnPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x84D | Ordinal: 2126
        void OnPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x873 | Ordinal: 2164
        void SetCommand(int, float);

    // RVA: 0xD1 | Ordinal: 210
        void avBaseIKP(class cockpit::avBaseIKP const &);

    // RVA: 0xD2 | Ordinal: 211
        void avBaseIKP(void);

    // RVA: 0xA36 | Ordinal: 2615
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xC96 | Ordinal: 3223
        void getElecPower(void) const;

    // RVA: 0xCE9 | Ordinal: 3306
        void getGyroPitchBankValid(void) const;

    // RVA: 0xE98 | Ordinal: 3737
        void get_airspeed_deviation(void) const;

    // RVA: 0xEAB | Ordinal: 3756
        void get_attitude_warn_flag_val(void) const;

    // RVA: 0xEB2 | Ordinal: 3763
        void get_bank_input(void) const;

    // RVA: 0xEB3 | Ordinal: 3764
        void get_bank_steering(void) const;

    // RVA: 0xEE7 | Ordinal: 3816
        void get_connection_bus(void);

    // RVA: 0xF73 | Ordinal: 3956
        void get_height_deviation(void) const;

    // RVA: 0xF74 | Ordinal: 3957
        void get_height_deviation_input(void) const;

    // RVA: 0x1003 | Ordinal: 4100
        void get_pitch_input(void) const;

    // RVA: 0x1006 | Ordinal: 4103
        void get_pitch_steering(void) const;

    // RVA: 0x10AE | Ordinal: 4271
        void get_steering_warn_flag_val(void) const;

    // RVA: 0x10D3 | Ordinal: 4308
        void get_track_deviation(void) const;

    // RVA: 0x10D4 | Ordinal: 4309
        void get_track_deviation_input(void) const;

    // RVA: 0x10EC | Ordinal: 4333
        void get_velocity_deviation_input(void) const;

    // RVA: 0x11A4 | Ordinal: 4517
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1305 | Ordinal: 4870
        void l_get_airspeed_deviation(struct lua_State *);

    // RVA: 0x1309 | Ordinal: 4874
        void l_get_attitude_warn_flag_val(struct lua_State *);

    // RVA: 0x130A | Ordinal: 4875
        void l_get_bank_steering(struct lua_State *);

    // RVA: 0x1314 | Ordinal: 4885
        void l_get_height_deviation(struct lua_State *);

    // RVA: 0x131C | Ordinal: 4893
        void l_get_pitch_steering(struct lua_State *);

    // RVA: 0x1328 | Ordinal: 4905
        void l_get_steering_warn_flag_val(struct lua_State *);

    // RVA: 0x132B | Ordinal: 4908
        void l_get_track_deviation(struct lua_State *);

    // RVA: 0x135A | Ordinal: 4955
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x14D4 | Ordinal: 5333
        void post_initialize(void);

    // RVA: 0x16EA | Ordinal: 5867
        void setElecPower(bool);

    // RVA: 0x1AA1 | Ordinal: 6818
        void update(void);

    // RVA: 0x2E4 | Ordinal: 741
        void _avBaseIKP(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASEIKP_HPP
