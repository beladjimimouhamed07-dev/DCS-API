#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccArcadeRadar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccArcadeRadar
{
public:

    // RVA: 0x958 | Ordinal: 2393
        void apply_buffer(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x96D | Ordinal: 2414
        void bank_scale(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x96E | Ordinal: 2415
        void baro_altitude_rotate(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1E3 | Ordinal: 484
        void ccArcadeRadar(void);

    // RVA: 0xB0D | Ordinal: 2830
        void control(void);

    // RVA: 0xB3C | Ordinal: 2877
        void create_elements_controllers_map(void);

    // RVA: 0xB92 | Ordinal: 2963
        void draw_airfields(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB94 | Ordinal: 2965
        void draw_current_target_hsd(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB95 | Ordinal: 2966
        void draw_current_target_hud(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB96 | Ordinal: 2967
        void draw_distance_authorized(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB97 | Ordinal: 2968
        void draw_fire_permission(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB98 | Ordinal: 2969
        void draw_gun_is_selected(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB99 | Ordinal: 2970
        void draw_iff_color(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB9A | Ordinal: 2971
        void draw_mark_hsd(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB9B | Ordinal: 2972
        void draw_mission_target_hsd(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB9C | Ordinal: 2973
        void draw_mission_target_hud(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB9D | Ordinal: 2974
        void draw_mlws_contact_hsd(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB9E | Ordinal: 2975
        void draw_mlws_contact_hud(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xB9F | Ordinal: 2976
        void draw_mlws_contacts(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBA4 | Ordinal: 2981
        void draw_selected_station_color(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBA5 | Ordinal: 2982
        void draw_selected_weapon_count(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBA6 | Ordinal: 2983
        void draw_selected_weapon_type(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBA7 | Ordinal: 2984
        void draw_selected_weapon_type_simple(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBA8 | Ordinal: 2985
        void draw_station(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBA9 | Ordinal: 2986
        void draw_target_distance(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBAA | Ordinal: 2987
        void draw_target_hsd(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBAB | Ordinal: 2988
        void draw_target_hud(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBAC | Ordinal: 2989
        void draw_targets(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBAD | Ordinal: 2990
        void draw_temporal_set(class cockpit::Element *, unsigned int, unsigned char);

    // RVA: 0xBB5 | Ordinal: 2998
        void draw_velocity_vector(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBB6 | Ordinal: 2999
        void draw_velocity_vector_hsd(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xBB7 | Ordinal: 3000
        void draw_waypoint_hsd(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1131 | Ordinal: 4402
        void hsd_history_pnt(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1132 | Ordinal: 4403
        void hsd_position(class MovingObject *);

    // RVA: 0x120A | Ordinal: 4619
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x1428 | Ordinal: 5161
        void north_direction_hsd(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x14B2 | Ordinal: 5299
        void pitch_scale(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1555 | Ordinal: 5462
        void radar_altitude_rotate(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x162D | Ordinal: 5678
        void reset_buffer(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1981 | Ordinal: 6530
        void show_radar(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1982 | Ordinal: 6531
        void sight_point_global(class osg::Vec3d &, bool);

    // RVA: 0x1A14 | Ordinal: 6677
        void surface_height_rotate(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A1F | Ordinal: 6688
        void switch_altitude_scale_radar(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A44 | Ordinal: 6725
        void to_hsd_space(class cockpit::avArcadeRadar *, class wPosition3<double> const &, class cockpit::Element *, class HeapVector<struct Graphics::DynamicParam> const &, bool);

    // RVA: 0x1A45 | Ordinal: 6726
        void to_hsd_space(class cockpit::avArcadeRadar *, class osg::Vec3d const &, class cockpit::Element *, class HeapVector<struct Graphics::DynamicParam> const &, bool);

    // RVA: 0x1A6A | Ordinal: 6763
        void txt_course(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A71 | Ordinal: 6770
        void txt_scale(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1B9E | Ordinal: 7071
        void vy_scale(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1BA3 | Ordinal: 7076
        void you_are_the_target_blinking(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x371 | Ordinal: 882
        void _ccArcadeRadar(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCARCADERADAR_HPP
