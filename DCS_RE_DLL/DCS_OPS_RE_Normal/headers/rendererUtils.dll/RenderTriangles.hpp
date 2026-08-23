#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderTriangles
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderTriangles
{
public:

    // RVA: 0x18 | Ordinal: 25
        void RenderTriangles(void);

    // RVA: 0x64 | Ordinal: 101
        void discard(void);

    // RVA: 0x91 | Ordinal: 146
        void init(void);

    // RVA: 0xCD | Ordinal: 206
        void render(class osg::Vec2d const *, int, unsigned int const *, int, class osg::Vec4d const &, int);

    // RVA: 0xCE | Ordinal: 207
        void render(class osg::Vec3d const *, int, unsigned int const *, int, class osg::Vec4d const &, class osg::Matrixf const &, int);

    // RVA: 0xCF | Ordinal: 208
        void render(class osg::Vec3f const *, int, unsigned int const *, int, class osg::Vec4f const &, class osg::Matrixf const &, int, bool);

    // RVA: 0xD0 | Ordinal: 209
        void render(class osg::Vec3f const *, class osg::Vec2f const *, int, unsigned int const *, int, char const *, class osg::Matrixf const &, int, class osg::Vec4f const &, bool, int);

    // RVA: 0xD3 | Ordinal: 212
        void renderInstance(int, int, int, class osg::Vec4f const &, class osg::Matrixf const &, int, bool, int);

    // RVA: 0xDE | Ordinal: 223
        void update(class osg::Vec3f const *, int, unsigned int const *, int);

    // RVA: 0x35 | Ordinal: 54
        void _RenderTriangles(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERTRIANGLES_HPP
