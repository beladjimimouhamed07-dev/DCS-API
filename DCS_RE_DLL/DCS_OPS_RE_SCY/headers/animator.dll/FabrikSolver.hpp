#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: FabrikSolver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class FabrikSolver
{
public:

    // RVA: 0x16 | Ordinal: 23
        void FabrikSolver(class Animator::FabrikSolver const &);

    // RVA: 0x17 | Ordinal: 24
        void FabrikSolver(class ed::basic_string<char> const &, struct lua_State *, class Animator::AnimationManager *);

    // RVA: 0x8E | Ordinal: 143
        void _get_world_matrix(int);

    // RVA: 0xA6 | Ordinal: 167
        void _solve_chain(struct Animator::FabrikSolver::Effector const &);

    // RVA: 0xA9 | Ordinal: 170
        void _top_down_traverse(class std::function<void __cdecl(int)> &);

    // RVA: 0xAA | Ordinal: 171
        void _top_down_traverse(int, class std::function<void __cdecl(int)> &);

    // RVA: 0xA7 | Ordinal: 168
        void _top_down_traverse2(class std::function<bool __cdecl(int)> &);

    // RVA: 0xA8 | Ordinal: 169
        void _top_down_traverse2(int, class std::function<bool __cdecl(int)> &);

    // RVA: 0xAD | Ordinal: 174
        void add_bone(int, class ed::basic_string<char> const &, int);

    // RVA: 0xAF | Ordinal: 176
        void add_effector(class ed::basic_string<char> const &);

    // RVA: 0x10B | Ordinal: 268
        void get_bone_transform(int);

    // RVA: 0x10C | Ordinal: 269
        void get_bone_transform(int, class osg::Vec3f &, class osg::Quatf &);

    // RVA: 0x10D | Ordinal: 270
        void get_bone_world_pos(int);

    // RVA: 0x10E | Ordinal: 271
        void get_bone_world_transform(int);

    // RVA: 0x143 | Ordinal: 324
        void get_name(void);

    // RVA: 0x155 | Ordinal: 342
        void get_num_bones(void);

    // RVA: 0x19D | Ordinal: 414
        void gui(void);

    // RVA: 0x1BE | Ordinal: 447
        void process(void);

    // RVA: 0x1DB | Ordinal: 476
        void reset_modified_flag(void);

    // RVA: 0x1F0 | Ordinal: 497
        void set_bone_local_transform(int, class osg::Matrixf const &);

    // RVA: 0x1F1 | Ordinal: 498
        void set_bone_local_transform(int, class osg::Vec3f const &, class osg::Quatf const &);

    // RVA: 0x1F2 | Ordinal: 499
        void set_bone_world_transform(int, class osg::Matrixf const &);

    // RVA: 0x200 | Ordinal: 513
        void set_effector_transform(class ed::basic_string<char> const &, class osg::Matrixf const &);

    // RVA: 0x201 | Ordinal: 514
        void set_effector_transform(int, class osg::Matrixf const &);

    // RVA: 0x202 | Ordinal: 515
        void set_effector_transform(int, class osg::Vec3f const &, class osg::Quatf const &);

    // RVA: 0x20D | Ordinal: 526
        void set_nodes_modified_up(int);

    // RVA: 0x20E | Ordinal: 527
        void set_num_bones(int);

    // RVA: 0x211 | Ordinal: 530
        void set_pose(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> const &);

    // RVA: 0x21F | Ordinal: 544
        void solve(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> &);

    // RVA: 0x23E | Ordinal: 575
        void update_pose(void);

    // RVA: 0x31 | Ordinal: 50
        void _FabrikSolver(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_FABRIKSOLVER_HPP
