#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: F15_EFM.dll
// Class: F15_EFM_EXPORT
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class F15_EFM_EXPORT
{
public:

    // RVA: 0x3 | Ordinal: 4
        void GetPitchRatio(void);

    // RVA: 0x4 | Ordinal: 5
        void GetRollRatio(void);

    // RVA: 0x5 | Ordinal: 6
        void GetTakeoffTrim(void);

    // RVA: 0x6 | Ordinal: 7
        void OverrideControlDeflections(bool);

    // RVA: 0x7 | Ordinal: 8
        void SetAileronPos(double, double);

    // RVA: 0x8 | Ordinal: 9
        void SetAirbrakePos(double);

    // RVA: 0x9 | Ordinal: 10
        void SetCASEnabled(bool, bool, bool);

    // RVA: 0xA | Ordinal: 11
        void SetFlapPos(double, double);

    // RVA: 0xB | Ordinal: 12
        void SetGearPos(double, double, double);

    // RVA: 0xC | Ordinal: 13
        void SetLeftAilPowered(bool);

    // RVA: 0xD | Ordinal: 14
        void SetLeftRudderPowered(bool);

    // RVA: 0xE | Ordinal: 15
        void SetLeftStabPowered(bool);

    // RVA: 0xF | Ordinal: 16
        void SetPitchServo(double);

    // RVA: 0x10 | Ordinal: 17
        void SetRightAilPowered(bool);

    // RVA: 0x11 | Ordinal: 18
        void SetRightRudderPowered(bool);

    // RVA: 0x12 | Ordinal: 19
        void SetRightStabPowered(bool);

    // RVA: 0x13 | Ordinal: 20
        void SetRollServo(double);

    // RVA: 0x14 | Ordinal: 21
        void SetRudderPos(double);

    // RVA: 0x15 | Ordinal: 22
        void SetRudderPos(double, double);

    // RVA: 0x16 | Ordinal: 23
        void SetStabPos(double, double);

    // RVA: 0x17 | Ordinal: 24
        void SetStickPitch(double);

    // RVA: 0x18 | Ordinal: 25
        void SetStickRoll(double);

    // RVA: 0x19 | Ordinal: 26
        void SetYawServo(double);

    // RVA: 0x1A | Ordinal: 27
        void TakeoffTrimPressed(bool);

    // RVA: 0x1F | Ordinal: 32
        void fm_add_local_force(double &, double &, double &, double &, double &, double &);

    // RVA: 0x20 | Ordinal: 33
        void fm_add_local_moment(double &, double &, double &);

    // RVA: 0x21 | Ordinal: 34
        void fm_cold_start(void);

    // RVA: 0x22 | Ordinal: 35
        void fm_configure(char const *);

    // RVA: 0x23 | Ordinal: 36
        void fm_hot_start(void);

    // RVA: 0x24 | Ordinal: 37
        void fm_hot_start_in_air(void);

    // RVA: 0x25 | Ordinal: 38
        void fm_need_to_be_repaired(void);

    // RVA: 0x26 | Ordinal: 39
        void fm_on_damage(int, double);

    // RVA: 0x27 | Ordinal: 40
        void fm_release(void);

    // RVA: 0x28 | Ordinal: 41
        void fm_repair(void);

    // RVA: 0x29 | Ordinal: 42
        void fm_set_atmosphere(double, double, double, double, double, double, double, double);

    // RVA: 0x2A | Ordinal: 43
        void fm_set_command(int, float);

    // RVA: 0x2B | Ordinal: 44
        void fm_set_current_mass_state(double, double, double, double, double, double, double);

    // RVA: 0x2C | Ordinal: 45
        void fm_set_current_state(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double);

    // RVA: 0x2D | Ordinal: 46
        void fm_set_current_state_body_axis(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double);

    // RVA: 0x2E | Ordinal: 47
        void fm_set_draw_args_v2(float *, unsigned __int64);

    // RVA: 0x2F | Ordinal: 48
        void fm_set_surface(double, double, unsigned int, double, double, double);

    // RVA: 0x30 | Ordinal: 49
        void fm_simulate(double);
};

// DCS_OPS_RE_F15_EFM.DLL_F15_EFM_EXPORT_HPP
