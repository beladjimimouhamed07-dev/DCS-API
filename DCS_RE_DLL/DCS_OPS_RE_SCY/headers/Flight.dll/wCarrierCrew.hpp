#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: wCarrierCrew
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wCarrierCrew
{
public:

    // RVA: 0xDE | Ordinal: 223
        void _get_gear_positions_local(float, class woLABase *);

    // RVA: 0xE2 | Ordinal: 227
        void _init_behavior_tree_nodes(class BT::BehaviorTreeFactory &);

    // RVA: 0xE3 | Ordinal: 228
        void _wait_positioning_after_JBD(float);

    // RVA: 0x11F | Ordinal: 288
        void check_LA_in_start_box(unsigned int);

    // RVA: 0x120 | Ordinal: 289
        void check_aircraft_in_box(class wPosition3<float>, class osg::BoundingBoxImpl<class osg::Vec3f> const &, class wPosition3<float> *);

    // RVA: 0x147 | Ordinal: 328
        void create_crew(class Lua::Config &);

    // RVA: 0x14D | Ordinal: 334
        void debug_draw(class wPosition3<double> const &);

    // RVA: 0x200 | Ordinal: 513
        void get_LA(void);

    // RVA: 0x201 | Ordinal: 514
        void get_LA_ptr(void);

    // RVA: 0x210 | Ordinal: 529
        void get_hbb_mount_point_animation_offset(void);

    // RVA: 0x211 | Ordinal: 530
        void get_hbb_mount_point_animation_position(float, class wPosition3<float> &);

    // RVA: 0x212 | Ordinal: 531
        void get_la_gear_in_box(class woLABase *, class osg::BoundingBoxImpl<class osg::Vec3f> const &, class wPosition3<float> *);

    // RVA: 0x213 | Ordinal: 532
        void get_la_id(void);

    // RVA: 0x21C | Ordinal: 541
        void get_runway_params(void);

    // RVA: 0x21D | Ordinal: 542
        void get_runway_params(class osg::Vec3f &, class osg::Vec3f &);

    // RVA: 0x21E | Ordinal: 543
        void get_runway_start(void);

    // RVA: 0x21F | Ordinal: 544
        void get_start_box(void);

    // RVA: 0x222 | Ordinal: 547
        void gui(void);

    // RVA: 0x22B | Ordinal: 556
        void init(class Lua::Config &);

    // RVA: 0x28B | Ordinal: 652
        void on_end_update(float);

    // RVA: 0x28D | Ordinal: 654
        void on_send_state(class Mail::Writer &, unsigned char);

    // RVA: 0x28E | Ordinal: 655
        void on_sync(class Mail::Reader &);

    // RVA: 0x28F | Ordinal: 656
        void on_update(float);

    // RVA: 0x2D0 | Ordinal: 721
        void raw_set_LA(class woLABase *);

    // RVA: 0x2D7 | Ordinal: 728
        void request_crew_permission(class IwoLA *, enum wGroundCrew::GroundCrewRequest);

    // RVA: 0x2D8 | Ordinal: 729
        void request_free_catapult(bool);

    // RVA: 0x2DA | Ordinal: 731
        void reset(void);

    // RVA: 0x2DB | Ordinal: 732
        void reset_LA(void);

    // RVA: 0x2DC | Ordinal: 733
        void reset_attributes(void);

    // RVA: 0x2DD | Ordinal: 734
        void reset_orders(void);

    // RVA: 0x31C | Ordinal: 797
        void set_LA(class woLABase *, bool);

    // RVA: 0x31E | Ordinal: 799
        void set_operation_allowed(bool);

    // RVA: 0x31F | Ordinal: 800
        void set_runway_params(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x320 | Ordinal: 801
        void set_taxi_params(int, int);

    // RVA: 0x32F | Ordinal: 816
        void taxi(class wPosition3<double> const &, bool);

    // RVA: 0x17 | Ordinal: 24
        void wCarrierCrew(unsigned char, class wGroundCrewOwner *);

    // RVA: 0x345 | Ordinal: 838
        void wait_afterburner_state(void);

    // RVA: 0x346 | Ordinal: 839
        void wait_fixed_on_catapult(void);

    // RVA: 0x34 | Ordinal: 53
        void _wCarrierCrew(void);
};

// DCS_OPS_RE_FLIGHT.DLL_WCARRIERCREW_HPP
