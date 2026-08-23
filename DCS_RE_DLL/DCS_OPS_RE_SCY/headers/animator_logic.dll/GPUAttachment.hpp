#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: animator_logic.dll
// Class: GPUAttachment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AnimatorLogic {

class GPUAttachment
{
public:

    // RVA: 0xF | Ordinal: 16
        void GPUAttachment(class AnimatorLogic::GPUAttachment const &);

    // RVA: 0x10 | Ordinal: 17
        void GPUAttachment(class viObjectNode *);

    // RVA: 0xFA | Ordinal: 251
        void init(void);

    // RVA: 0x105 | Ordinal: 262
        void load(class Lua::Config &);

    // RVA: 0x11A | Ordinal: 283
        void on_set_visible(bool);

    // RVA: 0x11D | Ordinal: 286
        void parse(class Graphics::ModelInstance *, class wPosition3<float> const &, class Graphics::ModelParser &, class Graphics::effectState *);

    // RVA: 0x137 | Ordinal: 312
        void set_arg(int, float);

    // RVA: 0x144 | Ordinal: 325
        void set_livery(float);

    // RVA: 0x174 | Ordinal: 373
        void update_pos(void);

    // RVA: 0x29 | Ordinal: 42
        void _GPUAttachment(void);
};

} // namespace AnimatorLogic

// DCS_OPS_RE_ANIMATOR_LOGIC.DLL_GPUATTACHMENT_HPP
