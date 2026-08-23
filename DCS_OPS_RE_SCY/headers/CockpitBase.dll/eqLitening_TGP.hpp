#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: eqLitening_TGP
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class eqLitening_TGP
{
public:

    // RVA: 0x8EA | Ordinal: 2283
        void acquisitionTimeExpired(void) const;

    // RVA: 0x91D | Ordinal: 2334
        void add_masked_area(class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>> const &, bool);

    // RVA: 0x9AF | Ordinal: 2480
        void cage(void);

    // RVA: 0xA64 | Ordinal: 2661
        void check_area_LSS_toggle(double);

    // RVA: 0xA88 | Ordinal: 2697
        void check_size(struct cockpit::sensor_frame const &, struct cockpit::sensor_frame const &) const;

    // RVA: 0xA8F | Ordinal: 2704
        void check_track_by_angle(class osg::Vec3d const &, double) const;

    // RVA: 0xB5C | Ordinal: 2909
        void decrease_fucus(void);

    // RVA: 0xB5F | Ordinal: 2912
        void default_search_distance(void) const;

    // RVA: 0x255 | Ordinal: 598
        void eqLitening_TGP(class cockpit::eqLitening_TGP const &);

    // RVA: 0x256 | Ordinal: 599
        void eqLitening_TGP(unsigned int);

    // RVA: 0xBED | Ordinal: 3054
        void fill_camera(class Graphics::Camera &) const;

    // RVA: 0xC27 | Ordinal: 3112
        void gain_level_selection_value_decrease(int);

    // RVA: 0xC28 | Ordinal: 3113
        void gain_level_selection_value_increase(int);

    // RVA: 0xE0D | Ordinal: 3598
        void getStatus(void) const;

    // RVA: 0xE12 | Ordinal: 3603
        void getStbyBIT_FLR_Info(void) const;

    // RVA: 0xE13 | Ordinal: 3604
        void getStbyBIT_MSK_Info(void) const;

    // RVA: 0xE14 | Ordinal: 3605
        void getStbyInitState2(void) const;

    // RVA: 0xE5A | Ordinal: 3675
        void get_FOV(void) const;

    // RVA: 0xE5B | Ordinal: 3676
        void get_FOV(bool) const;

    // RVA: 0xF0D | Ordinal: 3854
        void get_default_frame(void) const;

    // RVA: 0xF10 | Ordinal: 3857
        void get_delta_height(void) const;

    // RVA: 0xF11 | Ordinal: 3858
        void get_designator_fire(void) const;

    // RVA: 0xF12 | Ordinal: 3859
        void get_designator_type(void) const;

    // RVA: 0xF1A | Ordinal: 3867
        void get_digital_zoom(void) const;

    // RVA: 0xF1F | Ordinal: 3872
        void get_distance_under_LOS(void) const;

    // RVA: 0xF3E | Ordinal: 3903
        void get_flir_hot(void) const;

    // RVA: 0xF3F | Ordinal: 3904
        void get_focus(void) const;

    // RVA: 0xF40 | Ordinal: 3905
        void get_focus_adjustment(void) const;

    // RVA: 0xF4F | Ordinal: 3920
        void get_gain_level_selection_value(int) const;

    // RVA: 0xF50 | Ordinal: 3921
        void get_gain_selection_value(void) const;

    // RVA: 0xF6A | Ordinal: 3947
        void get_head_rotation(void) const;

    // RVA: 0xF7F | Ordinal: 3968
        void get_ir_gain(void);

    // RVA: 0xF80 | Ordinal: 3969
        void get_ir_level(void);

    // RVA: 0xF81 | Ordinal: 3970
        void get_ir_sharpness_factor(void);

    // RVA: 0xF89 | Ordinal: 3978
        void get_laser(void);

    // RVA: 0xF8A | Ordinal: 3979
        void get_laser(void) const;

    // RVA: 0xF8B | Ordinal: 3980
        void get_laser_designation_code(void) const;

    // RVA: 0xF8C | Ordinal: 3981
        void get_laser_mode(void) const;

    // RVA: 0xF8D | Ordinal: 3982
        void get_laser_power(void);

    // RVA: 0xF8E | Ordinal: 3983
        void get_laser_spot_detector(void) const;

    // RVA: 0xF8F | Ordinal: 3984
        void get_laser_spot_search_code(void) const;

    // RVA: 0xF9F | Ordinal: 4000
        void get_level_selection_value(void) const;

    // RVA: 0xFB8 | Ordinal: 4025
        void get_masked(void) const;

    // RVA: 0xFB9 | Ordinal: 4026
        void get_masked_areas(bool) const;

    // RVA: 0xFBA | Ordinal: 4027
        void get_masked_outline(void) const;

    // RVA: 0xFBB | Ordinal: 4028
        void get_master_mode(void) const;

    // RVA: 0xFDD | Ordinal: 4062
        void get_narrow(void) const;

    // RVA: 0xFDE | Ordinal: 4063
        void get_narrow_LSS(void) const;

    // RVA: 0x1012 | Ordinal: 4115
        void get_point_under_LOS(void) const;

    // RVA: 0x1016 | Ordinal: 4119
        void get_polar_angles(void) const;

    // RVA: 0x1017 | Ordinal: 4120
        void get_polar_angles_from_tgp(double, double) const;

    // RVA: 0x1018 | Ordinal: 4121
        void get_polar_angles_local(void) const;

    // RVA: 0x1030 | Ordinal: 4145
        void get_priority_target(void) const;

    // RVA: 0x1068 | Ordinal: 4201
        void get_screen(void) const;

    // RVA: 0x1070 | Ordinal: 4209
        void get_search_angle(void) const;

    // RVA: 0x109D | Ordinal: 4254
        void get_slew_acceleration(double) const;

    // RVA: 0x109F | Ordinal: 4256
        void get_slew_velocity(void) const;

    // RVA: 0x10A9 | Ordinal: 4266
        void get_station(void) const;

    // RVA: 0x10CC | Ordinal: 4301
        void get_tgp_angles(void) const;

    // RVA: 0x10CD | Ordinal: 4302
        void get_tgp_angles_from_polar(double, double) const;

    // RVA: 0x10D6 | Ordinal: 4311
        void get_track_mode(void) const;

    // RVA: 0x10D8 | Ordinal: 4313
        void get_tracked_point(void) const;

    // RVA: 0x10DF | Ordinal: 4320
        void get_use_digital_zoom(void) const;

    // RVA: 0x10EA | Ordinal: 4331
        void get_velocity_by_axis_value(float, float) const;

    // RVA: 0x10EF | Ordinal: 4336
        void get_video_mode(void) const;

    // RVA: 0x1101 | Ordinal: 4354
        void getfocusBest(void) const;

    // RVA: 0x114B | Ordinal: 4428
        void increase_focus(void);

    // RVA: 0x1167 | Ordinal: 4456
        void initLimits(void);

    // RVA: 0x1179 | Ordinal: 4474
        void initZoom(void);

    // RVA: 0x121E | Ordinal: 4639
        void initialize(void);

    // RVA: 0x12A4 | Ordinal: 4773
        void is_TV_Available(void);

    // RVA: 0x1401 | Ordinal: 5122
        void masked(double, double, class ed::vector<class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>>, class ed::allocator<class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>>>> const &) const;

    // RVA: 0x1402 | Ordinal: 5123
        void masked_by_self(void) const;

    // RVA: 0x145C | Ordinal: 5213
        void on_TV_SENSOR_move_horizontal_abs(float, float, double);

    // RVA: 0x1460 | Ordinal: 5217
        void on_TV_SENSOR_move_vertical_abs(float, float, double);

    // RVA: 0x1465 | Ordinal: 5222
        void on_axis_stop(void);

    // RVA: 0x146E | Ordinal: 5231
        void on_hot_air_start(void);

    // RVA: 0x1489 | Ordinal: 5258
        void orient(class wPosition3<double> &, double, double) const;

    // RVA: 0x152A | Ordinal: 5419
        void prolongate(double);

    // RVA: 0x1606 | Ordinal: 5639
        void repair(void);

    // RVA: 0x1641 | Ordinal: 5698
        void roll(void) const;

    // RVA: 0x165B | Ordinal: 5724
        void scan(double);

    // RVA: 0x165D | Ordinal: 5726
        void scan_start(void);

    // RVA: 0x1660 | Ordinal: 5729
        void scan_stop(void);

    // RVA: 0x1661 | Ordinal: 5730
        void scan_zone_width(void);

    // RVA: 0x16FB | Ordinal: 5884
        void setElecPower(bool);

    // RVA: 0x1787 | Ordinal: 6024
        void setPlatformInitialLocalPosition(class wPosition3<double> const &);

    // RVA: 0x17BC | Ordinal: 6077
        void setStatus(enum cockpit::TGP_STATUS);

    // RVA: 0x1817 | Ordinal: 6168
        void set_aircraft_altitude(double);

    // RVA: 0x181F | Ordinal: 6176
        void set_area_track(void);

    // RVA: 0x1838 | Ordinal: 6201
        void set_caged_positon(double);

    // RVA: 0x183B | Ordinal: 6204
        void set_carrier(class MovingObject *);

    // RVA: 0x1868 | Ordinal: 6249
        void set_damage(unsigned int, bool);

    // RVA: 0x1870 | Ordinal: 6257
        void set_designator_off(void);

    // RVA: 0x1871 | Ordinal: 6258
        void set_designator_on(void);

    // RVA: 0x1872 | Ordinal: 6259
        void set_designator_type(int);

    // RVA: 0x1873 | Ordinal: 6260
        void set_digital_terrain_available(bool, double);

    // RVA: 0x18AE | Ordinal: 6319
        void set_ir_gains_count(int);

    // RVA: 0x18AF | Ordinal: 6320
        void set_ir_init_gain(unsigned int);

    // RVA: 0x18B0 | Ordinal: 6321
        void set_ir_init_level(unsigned int);

    // RVA: 0x18B1 | Ordinal: 6322
        void set_ir_levels_count(int);

    // RVA: 0x18B2 | Ordinal: 6323
        void set_ir_sharpness_factor(float);

    // RVA: 0x18BA | Ordinal: 6331
        void set_laser_designation_code(unsigned int);

    // RVA: 0x18BB | Ordinal: 6332
        void set_laser_power(bool);

    // RVA: 0x18BC | Ordinal: 6333
        void set_laser_spot_search_code(unsigned int);

    // RVA: 0x18CF | Ordinal: 6352
        void set_master_mode(unsigned int);

    // RVA: 0x18E6 | Ordinal: 6375
        void set_mode(unsigned char);

    // RVA: 0x18EF | Ordinal: 6384
        void set_narrow(bool);

    // RVA: 0x18F0 | Ordinal: 6385
        void set_narrow_LSS(bool);

    // RVA: 0x1904 | Ordinal: 6405
        void set_point_track(void);

    // RVA: 0x192B | Ordinal: 6444
        void set_simulated_point_track(bool);

    // RVA: 0x1952 | Ordinal: 6483
        void set_track_mode(unsigned int);

    // RVA: 0x195C | Ordinal: 6493
        void set_use_digital_zoom(bool);

    // RVA: 0x195F | Ordinal: 6496
        void set_use_native_axis(bool);

    // RVA: 0x196A | Ordinal: 6507
        void set_video_mode(int, bool);

    // RVA: 0x19A7 | Ordinal: 6568
        void slave_to_point(class osg::Vec3d const &);

    // RVA: 0x19B1 | Ordinal: 6578
        void slew_down(double);

    // RVA: 0x19B5 | Ordinal: 6582
        void slew_left(double);

    // RVA: 0x19BA | Ordinal: 6587
        void slew_right(double);

    // RVA: 0x19BE | Ordinal: 6591
        void slew_stop(void);

    // RVA: 0x19C2 | Ordinal: 6595
        void slew_up(double);

    // RVA: 0x19C9 | Ordinal: 6602
        void stabilizeOnGround(bool);

    // RVA: 0x19DC | Ordinal: 6621
        void start_LSS(void);

    // RVA: 0x19DF | Ordinal: 6624
        void start_acquisition(unsigned int);

    // RVA: 0x19E0 | Ordinal: 6625
        void start_focus_adjustment(void);

    // RVA: 0x19E3 | Ordinal: 6628
        void start_prolongation(unsigned int);

    // RVA: 0x19E4 | Ordinal: 6629
        void start_rates(void);

    // RVA: 0x19EA | Ordinal: 6635
        void start_tracking(void);

    // RVA: 0x1A02 | Ordinal: 6659
        void stop_LSS(void);

    // RVA: 0x1A03 | Ordinal: 6660
        void stop_LSS_with_area_track(void);

    // RVA: 0x1A04 | Ordinal: 6661
        void stop_LSS_with_inr_track(void);

    // RVA: 0x1A28 | Ordinal: 6697
        void target_can_be_detected(class cockpit::avTrackData const &) const;

    // RVA: 0x1A2F | Ordinal: 6704
        void terrain_intersection_distance(class Graphics::Camera const &) const;

    // RVA: 0x1A4D | Ordinal: 6734
        void track(void);

    // RVA: 0x1A4E | Ordinal: 6735
        void track_inertial(void);

    // RVA: 0x1A51 | Ordinal: 6738
        void tracking(double);

    // RVA: 0x1A60 | Ordinal: 6753
        void try_to_track_area(void);

    // RVA: 0x1AFB | Ordinal: 6908
        void update(double);

    // RVA: 0x1B30 | Ordinal: 6961
        void updateStatus(void);

    // RVA: 0x1B4C | Ordinal: 6989
        void update_angles(double);

    // RVA: 0x1B56 | Ordinal: 6999
        void update_container_draw_args(void);

    // RVA: 0x1B58 | Ordinal: 7001
        void update_cooling(double);

    // RVA: 0x1B5A | Ordinal: 7003
        void update_digital_zoom(void);

    // RVA: 0x1B62 | Ordinal: 7011
        void update_focus(void);

    // RVA: 0x1B64 | Ordinal: 7013
        void update_frame(void);

    // RVA: 0x1B73 | Ordinal: 7028
        void update_mask(void);

    // RVA: 0x1B79 | Ordinal: 7034
        void update_point_under_LOS(void);

    // RVA: 0x1B7D | Ordinal: 7038
        void update_priority_target(void);

    // RVA: 0x1B96 | Ordinal: 7063
        void use_volume_search(void) const;

    // RVA: 0x1BAD | Ordinal: 7086
        void zoom_in(void);

    // RVA: 0x1BB1 | Ordinal: 7090
        void zoom_out(void);

    // RVA: 0x1BB3 | Ordinal: 7092
        void zoom_stop(void);

    // RVA: 0x3A9 | Ordinal: 938
        void _eqLitening_TGP(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_EQLITENING_TGP_HPP
