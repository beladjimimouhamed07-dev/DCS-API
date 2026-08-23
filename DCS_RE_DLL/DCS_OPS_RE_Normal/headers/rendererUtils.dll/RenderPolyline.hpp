#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderPolyline
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderPolyline
{
public:

    // RVA: 0x12 | Ordinal: 19
        void RenderPolyline(void);

    // RVA: 0x5E | Ordinal: 95
        void discard(void);

    // RVA: 0x8B | Ordinal: 140
        void init(void);

    // RVA: 0xBD | Ordinal: 190
        void render(class osg::Matrixf const &, class osg::Vec4f const &, unsigned int, bool);

    // RVA: 0xBE | Ordinal: 191
        void render(class osg::Vec2d const *, int, class osg::Vec4f const &, unsigned int);

    // RVA: 0xBF | Ordinal: 192
        void render(class osg::Vec2d const *, int, float, class osg::Vec4f const &, unsigned int);

    // RVA: 0xC0 | Ordinal: 193
        void render(class osg::Vec3d const *, int, class osg::Matrixf const &, class osg::Vec4f const &, unsigned int, bool);

    // RVA: 0xC1 | Ordinal: 194
        void render(class osg::Vec3d const *, int, class osg::Matrixf const &, float, class osg::Vec4f const &, unsigned int);

    // RVA: 0xDD | Ordinal: 222
        void update(class osg::Vec3d const *, int);

    // RVA: 0x2F | Ordinal: 48
        void _RenderPolyline(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERPOLYLINE_HPP
