#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqTVGuidedWeapon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqTVGuidedWeapon
{
public:

    // RVA: 0x8E1 | Ordinal: 2274
        void Type(void) const;

    // RVA: 0x942 | Ordinal: 2371
        void align_in_progress(void);

    // RVA: 0x986 | Ordinal: 2439
        void break_lock(void);

    // RVA: 0x9B1 | Ordinal: 2482
        void cage(void);

    // RVA: 0xA20 | Ordinal: 2593
        void change_polarity(bool);

    // RVA: 0xA61 | Ordinal: 2658
        void check_ATA(void);

    // RVA: 0xA76 | Ordinal: 2679
        void check_gimbal_limits(void);

    // RVA: 0xA7B | Ordinal: 2684
        void check_polarity(void);

    // RVA: 0xA89 | Ordinal: 2698
        void check_size(struct cockpit::sensor_frame const &, struct cockpit::sensor_frame const &) const;

    // RVA: 0xB60 | Ordinal: 2913
        void default_search_distance(void) const;

    // RVA: 0xB6F | Ordinal: 2928
        void disableForceCorrelate(void);

    // RVA: 0xBC9 | Ordinal: 3018
        void enableForceCorrelate(void);

    // RVA: 0x261 | Ordinal: 610
        void eqTVGuidedWeapon(class cockpit::eqTVGuidedWeapon const &);

    // RVA: 0x262 | Ordinal: 611
        void eqTVGuidedWeapon(class wsType const &);

    // RVA: 0xC10 | Ordinal: 3089
        void forceCorrelateIsReady(void) const;

    // RVA: 0xC1E | Ordinal: 3103
        void free_lock(void);

    // RVA: 0xDA1 | Ordinal: 3490
        void getPolarPosition(void) const;

    // RVA: 0xF1E | Ordinal: 3871
        void get_distance_to_terrain(void) const;

    // RVA: 0xF41 | Ordinal: 3906
        void get_force_correlate(void) const;

    // RVA: 0x1013 | Ordinal: 4116
        void get_point_under_LOS(void) const;

    // RVA: 0x1045 | Ordinal: 4166
        void get_real_distance_to_terrain(void) const;

    // RVA: 0x1069 | Ordinal: 4202
        void get_screen(void) const;

    // RVA: 0x10A0 | Ordinal: 4257
        void get_slew_velocity(void) const;

    // RVA: 0x10AA | Ordinal: 4267
        void get_station(void) const;

    // RVA: 0x10B2 | Ordinal: 4275
        void get_substation(void) const;

    // RVA: 0x10EB | Ordinal: 4332
        void get_velocity_by_axis_value(float, float) const;

    // RVA: 0x110A | Ordinal: 4363
        void gimbal_limits(double) const;

    // RVA: 0x1168 | Ordinal: 4457
        void initLimits(void);

    // RVA: 0x117A | Ordinal: 4475
        void initZoom(void);

    // RVA: 0x128E | Ordinal: 4751
        void isTrainingWeapon(void) const;

    // RVA: 0x129E | Ordinal: 4767
        void is_LockOn(void) const;

    // RVA: 0x12A5 | Ordinal: 4774
        void is_TV_Available(void);

    // RVA: 0x12AA | Ordinal: 4779
        void is_break_lock(void) const;

    // RVA: 0x12B9 | Ordinal: 4794
        void is_in_search(void) const;

    // RVA: 0x12C4 | Ordinal: 4805
        void is_ready_to_fire(void) const;

    // RVA: 0x1386 | Ordinal: 4999
        void launch(class IwHumanPlane *);

    // RVA: 0x13BE | Ordinal: 5055
        void lockon(void);

    // RVA: 0x145D | Ordinal: 5214
        void on_TV_SENSOR_move_horizontal_abs(float, float, double);

    // RVA: 0x1461 | Ordinal: 5218
        void on_TV_SENSOR_move_vertical_abs(float, float, double);

    // RVA: 0x1466 | Ordinal: 5223
        void on_axis_stop(void);

    // RVA: 0x146F | Ordinal: 5232
        void on_hot_air_start(void);

    // RVA: 0x1637 | Ordinal: 5688
        void respat_angles(double, double);

    // RVA: 0x186C | Ordinal: 6253
        void set_default_azimuth(double);

    // RVA: 0x186E | Ordinal: 6255
        void set_default_elevation(double);

    // RVA: 0x1874 | Ordinal: 6261
        void set_digital_terrain_available(bool, double);

    // RVA: 0x18AA | Ordinal: 6315
        void set_gyro_stabilize_point_to_ground(void);

    // RVA: 0x1938 | Ordinal: 6457
        void set_station(int, int);

    // RVA: 0x19A8 | Ordinal: 6569
        void slave_to_point(class osg::Vec3d const &);

    // RVA: 0x19B2 | Ordinal: 6579
        void slew_down(double);

    // RVA: 0x19B6 | Ordinal: 6583
        void slew_left(double);

    // RVA: 0x19BB | Ordinal: 6588
        void slew_right(double);

    // RVA: 0x19BF | Ordinal: 6592
        void slew_stop(void);

    // RVA: 0x19C3 | Ordinal: 6596
        void slew_up(double);

    // RVA: 0x19C7 | Ordinal: 6600
        void stabilizeInSpace(void);

    // RVA: 0x19CA | Ordinal: 6603
        void stabilizeOnGround(bool);

    // RVA: 0x19D5 | Ordinal: 6614
        void startForceCorrelateTrack(void);

    // RVA: 0x1A3E | Ordinal: 6719
        void toLockOnlyParts(void) const;

    // RVA: 0x1A52 | Ordinal: 6739
        void tracking(double);

    // RVA: 0x1A78 | Ordinal: 6777
        void uncage(void);

    // RVA: 0x1B00 | Ordinal: 6913
        void update(double);

    // RVA: 0x1B65 | Ordinal: 7014
        void update_frame(void);

    // RVA: 0x1B8E | Ordinal: 7055
        void useLockOnParts(void) const;

    // RVA: 0x1B97 | Ordinal: 7064
        void use_volume_search(void) const;

    // RVA: 0x1BAE | Ordinal: 7087
        void zoom_in(void);

    // RVA: 0x1BB2 | Ordinal: 7091
        void zoom_out(void);

    // RVA: 0x3AE | Ordinal: 943
        void _eqTVGuidedWeapon(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQTVGUIDEDWEAPON_HPP
