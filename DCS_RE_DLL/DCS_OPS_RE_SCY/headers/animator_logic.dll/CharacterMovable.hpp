#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: CharacterMovable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class CharacterMovable
{
public:

    // RVA: 0x8 | Ordinal: 9
        void CharacterMovable(class viObjectNode *, class Lua::Config &);

    // RVA: 0x9 | Ordinal: 10
        void CharacterMovable(class viObjectNode *, char const *, class wPosition3<double> const &, float);

    // RVA: 0x6C | Ordinal: 109
        void _construct(void);

    // RVA: 0x6F | Ordinal: 112
        void _estimate_stop(float, class wPosition3<float> const &, class wPosition3<float> const &, class osg::Vec2f const &);

    // RVA: 0x71 | Ordinal: 114
        void _load_routes(class Lua::Config &);

    // RVA: 0x73 | Ordinal: 116
        void _move_animation(float, class wPosition3<float> const &, class wPosition3<float> const &, float, class osg::Vec2f);

    // RVA: 0x75 | Ordinal: 118
        void _schedule_stopping_animation(float, class ed::basic_string<char> const &, float, float);

    // RVA: 0x76 | Ordinal: 119
        void _schedule_stopping_animation(float, class Animator::Animation *, float, float);

    // RVA: 0x84 | Ordinal: 133
        void debug_draw(class wPosition3<double> const &);

    // RVA: 0x8D | Ordinal: 142
        void estimate_stop(float, class wPosition3<float> const &, class wPosition3<float> const &, class osg::Vec2f const &);

    // RVA: 0x95 | Ordinal: 150
        void get_anim_stack(void);

    // RVA: 0x97 | Ordinal: 152
        void get_animation_speed(float);

    // RVA: 0xA8 | Ordinal: 169
        void get_controller(void);

    // RVA: 0xA9 | Ordinal: 170
        void get_current_goal(void);

    // RVA: 0xAB | Ordinal: 172
        void get_current_state_name(float);

    // RVA: 0xAC | Ordinal: 173
        void get_debug_data(void);

    // RVA: 0xB4 | Ordinal: 181
        void get_final_goal(void);

    // RVA: 0xBE | Ordinal: 191
        void get_movement_options(void) const;

    // RVA: 0xC1 | Ordinal: 194
        void get_net_phantom(void);

    // RVA: 0xC3 | Ordinal: 196
        void get_net_state(void) const;

    // RVA: 0xC4 | Ordinal: 197
        void get_net_state_ref(void);

    // RVA: 0xCA | Ordinal: 203
        void get_path_finder(void) const;

    // RVA: 0xD0 | Ordinal: 209
        void get_pref_velocity(void);

    // RVA: 0xD9 | Ordinal: 218
        void get_root_matrix(float);

    // RVA: 0xDA | Ordinal: 219
        void get_route(int);

    // RVA: 0xDB | Ordinal: 220
        void get_safe(void);

    // RVA: 0xDF | Ordinal: 224
        void get_state(void);

    // RVA: 0xE7 | Ordinal: 232
        void get_velocity(void);

    // RVA: 0xF3 | Ordinal: 244
        void has_goal(void);

    // RVA: 0xF5 | Ordinal: 246
        void has_routes(void);

    // RVA: 0xF8 | Ordinal: 249
        void init(void);

    // RVA: 0xFF | Ordinal: 256
        void interpolate_pos(class osg::Matrixd &, float);

    // RVA: 0x10A | Ordinal: 267
        void move_command(float, class wPosition3<float> const &, class wPosition3<float> const &, class std::function<void __cdecl(void)>, class std::function<void __cdecl(class ed::basic_string<char> const &, class osg::Vec4f const &)>, class ed::vector<class osg::Vec2f, class ed::allocator<class osg::Vec2f>> const &);

    // RVA: 0x10B | Ordinal: 268
        void move_command_world(class wPosition3<float> const &);

    // RVA: 0x10C | Ordinal: 269
        void net_send_end_stop(void);

    // RVA: 0x10D | Ordinal: 270
        void net_send_start_move(class osg::Vec4f, class osg::Vec4f);

    // RVA: 0x10E | Ordinal: 271
        void net_send_start_stop(void);

    // RVA: 0x110 | Ordinal: 273
        void net_update(float);

    // RVA: 0x111 | Ordinal: 274
        void notify_net_move(void);

    // RVA: 0x112 | Ordinal: 275
        void notify_net_stop(void);

    // RVA: 0x117 | Ordinal: 280
        void on_set_position(class wPosition3<float> const &);

    // RVA: 0x12F | Ordinal: 304
        void reset(void);

    // RVA: 0x131 | Ordinal: 306
        void schedule_stop_animation(float, class ed::basic_string<char> const &, float, float);

    // RVA: 0x132 | Ordinal: 307
        void send_last_msg(int);

    // RVA: 0x133 | Ordinal: 308
        void send_pos_sync(class Mail::Writer &, bool);

    // RVA: 0x146 | Ordinal: 327
        void set_movement_options(struct AnimatorLogic::MovementOptions const &);

    // RVA: 0x147 | Ordinal: 328
        void set_net_phantom(bool);

    // RVA: 0x14E | Ordinal: 335
        void set_path_finder(class AnimatorLogic::PathFinder *);

    // RVA: 0x151 | Ordinal: 338
        void set_remove_root(bool);

    // RVA: 0x152 | Ordinal: 339
        void set_safe(bool);

    // RVA: 0x156 | Ordinal: 343
        void set_state(enum AnimatorLogic::CharacterMovable::CharacterState);

    // RVA: 0x15C | Ordinal: 349
        void show_debug_info(bool);

    // RVA: 0x15D | Ordinal: 350
        void start_movement_animation(float, class wPosition3<float> const &, class wPosition3<float> const &, float, class osg::Vec2f);

    // RVA: 0x15F | Ordinal: 352
        void stop_move(void);

    // RVA: 0x160 | Ordinal: 353
        void sync_final_pos(class Mail::Reader &);

    // RVA: 0x161 | Ordinal: 354
        void sync_final_pos(class osg::Vec3f, float);

    // RVA: 0x162 | Ordinal: 355
        void sync_move_animation(float, class wPosition3<float> const &, class wPosition3<float> const &, float, class osg::Vec2f);

    // RVA: 0x163 | Ordinal: 356
        void sync_pos(float, class Mail::Reader &);

    // RVA: 0x164 | Ordinal: 357
        void sync_pos(float, class osg::Vec3f const &, class osg::Vec4f const &, class osg::Vec3f const &);

    // RVA: 0x165 | Ordinal: 358
        void sync_stop_anim(class Mail::Reader &);

    // RVA: 0x166 | Ordinal: 359
        void sync_stop_anim(float, class ed::basic_string<char> const &, float, float);

    // RVA: 0x16B | Ordinal: 364
        void update(bool);

    // RVA: 0x170 | Ordinal: 369
        void update_lights(void);

    // RVA: 0x177 | Ordinal: 376
        void update_position(float);

    // RVA: 0x26 | Ordinal: 39
        void _CharacterMovable(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_CHARACTERMOVABLE_HPP
