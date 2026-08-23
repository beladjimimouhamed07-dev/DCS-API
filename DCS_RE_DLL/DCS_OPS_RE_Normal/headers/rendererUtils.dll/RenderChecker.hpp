#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderChecker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderChecker
{
public:

    // RVA: 0x6 | Ordinal: 7
        void RenderChecker(void);

    // RVA: 0x53 | Ordinal: 84
        void discard(void);

    // RVA: 0x82 | Ordinal: 131
        void init(void);

    // RVA: 0xA7 | Ordinal: 168
        void render(class osg::Vec2i const &, class osg::Vec2i const &, int, class osg::Vec4f const &);

    // RVA: 0x23 | Ordinal: 36
        void _RenderChecker(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERCHECKER_HPP
