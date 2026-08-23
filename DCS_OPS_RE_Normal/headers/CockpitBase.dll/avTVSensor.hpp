#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avTVSensor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avTVSensor
{
public:

    // RVA: 0x7DD | Ordinal: 2014
        void IsCaged(void) const;

    // RVA: 0x95D | Ordinal: 2398
        void arrested(void) const;

    // RVA: 0x1C2 | Ordinal: 451
        void avTVSensor(class cockpit::avTVSensor const &);

    // RVA: 0x1C3 | Ordinal: 452
        void avTVSensor(void);

    // RVA: 0x9AC | Ordinal: 2477
        void cage(void);

    // RVA: 0x9B2 | Ordinal: 2483
        void caged(void) const;

    // RVA: 0x9EB | Ordinal: 2540
        void calculate_target_angles(class osg::Vec3d const &) const;

    // RVA: 0xA51 | Ordinal: 2642
        void checkObjectVisibilityByTV(class osg::Vec3d const &, float) const;

    // RVA: 0xA87 | Ordinal: 2696
        void check_size(struct cockpit::sensor_frame const &, struct cockpit::sensor_frame const &) const;

    // RVA: 0xABF | Ordinal: 2752
        void clear(void);

    // RVA: 0xAC9 | Ordinal: 2762
        void clear_AC_mode_factors(void);

    // RVA: 0xB50 | Ordinal: 2897
        void cursor_active(void) const;

    // RVA: 0xB51 | Ordinal: 2898
        void cursor_slave_point(class wPosition3<double>) const;

    // RVA: 0xB54 | Ordinal: 2901
        void dbg_render_submit(void);

    // RVA: 0xB5E | Ordinal: 2911
        void default_search_distance(void) const;

    // RVA: 0xB79 | Ordinal: 2938
        void distance_by_triangulation(double, double) const;

    // RVA: 0xB7A | Ordinal: 2939
        void distance_by_triangulation(void) const;

    // RVA: 0xBEC | Ordinal: 3053
        void fill_camera(class Graphics::Camera &) const;

    // RVA: 0xC75 | Ordinal: 3190
        void getCurrentViewAngle(void) const;

    // RVA: 0xC76 | Ordinal: 3191
        void getCurrentZoom(void) const;

    // RVA: 0xC77 | Ordinal: 3192
        void getCurrentZoomLevel(void) const;

    // RVA: 0xC86 | Ordinal: 3207
        void getDefaultCameraAngle(void) const;

    // RVA: 0xD59 | Ordinal: 3418
        void getMode(void) const;

    // RVA: 0xDA0 | Ordinal: 3489
        void getPolarPosition(void) const;

    // RVA: 0xDA9 | Ordinal: 3498
        void getPreviousMode(void) const;

    // RVA: 0xE19 | Ordinal: 3610
        void getTarget(void) const;

    // RVA: 0xE7A | Ordinal: 3707
        void get_SPI(void) const;

    // RVA: 0xECF | Ordinal: 3792
        void get_camera_position(void) const;

    // RVA: 0xEFE | Ordinal: 3839
        void get_cursor_base_position(class wPosition3<double> const &, class osg::Vec3d const *) const;

    // RVA: 0xF0F | Ordinal: 3856
        void get_delta_height(void) const;

    // RVA: 0xF1D | Ordinal: 3870
        void get_distance_to_terrain(void) const;

    // RVA: 0xF42 | Ordinal: 3907
        void get_forestall(double) const;

    // RVA: 0xF43 | Ordinal: 3908
        void get_frame(void) const;

    // RVA: 0xF46 | Ordinal: 3911
        void get_frame_box(void);

    // RVA: 0xF47 | Ordinal: 3912
        void get_frame_of_OBB(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class wPosition3<float> const &, class wPosition3<float> const &) const;

    // RVA: 0xF48 | Ordinal: 3913
        void get_frame_of_box(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class wPosition3<float> const &) const;

    // RVA: 0xF49 | Ordinal: 3914
        void get_frame_of_object(class ISceneObject const &) const;

    // RVA: 0xFA8 | Ordinal: 4009
        void get_local_angular_box(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class wPosition3<float> const &);

    // RVA: 0x1025 | Ordinal: 4134
        void get_predicted_target_position(double) const;

    // RVA: 0x1026 | Ordinal: 4135
        void get_predicted_target_position_in_carrier_axis(double) const;

    // RVA: 0x104A | Ordinal: 4171
        void get_reference_point(void) const;

    // RVA: 0x1056 | Ordinal: 4183
        void get_roll_stabilize_angle(void) const;

    // RVA: 0x106F | Ordinal: 4208
        void get_search_angle(void) const;

    // RVA: 0x109C | Ordinal: 4253
        void get_slew_acceleration(double) const;

    // RVA: 0x109E | Ordinal: 4255
        void get_slew_velocity(void) const;

    // RVA: 0x10BF | Ordinal: 4288
        void get_target_position(void) const;

    // RVA: 0x10C0 | Ordinal: 4289
        void get_target_position_in_carrier_axis(void) const;

    // RVA: 0x10D7 | Ordinal: 4312
        void get_tracked_point(void) const;

    // RVA: 0x10E9 | Ordinal: 4330
        void get_velocity_by_axis_value(float, float) const;

    // RVA: 0x1147 | Ordinal: 4424
        void in_sensor_axis(class Math::Polar const &) const;

    // RVA: 0x1149 | Ordinal: 4426
        void in_slew(void) const;

    // RVA: 0x1150 | Ordinal: 4433
        void inertial_system_computed_position(void) const;

    // RVA: 0x1166 | Ordinal: 4455
        void initLimits(void);

    // RVA: 0x1178 | Ordinal: 4473
        void initZoom(void);

    // RVA: 0x11F9 | Ordinal: 4602
        void initialize(void);

    // RVA: 0x123E | Ordinal: 4671
        void interpolate_angles(class wPosition3<double> const &, double) const;

    // RVA: 0x124F | Ordinal: 4688
        void isBoxDetectable(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Matrixd const &, class osg::Vec3d const *) const;

    // RVA: 0x125E | Ordinal: 4703
        void isHiddenByBuilding(class cockpit::avTrackData const &) const;

    // RVA: 0x1283 | Ordinal: 4740
        void isSearchItemVisible(class ISceneObject const &, bool, struct cockpit::search_item &) const;

    // RVA: 0x129C | Ordinal: 4765
        void is_LockOn(void) const;

    // RVA: 0x12A3 | Ordinal: 4772
        void is_TV_Available(void);

    // RVA: 0x12B2 | Ordinal: 4787
        void is_distance_available(void) const;

    // RVA: 0x12BA | Ordinal: 4795
        void is_inverted(void) const;

    // RVA: 0x12C3 | Ordinal: 4804
        void is_ready_to_fire(void) const;

    // RVA: 0x12C8 | Ordinal: 4809
        void is_slaved(void) const;

    // RVA: 0x13BA | Ordinal: 5051
        void lock_hat(bool);

    // RVA: 0x13BC | Ordinal: 5053
        void locked(void) const;

    // RVA: 0x145A | Ordinal: 5211
        void on_TV_SENSOR_move_horizontal_abs(float, float, double);

    // RVA: 0x145E | Ordinal: 5215
        void on_TV_SENSOR_move_vertical_abs(float, float, double);

    // RVA: 0x1462 | Ordinal: 5219
        void on_absolute_axis(class cockpit::avMotor &, float, float, double);

    // RVA: 0x1463 | Ordinal: 5220
        void on_axis_stop(void);

    // RVA: 0x1469 | Ordinal: 5226
        void on_finish_search(struct cockpit::search_item &);

    // RVA: 0x1479 | Ordinal: 5242
        void on_power_off(void);

    // RVA: 0x147C | Ordinal: 5245
        void on_power_on(void);

    // RVA: 0x147D | Ordinal: 5246
        void on_relative_axis(class cockpit::avMotor &, float, float);

    // RVA: 0x147E | Ordinal: 5247
        void on_target_disappear(bool);

    // RVA: 0x1482 | Ordinal: 5251
        void on_update_position(double);

    // RVA: 0x149D | Ordinal: 5278
        void parse(class Graphics::ModelParser &, class wPosition3<float> const &);

    // RVA: 0x1529 | Ordinal: 5418
        void prolongate(double);

    // RVA: 0x157F | Ordinal: 5504
        void recalculate_gyro_mode(void);

    // RVA: 0x161B | Ordinal: 5660
        void reset(void);

    // RVA: 0x1636 | Ordinal: 5687
        void respat_angles(double, double);

    // RVA: 0x1642 | Ordinal: 5699
        void roll_stabilize(class wPosition3<double> &) const;

    // RVA: 0x1659 | Ordinal: 5722
        void scan(double);

    // RVA: 0x165E | Ordinal: 5727
        void scan_stop(void);

    // RVA: 0x166D | Ordinal: 5742
        void search(void);

    // RVA: 0x166F | Ordinal: 5744
        void search_handler(class ISceneObject const &);

    // RVA: 0x16F7 | Ordinal: 5880
        void setElecPower(bool);

    // RVA: 0x1878 | Ordinal: 6265
        void set_distance_available(bool);

    // RVA: 0x1884 | Ordinal: 6277
        void set_external_designation(bool, bool);

    // RVA: 0x18A8 | Ordinal: 6313
        void set_gyro_moving(void);

    // RVA: 0x18E5 | Ordinal: 6374
        void set_mode(unsigned char);

    // RVA: 0x1910 | Ordinal: 6417
        void set_preffered_IR_effect(int);

    // RVA: 0x199C | Ordinal: 6557
        void slave(class osg::Vec3d const &, double);

    // RVA: 0x19A4 | Ordinal: 6565
        void slave_error(class wPosition3<double> const &, class osg::Vec3d const &) const;

    // RVA: 0x19A5 | Ordinal: 6566
        void slave_to_point(class osg::Vec3d const &);

    // RVA: 0x19AE | Ordinal: 6575
        void slew_clear_and_rebase(void);

    // RVA: 0x19AF | Ordinal: 6576
        void slew_down(double);

    // RVA: 0x19B3 | Ordinal: 6580
        void slew_left(double);

    // RVA: 0x19B7 | Ordinal: 6584
        void slew_rebase(void);

    // RVA: 0x19B8 | Ordinal: 6585
        void slew_right(double);

    // RVA: 0x19BC | Ordinal: 6589
        void slew_stop(void);

    // RVA: 0x19C0 | Ordinal: 6593
        void slew_up(double);

    // RVA: 0x19C6 | Ordinal: 6599
        void stabilizeInSpace(void);

    // RVA: 0x19C8 | Ordinal: 6601
        void stabilizeOnGround(bool);

    // RVA: 0x19E9 | Ordinal: 6634
        void start_tracking(void);

    // RVA: 0x1A27 | Ordinal: 6696
        void target_can_be_detected(class cockpit::avTrackData const &) const;

    // RVA: 0x1A33 | Ordinal: 6708
        void test_and_lockon(unsigned int);

    // RVA: 0x1A3D | Ordinal: 6718
        void toLockOnlyParts(void) const;

    // RVA: 0x1A4F | Ordinal: 6736
        void tracking(double);

    // RVA: 0x1A75 | Ordinal: 6774
        void uncage(void);

    // RVA: 0x1ADD | Ordinal: 6878
        void update(double);

    // RVA: 0x1B4B | Ordinal: 6988
        void update_angles(double);

    // RVA: 0x1B63 | Ordinal: 7012
        void update_frame(void);

    // RVA: 0x1B6B | Ordinal: 7020
        void update_gyro_base_point(double);

    // RVA: 0x1B6E | Ordinal: 7023
        void update_gyro_space_base_point(void);

    // RVA: 0x1B81 | Ordinal: 7042
        void update_slave_mode(class osg::Vec3d const &);

    // RVA: 0x1B82 | Ordinal: 7043
        void update_slew(double);

    // RVA: 0x1B8D | Ordinal: 7054
        void useLockOnParts(void) const;

    // RVA: 0x1B92 | Ordinal: 7059
        void use_gyro_base(void) const;

    // RVA: 0x1B95 | Ordinal: 7062
        void use_volume_search(void) const;

    // RVA: 0x1BAB | Ordinal: 7084
        void zoom_in(void);

    // RVA: 0x1BAF | Ordinal: 7088
        void zoom_out(void);

    // RVA: 0x35D | Ordinal: 862
        void _avTVSensor(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVTVSENSOR_HPP
