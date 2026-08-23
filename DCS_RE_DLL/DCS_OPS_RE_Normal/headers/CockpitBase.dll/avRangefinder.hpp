#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRangefinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRangefinder
{
public:

    // RVA: 0x854 | Ordinal: 2133
        void Regenerate(void);

    // RVA: 0x18E | Ordinal: 399
        void avRangefinder(class cockpit::avRangefinder const &);

    // RVA: 0x18F | Ordinal: 400
        void avRangefinder(void);

    // RVA: 0xA7F | Ordinal: 2688
        void check_relaxation_count(void);

    // RVA: 0xAC2 | Ordinal: 2755
        void clearAutolase(void);

    // RVA: 0xAC3 | Ordinal: 2756
        void clearAutolaseStart(void);

    // RVA: 0xAC4 | Ordinal: 2757
        void clearAutolaseStop(void);

    // RVA: 0xB14 | Ordinal: 2837
        void control_launched_list(class ed::list<struct cockpit::LaserGuidedWeaponState, class ed::allocator<struct cockpit::LaserGuidedWeaponState>> &, bool);

    // RVA: 0xB15 | Ordinal: 2838
        void control_launched_missiles(void);

    // RVA: 0xB74 | Ordinal: 2933
        void dispatch_mail(class MovingObject *);

    // RVA: 0xD2E | Ordinal: 3375
        void getLastModeChangeTime(void) const;

    // RVA: 0xE6B | Ordinal: 3692
        void get_IR_pointer_on(void) const;

    // RVA: 0xE8F | Ordinal: 3728
        void get_aim_point(void) const;

    // RVA: 0xEDD | Ordinal: 3806
        void get_code(void) const;

    // RVA: 0xF1C | Ordinal: 3869
        void get_distance(class Graphics::Camera const &, float &);

    // RVA: 0xF90 | Ordinal: 3985
        void get_last_measured_distance(void) const;

    // RVA: 0xF91 | Ordinal: 3986
        void get_last_measured_point(void) const;

    // RVA: 0xFC0 | Ordinal: 4033
        void get_measured_distance(double) const;

    // RVA: 0xFC1 | Ordinal: 4034
        void get_measured_distance(void) const;

    // RVA: 0xFC2 | Ordinal: 4035
        void get_measured_point(double) const;

    // RVA: 0xFC3 | Ordinal: 4036
        void get_measured_point(void) const;

    // RVA: 0xFD2 | Ordinal: 4051
        void get_mode(void) const;

    // RVA: 0xFE0 | Ordinal: 4065
        void get_next_available_turn_on_time(void) const;

    // RVA: 0x10A5 | Ordinal: 4262
        void get_spot_ID(void) const;

    // RVA: 0x10C8 | Ordinal: 4297
        void get_temperature(void) const;

    // RVA: 0x10C9 | Ordinal: 4298
        void get_temperature_normal(void) const;

    // RVA: 0x10D1 | Ordinal: 4306
        void get_time_from_last_switch(void) const;

    // RVA: 0x10DD | Ordinal: 4318
        void get_turn_off_time(void) const;

    // RVA: 0x11E1 | Ordinal: 4578
        void initialize(float);

    // RVA: 0x1260 | Ordinal: 4705
        void isInRelaxation(void);

    // RVA: 0x12CE | Ordinal: 4815
        void is_valid_measurement(void) const;

    // RVA: 0x1405 | Ordinal: 5126
        void measure_and_dispatch_mail(void);

    // RVA: 0x1474 | Ordinal: 5237
        void on_newmode(int);

    // RVA: 0x14A2 | Ordinal: 5283
        void pause(void);

    // RVA: 0x154D | Ordinal: 5454
        void push_designated(unsigned int, bool);

    // RVA: 0x1550 | Ordinal: 5457
        void push_pattern_guided(unsigned int);

    // RVA: 0x15FB | Ordinal: 5628
        void repair(void);

    // RVA: 0x1619 | Ordinal: 5658
        void reset(void);

    // RVA: 0x16F4 | Ordinal: 5877
        void setElecPower(bool);

    // RVA: 0x180A | Ordinal: 6155
        void set_IR_pointer_on(bool);

    // RVA: 0x1812 | Ordinal: 6163
        void set_absolute_max_distance(float);

    // RVA: 0x1816 | Ordinal: 6167
        void set_aim_point(class osg::Vec3d const &);

    // RVA: 0x183F | Ordinal: 6208
        void set_code(unsigned int);

    // RVA: 0x18E4 | Ordinal: 6373
        void set_mode(int);

    // RVA: 0x18E8 | Ordinal: 6377
        void set_mode_delayed(int, double);

    // RVA: 0x18F1 | Ordinal: 6386
        void set_next_available_turn_on_time(double);

    // RVA: 0x1923 | Ordinal: 6436
        void set_reserved_mode(bool);

    // RVA: 0x1958 | Ordinal: 6489
        void set_turn_off(double);

    // RVA: 0x1A1D | Ordinal: 6686
        void switchOff(void);

    // RVA: 0x1A7C | Ordinal: 6781
        void unpause(void);

    // RVA: 0x1ACD | Ordinal: 6862
        void update(double);

    // RVA: 0x1B57 | Ordinal: 7000
        void update_cooling(double);

    // RVA: 0x1B72 | Ordinal: 7027
        void update_life(double);

    // RVA: 0x1B85 | Ordinal: 7046
        void update_spot(bool);

    // RVA: 0x1B94 | Ordinal: 7061
        void use_history(bool);

    // RVA: 0x33E | Ordinal: 831
        void _avRangefinder(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVRANGEFINDER_HPP
