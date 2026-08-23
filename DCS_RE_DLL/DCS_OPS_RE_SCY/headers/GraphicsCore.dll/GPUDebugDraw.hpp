#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: GPUDebugDraw
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class GPUDebugDraw
{
public:

    // RVA: 0x119 | Ordinal: 282
        void bind(class render::Shader &, struct ed::array<unsigned __int64, 5> const &);

    // RVA: 0x20C | Ordinal: 525
        void locateAndBind(class render::Shader &);

    // RVA: 0x20D | Ordinal: 526
        void locateHandles(class render::Shader const &);

    // RVA: 0x283 | Ordinal: 644
        void setCursorPosition(class osg::Vec2i);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_GPUDEBUGDRAW_HPP
