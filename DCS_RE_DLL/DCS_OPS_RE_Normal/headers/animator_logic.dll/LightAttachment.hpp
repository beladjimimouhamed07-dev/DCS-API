#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: LightAttachment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class LightAttachment
{
public:

    // RVA: 0x5F | Ordinal: 96
        void GetDrawArguments(void);

    // RVA: 0x15 | Ordinal: 22
        void LightAttachment(class AnimatorLogic::LightAttachment const &);

    // RVA: 0x16 | Ordinal: 23
        void LightAttachment(class viObjectNode *);

    // RVA: 0xBB | Ordinal: 188
        void get_light(void);

    // RVA: 0xDD | Ordinal: 222
        void get_shift(void);

    // RVA: 0xF2 | Ordinal: 243
        void gui(void);

    // RVA: 0xFC | Ordinal: 253
        void init(void);

    // RVA: 0x107 | Ordinal: 264
        void load(class Lua::Config &);

    // RVA: 0x11B | Ordinal: 284
        void on_set_visible(bool);

    // RVA: 0x11F | Ordinal: 288
        void parse(class Graphics::ModelInstance *, class wPosition3<float> const &, class Graphics::ModelParser &, class Graphics::effectState *);

    // RVA: 0x154 | Ordinal: 341
        void set_shift(class osg::Vec3f const &);

    // RVA: 0x176 | Ordinal: 375
        void update_pos(void);

    // RVA: 0x2C | Ordinal: 45
        void _LightAttachment(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_LIGHTATTACHMENT_HPP
