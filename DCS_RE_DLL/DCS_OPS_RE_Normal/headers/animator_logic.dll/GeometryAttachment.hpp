#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: GeometryAttachment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class GeometryAttachment
{
public:

    // RVA: 0x11 | Ordinal: 18
        void GeometryAttachment(class AnimatorLogic::GeometryAttachment const &);

    // RVA: 0x12 | Ordinal: 19
        void GeometryAttachment(class viObjectNode *);

    // RVA: 0x5E | Ordinal: 95
        void GetDrawArguments(void);

    // RVA: 0x98 | Ordinal: 153
        void get_arg(int);

    // RVA: 0x99 | Ordinal: 154
        void get_arg_count(void);

    // RVA: 0xF1 | Ordinal: 242
        void gui(void);

    // RVA: 0xFB | Ordinal: 252
        void init(void);

    // RVA: 0x106 | Ordinal: 263
        void load(class Lua::Config &);

    // RVA: 0x11E | Ordinal: 287
        void parse(class Graphics::ModelInstance *, class wPosition3<float> const &, class Graphics::ModelParser &, class Graphics::effectState *);

    // RVA: 0x122 | Ordinal: 291
        void prepareForRendering(void);

    // RVA: 0x138 | Ordinal: 313
        void set_arg(int, float);

    // RVA: 0x175 | Ordinal: 374
        void update_pos(void);

    // RVA: 0x2A | Ordinal: 43
        void _GeometryAttachment(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_GEOMETRYATTACHMENT_HPP
