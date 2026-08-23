#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wsZone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wsZone
{
public:

    // RVA: 0x662 | Ordinal: 1635
        void check_object_pos(class osg::Vec3f const &, class MovingObject *) const;

    // RVA: 0x663 | Ordinal: 1636
        void check_object_pos(class MovingObject *, class MovingObject *) const;

    // RVA: 0x664 | Ordinal: 1637
        void check_object_pos_separate(class osg::Vec3f const &) const;

    // RVA: 0x676 | Ordinal: 1655
        void clear(void);

    // RVA: 0x67A | Ordinal: 1659
        void clear_geometry(void);

    // RVA: 0x918 | Ordinal: 2329
        void get_area(void);

    // RVA: 0x919 | Ordinal: 2330
        void get_area(void) const;

    // RVA: 0x91C | Ordinal: 2333
        void get_bounding_box(void) const;

    // RVA: 0x922 | Ordinal: 2339
        void get_center_point(void) const;

    // RVA: 0x923 | Ordinal: 2340
        void get_center_point_with_terrain(double) const;

    // RVA: 0x936 | Ordinal: 2359
        void get_float_property(class ed::basic_string<char> const &, float) const;

    // RVA: 0x937 | Ordinal: 2360
        void get_geometry_type(void) const;

    // RVA: 0x938 | Ordinal: 2361
        void get_linked_obj_ptr(void) const;

    // RVA: 0x946 | Ordinal: 2375
        void get_missID(void) const;

    // RVA: 0x94A | Ordinal: 2379
        void get_name(void) const;

    // RVA: 0x94E | Ordinal: 2383
        void get_outer_radius(void) const;

    // RVA: 0x952 | Ordinal: 2387
        void get_position(void) const;

    // RVA: 0x954 | Ordinal: 2389
        void get_properties(void) const;

    // RVA: 0x982 | Ordinal: 2435
        void init_circle(class osg::Vec3d const &, float);

    // RVA: 0x983 | Ordinal: 2436
        void init_custom(class std::function<bool __cdecl(class wPosition3<double> const &, class osg::RectImpl<class osg::Vec2f> const &, class osg::Vec3d const &)>, class wPosition3<double> const &, double, double);

    // RVA: 0x984 | Ordinal: 2437
        void init_oriented_box(class wPosition3<double> const &, double, double);

    // RVA: 0x985 | Ordinal: 2438
        void init_polygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> &&);

    // RVA: 0x986 | Ordinal: 2439
        void init_polygon(class ed::vector<class osg::Vec3d, class ed::allocator<class osg::Vec3d>> const &);

    // RVA: 0x987 | Ordinal: 2440
        void init_sphere(class osg::Vec3d const &, float);

    // RVA: 0x9DA | Ordinal: 2523
        void is_linked_obj(void) const;

    // RVA: 0xA58 | Ordinal: 2649
        void load_from_state(struct lua_State *);

    // RVA: 0xAAD | Ordinal: 2734
        void onWaitObjectRespawn(class viObjectNode *);

    // RVA: 0xB70 | Ordinal: 2929
        void render_visuals(void);

    // RVA: 0xBE6 | Ordinal: 3047
        void set_color(class osg::Vec4f const &);

    // RVA: 0xBE8 | Ordinal: 3049
        void set_id(unsigned int const &);

    // RVA: 0xBE9 | Ordinal: 3050
        void set_linked_obj_ptr(class MovingObject *);

    // RVA: 0xBED | Ordinal: 3054
        void set_name(class ed::basic_string<char> const &);

    // RVA: 0xC57 | Ordinal: 3160
        void update_visuals(void);

    // RVA: 0x223 | Ordinal: 548
        void wsZone(class std::initializer_list<struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>);

    // RVA: 0x224 | Ordinal: 549
        void wsZone(void);

    // RVA: 0x2F2 | Ordinal: 755
        void _wsZone(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WSZONE_HPP
