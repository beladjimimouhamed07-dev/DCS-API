#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderMultiPlotter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderMultiPlotter
{
public:

    // RVA: 0xD | Ordinal: 14
        void RenderMultiPlotter(void);

    // RVA: 0x5A | Ordinal: 91
        void discard(void);

    // RVA: 0x87 | Ordinal: 136
        void init(int, int, int, float, float);

    // RVA: 0x99 | Ordinal: 154
        void plot(int, float);

    // RVA: 0xB6 | Ordinal: 183
        void render(class osg::Vec2i const &, class osg::Vec2i const &, class osg::Vec4f const &, class ed::vector<class osg::Vec4f, class ed::allocator<class osg::Vec4f>> const &);

    // RVA: 0x2A | Ordinal: 43
        void _RenderMultiPlotter(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERMULTIPLOTTER_HPP
