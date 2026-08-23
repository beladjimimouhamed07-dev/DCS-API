#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderPoints
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderPoints
{
public:

    // RVA: 0x11 | Ordinal: 18
        void RenderPoints(void);

    // RVA: 0x5D | Ordinal: 94
        void discard(void);

    // RVA: 0x8A | Ordinal: 139
        void init(void);

    // RVA: 0xBB | Ordinal: 188
        void render(class osg::Vec3d const *, int, float, class osg::Matrixf const &, class osg::Vec4f const &, unsigned int);

    // RVA: 0xBC | Ordinal: 189
        void render(class osg::Vec3f const *, int, float, class osg::Matrixf const &, class osg::Vec4f const &, unsigned int);

    // RVA: 0x2E | Ordinal: 47
        void _RenderPoints(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERPOINTS_HPP
