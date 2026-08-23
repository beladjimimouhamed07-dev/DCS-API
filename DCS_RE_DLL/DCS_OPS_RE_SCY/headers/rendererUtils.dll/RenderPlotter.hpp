#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderPlotter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderPlotter
{
public:

    // RVA: 0x10 | Ordinal: 17
        void RenderPlotter(void);

    // RVA: 0x5C | Ordinal: 93
        void discard(void);

    // RVA: 0x89 | Ordinal: 138
        void init(int, int, float, float);

    // RVA: 0x9A | Ordinal: 155
        void plot(float);

    // RVA: 0xBA | Ordinal: 187
        void render(class osg::Vec2i const &, class osg::Vec2i const &, class osg::Vec4f const &, class osg::Vec4f const &);

    // RVA: 0x2D | Ordinal: 46
        void _RenderPlotter(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERPLOTTER_HPP
