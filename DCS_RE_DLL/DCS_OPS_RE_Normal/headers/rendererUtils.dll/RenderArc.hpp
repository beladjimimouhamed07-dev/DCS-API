#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderArc
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderArc
{
public:

    // RVA: 0x3 | Ordinal: 4
        void RenderArc(void);

    // RVA: 0x50 | Ordinal: 81
        void discard(void);

    // RVA: 0x7F | Ordinal: 128
        void init(void);

    // RVA: 0xA1 | Ordinal: 162
        void render(unsigned int, class osg::Vec4f const &, float, unsigned int, class osg::Vec2d const &, class osg::Vec2d const &, float, float, float);

    // RVA: 0xA2 | Ordinal: 163
        void render(unsigned int, class osg::Vec4f const &, float, unsigned int, class osg::Vec3d const &, class osg::Vec3d const &, float, float, float, class osg::Matrixd const &, class osg::Matrixd const &);

    // RVA: 0x20 | Ordinal: 33
        void _RenderArc(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERARC_HPP
