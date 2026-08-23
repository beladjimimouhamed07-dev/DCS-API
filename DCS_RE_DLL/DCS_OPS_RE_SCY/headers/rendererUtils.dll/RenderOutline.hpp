#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderOutline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderOutline
{
public:

    // RVA: 0xF | Ordinal: 16
        void RenderOutline(void);

    // RVA: 0x88 | Ordinal: 137
        void init(void);

    // RVA: 0x96 | Ordinal: 151
        void load(class ed::vector<struct render::RenderOutline::Outline, class ed::allocator<struct render::RenderOutline::Outline>> &);

    // RVA: 0xB9 | Ordinal: 186
        void render(void);

    // RVA: 0x2C | Ordinal: 45
        void _RenderOutline(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDEROUTLINE_HPP
