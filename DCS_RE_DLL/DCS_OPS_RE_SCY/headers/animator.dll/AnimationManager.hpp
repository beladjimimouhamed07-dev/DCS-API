#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: AnimationManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class AnimationManager
{
public:

    // RVA: 0xB | Ordinal: 12
        void AnimationManager(char const *);

    // RVA: 0x77 | Ordinal: 120
        void _blend(class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> const &, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> const &, float, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &);

    // RVA: 0x78 | Ordinal: 121
        void _build_bones(class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> const &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0x79 | Ordinal: 122
        void _build_local_transform(int, class osg::Matrixf const &, class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> const &);

    // RVA: 0x7A | Ordinal: 123
        void _build_local_transforms(struct aiAnimation *, float, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &);

    // RVA: 0x7B | Ordinal: 124
        void _build_local_transforms_osg(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> const &, class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> &);

    // RVA: 0x7C | Ordinal: 125
        void _build_world_transform_osg(int, class osg::Matrixf const &, class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> const &, class osg::Vec3f);

    // RVA: 0x7D | Ordinal: 126
        void _build_world_transforms(class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> const &, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &);

    // RVA: 0x7E | Ordinal: 127
        void _build_world_transforms_osg(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> const &, class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> &, class osg::Vec3f);

    // RVA: 0x80 | Ordinal: 129
        void _check_node_name_validity(struct aiNodeAnim *, class ed::basic_string<char> const &);

    // RVA: 0x87 | Ordinal: 136
        void _get_instance_matrix(float, struct Animator::ShaderAnimation const &);

    // RVA: 0x8C | Ordinal: 141
        void _get_pose(struct aiAnimation *, float, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0x8D | Ordinal: 142
        void _get_tick(struct aiAnimation *, float, bool);

    // RVA: 0x8F | Ordinal: 144
        void _init_ik(void);

    // RVA: 0x90 | Ordinal: 145
        void _load_animation(struct aiScene const *, class ed::basic_string<char> const &);

    // RVA: 0x91 | Ordinal: 146
        void _load_blend_spaces(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class Lua::Config &);

    // RVA: 0x92 | Ordinal: 147
        void _load_graph(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class Lua::Config &);

    // RVA: 0x93 | Ordinal: 148
        void _load_masks(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class Lua::Config &);

    // RVA: 0x94 | Ordinal: 149
        void _load_overrides(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &, class Lua::Config &);

    // RVA: 0x98 | Ordinal: 153
        void _record_root_motion(struct aiAnimation *, struct Animator::AnimationManager::AnimationDescription &);

    // RVA: 0xB6 | Ordinal: 183
        void apply_ik(void);

    // RVA: 0xB9 | Ordinal: 186
        void build_node_trajectory(class std::vector<class osg::Vec3d, class std::allocator<class osg::Vec3d>> &, int, char const *);

    // RVA: 0xBA | Ordinal: 187
        void build_world_transforms_osg(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> const &, class osg::Vec3f);

    // RVA: 0xC7 | Ordinal: 200
        void compute(struct Animator::AnimationManager::ComputePassParams);

    // RVA: 0xCA | Ordinal: 203
        void create_gpu_animations(void);

    // RVA: 0xDD | Ordinal: 222
        void draw_inspector(class osg::Matrixf, class Animator::CharacterModelCookie *, bool);

    // RVA: 0xDE | Ordinal: 223
        void draw_node_controls(class osg::Matrixf &, char const *);

    // RVA: 0xDF | Ordinal: 224
        void draw_pose_controller(class osg::Matrixf);

    // RVA: 0xE5 | Ordinal: 230
        void fill_controls(class ed::basic_string<char> &, int, class ed::vector<char const *, class ed::allocator<char const *>> &);

    // RVA: 0xE6 | Ordinal: 231
        void fill_nodes_list(int, class ed::vector<char const *, class ed::allocator<char const *>> &);

    // RVA: 0xF6 | Ordinal: 247
        void get_animation(struct Animator::ShaderAnimation const &);

    // RVA: 0xF7 | Ordinal: 248
        void get_animation(class ed::basic_string<char> const &);

    // RVA: 0xF8 | Ordinal: 249
        void get_animation(int);

    // RVA: 0xFA | Ordinal: 251
        void get_animation_desc(int);

    // RVA: 0xFB | Ordinal: 252
        void get_animation_desc(int, class ed::basic_string<char> &);

    // RVA: 0xFC | Ordinal: 253
        void get_animation_duration(class ed::basic_string<char> const &);

    // RVA: 0xFD | Ordinal: 254
        void get_animation_duration(int);

    // RVA: 0xFE | Ordinal: 255
        void get_animation_index(class ed::basic_string<char> const &, bool);

    // RVA: 0x101 | Ordinal: 258
        void get_animation_name(unsigned int, bool);

    // RVA: 0x102 | Ordinal: 259
        void get_animation_names(void);

    // RVA: 0x107 | Ordinal: 264
        void get_blended_pose(int, float, int, float, float, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &);

    // RVA: 0x108 | Ordinal: 265
        void get_blended_pose(int, float, int, float, float, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0x109 | Ordinal: 266
        void get_blended_root(float, class Animator::CharacterModelCookie *);

    // RVA: 0x110 | Ordinal: 273
        void get_channel_matrix(struct aiNodeAnim *, int);

    // RVA: 0x116 | Ordinal: 279
        void get_current_animation(void) const;

    // RVA: 0x11D | Ordinal: 286
        void get_default_animation_index(class ed::basic_string<char> &);

    // RVA: 0x11E | Ordinal: 287
        void get_default_animation_index(void);

    // RVA: 0x11F | Ordinal: 288
        void get_default_blendspace(void);

    // RVA: 0x12A | Ordinal: 299
        void get_graph(void);

    // RVA: 0x132 | Ordinal: 307
        void get_instance_matrix(float, int, class osg::Vec2f const &, class Animator::CharacterModelStatic *);

    // RVA: 0x133 | Ordinal: 308
        void get_instance_matrix(float, class Animator::CharacterModelCookie *);

    // RVA: 0x134 | Ordinal: 309
        void get_instance_shift(int, float, bool, class osg::Matrixf &);

    // RVA: 0x135 | Ordinal: 310
        void get_last_key_pose(int, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &);

    // RVA: 0x136 | Ordinal: 311
        void get_last_node_position(int, int);

    // RVA: 0x13F | Ordinal: 320
        void get_movement(int);

    // RVA: 0x144 | Ordinal: 325
        void get_node_id(class ed::basic_string<char> const &);

    // RVA: 0x147 | Ordinal: 328
        void get_node_matrix(int, float, class Animator::CharacterModelCookie *);

    // RVA: 0x148 | Ordinal: 329
        void get_node_matrix(float, int, class Animator::InstanceData const &, struct Animator::ShaderAnimation const *, bool);

    // RVA: 0x14A | Ordinal: 331
        void get_node_movement_shift(int, int);

    // RVA: 0x14B | Ordinal: 332
        void get_node_name(int);

    // RVA: 0x14C | Ordinal: 333
        void get_node_override_mask(int, int);

    // RVA: 0x14D | Ordinal: 334
        void get_node_parent(int);

    // RVA: 0x14E | Ordinal: 335
        void get_node_position(int, class ed::basic_string<char> const &, float);

    // RVA: 0x14F | Ordinal: 336
        void get_node_position(int, int, float);

    // RVA: 0x150 | Ordinal: 337
        void get_node_transform(class ed::basic_string<char> const &);

    // RVA: 0x151 | Ordinal: 338
        void get_node_transform(int);

    // RVA: 0x152 | Ordinal: 339
        void get_node_world_pos(class Animator::CharacterModelCookie *, class ed::basic_string<char> const &, float, class osg::Matrixf);

    // RVA: 0x153 | Ordinal: 340
        void get_num_animations(void);

    // RVA: 0x158 | Ordinal: 345
        void get_num_nodes(void);

    // RVA: 0x15D | Ordinal: 350
        void get_overrides(void) const;

    // RVA: 0x160 | Ordinal: 353
        void get_pose(float, class Animator::InstanceData const &, struct Animator::ShaderAnimation const *, int, bool);

    // RVA: 0x161 | Ordinal: 354
        void get_pose(int, float, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &, bool);

    // RVA: 0x162 | Ordinal: 355
        void get_pose(int, float, class ed::vector<class aiMatrix4x4t<float>, class ed::allocator<class aiMatrix4x4t<float>>> &, bool, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &);

    // RVA: 0x165 | Ordinal: 358
        void get_pose_default(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> &);

    // RVA: 0x166 | Ordinal: 359
        void get_pose_osg(class ed::basic_string<char> const &, int);

    // RVA: 0x173 | Ordinal: 372
        void get_root_matrix(int, float, class osg::Vec3f);

    // RVA: 0x175 | Ordinal: 374
        void get_root_node_id(void);

    // RVA: 0x176 | Ordinal: 375
        void get_root_node_name(void);

    // RVA: 0x177 | Ordinal: 376
        void get_root_path(class ed::basic_string<char> const &);

    // RVA: 0x178 | Ordinal: 377
        void get_root_path(int);

    // RVA: 0x180 | Ordinal: 385
        void get_skeleton(float, class Animator::InstanceData const &, struct Animator::ShaderAnimation *, class osg::Vec3f, int, bool);

    // RVA: 0x183 | Ordinal: 388
        void get_solver(char const *);

    // RVA: 0x185 | Ordinal: 390
        void get_speed(float, class Animator::CharacterModelCookie *);

    // RVA: 0x1A2 | Ordinal: 419
        void init(void);

    // RVA: 0x1AE | Ordinal: 431
        void load_node(class Lua::Config &, struct aiNode *, class ed::vector<struct aiNode *, class ed::allocator<struct aiNode *>> &);

    // RVA: 0x1B7 | Ordinal: 440
        void on_node_change(char const *, int, bool, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &);

    // RVA: 0x1BA | Ordinal: 443
        void plot_3_values(char const *, char const **, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &, class ed::vector<float, class ed::allocator<float>> &);

    // RVA: 0x1BF | Ordinal: 448
        void process_hierarchy(struct aiNode *);

    // RVA: 0x1D2 | Ordinal: 467
        void render_blended_skeleton(int, float, int, float, float, class osg::Matrixf const &, class osg::Vec4f const &);

    // RVA: 0x1D6 | Ordinal: 471
        void render_skeleton(int, float, class osg::Matrixf const &, class osg::Vec4f const &);

    // RVA: 0x1D7 | Ordinal: 472
        void resample_animation(struct aiAnimation *);

    // RVA: 0x1DA | Ordinal: 475
        void reset_ik_transforms(bool);

    // RVA: 0x1DE | Ordinal: 479
        void sample_animation(int, int, float, class osg::Vec3f const &, class osg::Quatf *, class osg::Vec3f *);

    // RVA: 0x1F4 | Ordinal: 501
        void set_channel_matrix(struct aiNodeAnim *, int, class aiMatrix4x4t<float> const &);

    // RVA: 0x1FF | Ordinal: 512
        void set_effector(class ed::basic_string<char> const &, class osg::Matrixf const &, bool, bool);

    // RVA: 0x216 | Ordinal: 535
        void set_solver_pose(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> const &, bool);

    // RVA: 0x217 | Ordinal: 536
        void set_solver_pose(void);

    // RVA: 0x220 | Ordinal: 545
        void solve_ik(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> &, class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> *);

    // RVA: 0x23D | Ordinal: 574
        void update_pose(void);

    // RVA: 0x244 | Ordinal: 581
        void validate_animation(struct aiAnimation *);

    // RVA: 0x246 | Ordinal: 583
        void wait(void);

    // RVA: 0x2B | Ordinal: 44
        void _AnimationManager(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_ANIMATIONMANAGER_HPP
