#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: CharacterController
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class CharacterController
{
public:

    // RVA: 0xE | Ordinal: 15
        void CharacterController(class Animator::CharacterController const &);

    // RVA: 0xF | Ordinal: 16
        void CharacterController(void);

    // RVA: 0x7F | Ordinal: 128
        void _calculate_initial_turn(class osg::Vec3f, class osg::Vec3f, float, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0x95 | Ordinal: 150
        void _make_turn(class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, float, float, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0xA5 | Ordinal: 166
        void _smooth_route(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0xA3 | Ordinal: 164
        void _smooth_route2(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0xA4 | Ordinal: 165
        void _smooth_route3(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &, bool);

    // RVA: 0xC2 | Ordinal: 195
        void clear_route(void);

    // RVA: 0x128 | Ordinal: 297
        void get_enabled(void);

    // RVA: 0x15F | Ordinal: 352
        void get_points(void);

    // RVA: 0x190 | Ordinal: 401
        void get_trajectory_position(class osg::Matrixf const &, class osg::Vec3f &, float &);

    // RVA: 0x191 | Ordinal: 402
        void get_trajectory_position(float, float, class osg::Matrixf &);

    // RVA: 0x1D0 | Ordinal: 465
        void render(class osg::Matrixf);

    // RVA: 0x203 | Ordinal: 516
        void set_enabled(bool);

    // RVA: 0x215 | Ordinal: 534
        void set_route(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class wPosition3<float> const &, class std::function<void __cdecl(void)>);

    // RVA: 0x21E | Ordinal: 543
        void smooth_iteration(class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0x23F | Ordinal: 576
        void update_position(class osg::Vec3f const &, float &);

    // RVA: 0x2D | Ordinal: 46
        void _CharacterController(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_CHARACTERCONTROLLER_HPP
