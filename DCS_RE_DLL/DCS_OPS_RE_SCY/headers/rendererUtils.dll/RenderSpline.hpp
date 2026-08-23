#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderSpline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderSpline
{
public:

    // RVA: 0x16 | Ordinal: 23
        void RenderSpline(void);

    // RVA: 0x62 | Ordinal: 99
        void discard(void);

    // RVA: 0x8F | Ordinal: 144
        void init(void);

    // RVA: 0xC9 | Ordinal: 202
        void render(class osg::Vec3d const *, int, float, class osg::Vec4f const &, float, unsigned int);

    // RVA: 0xCA | Ordinal: 203
        void render(class osg::Vec4d const *, int, float, class osg::Vec4f const &, float, unsigned int, class osg::Matrixd const &);

    // RVA: 0x33 | Ordinal: 52
        void _RenderSpline(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERSPLINE_HPP
