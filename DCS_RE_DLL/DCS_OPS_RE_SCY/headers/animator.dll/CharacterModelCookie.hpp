#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator.dll
// Class: CharacterModelCookie
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Animator {

class CharacterModelCookie
{
public:

    // RVA: 0x14 | Ordinal: 21
        void CharacterModelCookie(class Animator::CharacterModelCookie const &);

    // RVA: 0x15 | Ordinal: 22
        void CharacterModelCookie(class Animator::CharacterModelStatic *);

    // RVA: 0x8B | Ordinal: 140
        void _get_node_matrix(float, int, bool, int);

    // RVA: 0xB0 | Ordinal: 177
        void add_gpu_attachment(class std::unique_ptr<class model::ModelCookie, struct model::ModelCookieDeleter> &&);

    // RVA: 0xC1 | Ordinal: 194
        void clear_data(void);

    // RVA: 0xC3 | Ordinal: 196
        void clone(void) const;

    // RVA: 0xCF | Ordinal: 208
        void deserialize_state(class Mail::Message const &);

    // RVA: 0xD6 | Ordinal: 215
        void destroy(void);

    // RVA: 0xE3 | Ordinal: 228
        void erase_animation(class ed::basic_string<char> const &);

    // RVA: 0xF3 | Ordinal: 244
        void getType(void) const;

    // RVA: 0xF5 | Ordinal: 246
        void get_active_blend_spaces(float, bool);

    // RVA: 0xF9 | Ordinal: 250
        void get_animation(float);

    // RVA: 0x104 | Ordinal: 261
        void get_arg(int) const;

    // RVA: 0x106 | Ordinal: 263
        void get_bit(int);

    // RVA: 0x112 | Ordinal: 275
        void get_compute_type(void);

    // RVA: 0x115 | Ordinal: 278
        void get_correction(float);

    // RVA: 0x117 | Ordinal: 280
        void get_current_blend_space_id(float);

    // RVA: 0x121 | Ordinal: 290
        void get_direct_pose_control(void);

    // RVA: 0x122 | Ordinal: 291
        void get_dirty(void);

    // RVA: 0x129 | Ordinal: 298
        void get_flags(void);

    // RVA: 0x12F | Ordinal: 304
        void get_id(void);

    // RVA: 0x13A | Ordinal: 315
        void get_model(void);

    // RVA: 0x13C | Ordinal: 317
        void get_model_reflection(void);

    // RVA: 0x142 | Ordinal: 323
        void get_name(void);

    // RVA: 0x145 | Ordinal: 326
        void get_node_id(class ed::basic_string<char> const &);

    // RVA: 0x149 | Ordinal: 330
        void get_node_matrix(float, int, int);

    // RVA: 0x15C | Ordinal: 349
        void get_override_animation(void);

    // RVA: 0x163 | Ordinal: 356
        void get_pose(float, int, bool);

    // RVA: 0x164 | Ordinal: 357
        void get_pose(void);

    // RVA: 0x16A | Ordinal: 363
        void get_random_value(void);

    // RVA: 0x16B | Ordinal: 364
        void get_reflection_model_changed(void);

    // RVA: 0x16D | Ordinal: 366
        void get_remove_root(void);

    // RVA: 0x174 | Ordinal: 373
        void get_root_matrix(float, int);

    // RVA: 0x181 | Ordinal: 386
        void get_skeleton(float, class osg::Vec3f, int, bool);

    // RVA: 0x187 | Ordinal: 392
        void get_speed(float);

    // RVA: 0x189 | Ordinal: 394
        void get_stack(void);

    // RVA: 0x18A | Ordinal: 395
        void get_stack_size(void);

    // RVA: 0x19F | Ordinal: 416
        void has_override_animation(void);

    // RVA: 0x1B9 | Ordinal: 442
        void parse_attachments(struct render::CollectionInfo const *, class wPosition3<float>, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> *);

    // RVA: 0x1BD | Ordinal: 446
        void print_stack(void);

    // RVA: 0x1C3 | Ordinal: 452
        void push_animation(struct Animator::ShaderAnimation const &, bool);

    // RVA: 0x1C5 | Ordinal: 454
        void reflection(void);

    // RVA: 0x1CC | Ordinal: 461
        void remove_blend_space(int);

    // RVA: 0x1DC | Ordinal: 477
        void restore_model_state(class Mail::Message const &);

    // RVA: 0x1E2 | Ordinal: 483
        void serialize_model_state(void);

    // RVA: 0x1E4 | Ordinal: 485
        void serialize_state(void);

    // RVA: 0x1E9 | Ordinal: 490
        void setLiveryHandle(unsigned int);

    // RVA: 0x1EB | Ordinal: 492
        void set_animation(class ed::basic_string<char> const &, float, bool, bool);

    // RVA: 0x1EC | Ordinal: 493
        void set_animation(int, float, bool, bool);

    // RVA: 0x1ED | Ordinal: 494
        void set_arg(int, float);

    // RVA: 0x1EF | Ordinal: 496
        void set_bit(int, bool);

    // RVA: 0x1F6 | Ordinal: 503
        void set_compute_type(enum Animator::InstanceData::ANIM_COMPUTE_TYPE);

    // RVA: 0x1FA | Ordinal: 507
        void set_decal_index(unsigned char, unsigned char);

    // RVA: 0x1FB | Ordinal: 508
        void set_direct_pose_control(bool);

    // RVA: 0x1FC | Ordinal: 509
        void set_dirty(bool);

    // RVA: 0x204 | Ordinal: 517
        void set_flags(int);

    // RVA: 0x206 | Ordinal: 519
        void set_idle(float, class ed::basic_string<char> const &);

    // RVA: 0x20A | Ordinal: 523
        void set_name(class ed::basic_string<char> const &);

    // RVA: 0x20B | Ordinal: 524
        void set_node_matrix(class ed::basic_string<char> const &, class osg::Matrixf const &);

    // RVA: 0x20C | Ordinal: 525
        void set_node_matrix(int, class osg::Matrixf const &);

    // RVA: 0x20F | Ordinal: 528
        void set_override_animation(class ed::basic_string<char> const &, float);

    // RVA: 0x210 | Ordinal: 529
        void set_pose(class ed::vector<class osg::Matrixf, class ed::allocator<class osg::Matrixf>> const &, bool);

    // RVA: 0x213 | Ordinal: 532
        void set_remove_root(bool);

    // RVA: 0x218 | Ordinal: 537
        void set_stack(class ed::vector<struct Animator::ShaderAnimation, class ed::allocator<struct Animator::ShaderAnimation>> &);

    // RVA: 0x235 | Ordinal: 566
        void unset_override_animation(void);

    // RVA: 0x237 | Ordinal: 568
        void update(void);

    // RVA: 0x242 | Ordinal: 579
        void update_properties(float);

    // RVA: 0x30 | Ordinal: 49
        void _CharacterModelCookie(void);
};

} // namespace Animator

// DCS_OPS_RE_ANIMATOR.DLL_CHARACTERMODELCOOKIE_HPP
