#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: AnimatedCharacterBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class AnimatedCharacterBase
{
public:

    // RVA: 0x0 | Ordinal: 1
        void AnimatedCharacterBase(class viObjectNode *, class Lua::Config &);

    // RVA: 0x1 | Ordinal: 2
        void AnimatedCharacterBase(class viObjectNode *, char const *, class wPosition3<double> const &, float);

    // RVA: 0x60 | Ordinal: 97
        void GetPoint(void);

    // RVA: 0x62 | Ordinal: 99
        void GetPosition(void);

    // RVA: 0x64 | Ordinal: 101
        void LocalBox(double);

    // RVA: 0x66 | Ordinal: 103
        void Position(double);

    // RVA: 0x68 | Ordinal: 105
        void PrintTrace(void);

    // RVA: 0x69 | Ordinal: 106
        void SetDelayedRenderPosition(class wPosition3<float> const &, double);

    // RVA: 0x6A | Ordinal: 107
        void SetPosition(class wPosition3<float> const &);

    // RVA: 0x6B | Ordinal: 108
        void _construct(class viObjectNode *, char const *, class wPosition3<double> const &, float);

    // RVA: 0x72 | Ordinal: 115
        void _log_print(class std::basic_stringstream<char, struct std::char_traits<char>, class std::allocator<char>> &);

    // RVA: 0x77 | Ordinal: 120
        void add_attachment(class std::unique_ptr<class AnimatorLogic::CrewMemberAttachment, struct std::default_delete<class AnimatorLogic::CrewMemberAttachment>>);

    // RVA: 0x91 | Ordinal: 146
        void getPositionInParentSpace(double);

    // RVA: 0x96 | Ordinal: 151
        void get_animation_manager(void);

    // RVA: 0x9A | Ordinal: 155
        void get_attachment_id(class ed::basic_string<char> const &);

    // RVA: 0xB7 | Ordinal: 184
        void get_full_name(void);

    // RVA: 0xB8 | Ordinal: 185
        void get_id(void) const;

    // RVA: 0xBA | Ordinal: 187
        void get_initial_pos(void);

    // RVA: 0xBF | Ordinal: 192
        void get_name(void) const;

    // RVA: 0xC5 | Ordinal: 198
        void get_obj_id(void);

    // RVA: 0xC8 | Ordinal: 201
        void get_origin(void);

    // RVA: 0xC9 | Ordinal: 202
        void get_parent(void);

    // RVA: 0xCB | Ordinal: 204
        void get_position(void);

    // RVA: 0xCE | Ordinal: 207
        void get_position_matrix(void);

    // RVA: 0xD3 | Ordinal: 212
        void get_radius(void);

    // RVA: 0xD5 | Ordinal: 214
        void get_random(void);

    // RVA: 0xD6 | Ordinal: 215
        void get_registered(void);

    // RVA: 0xEE | Ordinal: 239
        void gui(void);

    // RVA: 0xF7 | Ordinal: 248
        void init(void);

    // RVA: 0xFE | Ordinal: 255
        void interpolate_pos(class osg::Matrixd &, float);

    // RVA: 0x109 | Ordinal: 266
        void local_position(void);

    // RVA: 0x10F | Ordinal: 272
        void net_update(float);

    // RVA: 0x114 | Ordinal: 277
        void on_post_parse(class Graphics::ModelParser &, class wPosition3<float> &);

    // RVA: 0x115 | Ordinal: 278
        void on_pre_parse(class Graphics::ModelParser &, class wPosition3<float> &);

    // RVA: 0x116 | Ordinal: 279
        void on_set_position(class wPosition3<float> const &);

    // RVA: 0x127 | Ordinal: 296
        void refresh_update_time(void);

    // RVA: 0x12E | Ordinal: 303
        void reset(void);

    // RVA: 0x134 | Ordinal: 309
        void set_animation(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x135 | Ordinal: 310
        void set_animation(int);

    // RVA: 0x139 | Ordinal: 314
        void set_attachment_arg(class ed::basic_string<char> const &, int, float);

    // RVA: 0x13C | Ordinal: 317
        void set_decal_index(unsigned char, unsigned char);

    // RVA: 0x13F | Ordinal: 320
        void set_id(int);

    // RVA: 0x140 | Ordinal: 321
        void set_idle(float, class ed::basic_string<char> const &);

    // RVA: 0x142 | Ordinal: 323
        void set_interpolated_position(float, class wPosition3<float> const &);

    // RVA: 0x148 | Ordinal: 329
        void set_origin(class wPosition3<float> const &);

    // RVA: 0x149 | Ordinal: 330
        void set_override_animation(class ed::basic_string<char> const &);

    // RVA: 0x14A | Ordinal: 331
        void set_override_animation(class osg::Vec2f const &);

    // RVA: 0x15A | Ordinal: 347
        void show_attachment(class ed::basic_string<char> const &, bool);

    // RVA: 0x15B | Ordinal: 348
        void show_attachment(unsigned char, bool);

    // RVA: 0x169 | Ordinal: 362
        void update(bool);

    // RVA: 0x16F | Ordinal: 368
        void update_cookie(float);

    // RVA: 0x23 | Ordinal: 36
        void _AnimatedCharacterBase(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_ANIMATEDCHARACTERBASE_HPP
