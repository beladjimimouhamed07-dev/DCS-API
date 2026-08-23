#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: PathFinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class PathFinder
{
public:

    // RVA: 0x20 | Ordinal: 33
        void PathFinder(bool);

    // RVA: 0x78 | Ordinal: 121
        void add_collision(class osg::Vec2i, int) const;

    // RVA: 0x7A | Ordinal: 123
        void can_see(class osg::Vec2f, class osg::Vec2f, int);

    // RVA: 0x7E | Ordinal: 127
        void clear_collisions(void) const;

    // RVA: 0x88 | Ordinal: 137
        void detect_collision(class osg::Vec2i) const;

    // RVA: 0x8E | Ordinal: 143
        void find_path(class osg::Vec2f, class osg::Vec2f, int);

    // RVA: 0x9F | Ordinal: 160
        void get_cell_box(class osg::Vec2i const &);

    // RVA: 0xA0 | Ordinal: 161
        void get_cell_coordinates(class osg::Vec2i const &);

    // RVA: 0xA1 | Ordinal: 162
        void get_cell_index(class osg::Vec2f const &);

    // RVA: 0xA2 | Ordinal: 163
        void get_cell_position(class osg::Vec2i const &);

    // RVA: 0xA3 | Ordinal: 164
        void get_cell_size(void) const;

    // RVA: 0xAD | Ordinal: 174
        void get_debug_info(int);

    // RVA: 0xEC | Ordinal: 237
        void get_world_grid_size(void) const;

    // RVA: 0x12A | Ordinal: 299
        void remove_collision(class osg::Vec2i) const;

    // RVA: 0x143 | Ordinal: 324
        void set_is_debug(bool);

    // RVA: 0x159 | Ordinal: 346
        void set_world_box(class osg::BoundingBoxImpl<class osg::Vec3f>);

    // RVA: 0x30 | Ordinal: 49
        void _PathFinder(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_PATHFINDER_HPP
