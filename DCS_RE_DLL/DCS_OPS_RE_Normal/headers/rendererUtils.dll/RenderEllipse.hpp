#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderEllipse
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderEllipse
{
public:

    // RVA: 0x9 | Ordinal: 10
        void RenderEllipse(void);

    // RVA: 0x56 | Ordinal: 87
        void discard(void);

    // RVA: 0x83 | Ordinal: 132
        void init(void);

    // RVA: 0xAA | Ordinal: 171
        void render(unsigned int, class osg::Vec4f const &, float, unsigned int, class osg::Vec2d const &, class osg::Vec2d const &, float);

    // RVA: 0xAB | Ordinal: 172
        void render(unsigned int, class osg::Vec4f const &, float, unsigned int, class osg::Vec3d const &, class osg::Vec3d const &, float, class osg::Matrixd const &, class osg::Matrixd const &);

    // RVA: 0x26 | Ordinal: 39
        void _RenderEllipse(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERELLIPSE_HPP
