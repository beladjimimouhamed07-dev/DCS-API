#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avArcadeRadar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avArcadeRadar
{
public:

    // RVA: 0x86F | Ordinal: 2160
        void SetCommand(int, float);

    // RVA: 0xC5 | Ordinal: 198
        void avArcadeRadar(void);

    // RVA: 0x9F3 | Ordinal: 2548
        void can_be_used(void) const;

    // RVA: 0xADA | Ordinal: 2779
        void collect_garbage(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0xBD1 | Ordinal: 3026
        void exist(class cockpit::arcade_target const &, class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> const &);

    // RVA: 0xE95 | Ordinal: 3734
        void get_airborne_friendlies(void) const;

    // RVA: 0xE96 | Ordinal: 3735
        void get_airborne_targets(void) const;

    // RVA: 0xEF9 | Ordinal: 3834
        void get_current_waypoint(class osg::Vec3d &);

    // RVA: 0xF38 | Ordinal: 3897
        void get_fire_permission(void) const;

    // RVA: 0xF56 | Ordinal: 3927
        void get_ground_friendlies(void) const;

    // RVA: 0xF59 | Ordinal: 3930
        void get_ground_targets(void) const;

    // RVA: 0xF5E | Ordinal: 3935
        void get_gun_is_selected(void) const;

    // RVA: 0xF61 | Ordinal: 3938
        void get_gun_sight_data(class Math::Polar &);

    // RVA: 0xF78 | Ordinal: 3961
        void get_human_position(void) const;

    // RVA: 0xFCD | Ordinal: 4046
        void get_mission_targets_manager(void) const;

    // RVA: 0x1071 | Ordinal: 4210
        void get_search_distance(void) const;

    // RVA: 0x1073 | Ordinal: 4212
        void get_selected_ammo_type(void) const;

    // RVA: 0x1078 | Ordinal: 4217
        void get_selected_weapon_count(void) const;

    // RVA: 0x1079 | Ordinal: 4218
        void get_selected_weapon_type(void) const;

    // RVA: 0x107A | Ordinal: 4219
        void get_selector(void);

    // RVA: 0x107B | Ordinal: 4220
        void get_selector(void) const;

    // RVA: 0x1090 | Ordinal: 4241
        void get_shells_count(void) const;

    // RVA: 0x1092 | Ordinal: 4243
        void get_show_radar(void) const;

    // RVA: 0x1097 | Ordinal: 4248
        void get_sight(void);

    // RVA: 0x1099 | Ordinal: 4250
        void get_sight_data(class Math::Polar &);

    // RVA: 0x10B7 | Ordinal: 4280
        void get_target(void);

    // RVA: 0x10B8 | Ordinal: 4281
        void get_target(void) const;

    // RVA: 0x10BE | Ordinal: 4287
        void get_target_point(void);

    // RVA: 0x1113 | Ordinal: 4372
        void handler_implement(class cockpit::arcade_target const &, class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0x1119 | Ordinal: 4378
        void has_point(void) const;

    // RVA: 0x119F | Ordinal: 4512
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x122F | Ordinal: 4656
        void insert(class cockpit::arcade_target const &, class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0x12C9 | Ordinal: 4810
        void is_station_selected(int) const;

    // RVA: 0x140D | Ordinal: 5134
        void most_dangerous(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0x141B | Ordinal: 5148
        void nearest_by_distance(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0x141C | Ordinal: 5149
        void nearest_to_hud(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0x1420 | Ordinal: 5153
        void next(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0x1468 | Ordinal: 5225
        void on_change_target(void);

    // RVA: 0x151C | Ordinal: 5405
        void previous(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0x1595 | Ordinal: 5526
        void register_listener(void);

    // RVA: 0x15DF | Ordinal: 5600
        void remove_by_predicate(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &, class cockpit::arcade_target_validator const &);

    // RVA: 0x15E4 | Ordinal: 5605
        void remove_too_far(class ed::list<class cockpit::arcade_target, class ed::allocator<class cockpit::arcade_target>> &);

    // RVA: 0x1671 | Ordinal: 5746
        void search_targets(void);

    // RVA: 0x1672 | Ordinal: 5747
        void search_targets_by_selector(void);

    // RVA: 0x1676 | Ordinal: 5751
        void selector_command(int);

    // RVA: 0x1948 | Ordinal: 6473
        void set_target(unsigned int);

    // RVA: 0x1A9C | Ordinal: 6813
        void update(void);

    // RVA: 0x1B59 | Ordinal: 7002
        void update_current(void);

    // RVA: 0x2DC | Ordinal: 733
        void _avArcadeRadar(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVARCADERADAR_HPP
