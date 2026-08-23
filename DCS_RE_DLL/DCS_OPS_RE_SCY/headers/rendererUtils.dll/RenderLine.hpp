#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderLine
{
public:

    // RVA: 0xA | Ordinal: 11
        void RenderLine(void);

    // RVA: 0x57 | Ordinal: 88
        void discard(void);

    // RVA: 0x84 | Ordinal: 133
        void init(void);

    // RVA: 0xAC | Ordinal: 173
        void render(class osg::Vec2d const *, int, class osg::Vec4f const &, unsigned int);

    // RVA: 0xAD | Ordinal: 174
        void render(class osg::Vec2d const *, int, float, class osg::Vec4f const &, unsigned int);

    // RVA: 0xAE | Ordinal: 175
        void render(class osg::Vec2f const *, int, class osg::Vec4f const &, unsigned int);

    // RVA: 0xAF | Ordinal: 176
        void render(class osg::Vec3d const *, int, class osg::Matrixf const &, class osg::Vec4f const &, unsigned int, bool);

    // RVA: 0xB0 | Ordinal: 177
        void render(class osg::Vec3d const *, int, class osg::Matrixf const &, float, class osg::Vec4f const &, unsigned int);

    // RVA: 0xB1 | Ordinal: 178
        void render(class osg::Vec3d const *, int, unsigned int const *, int, class osg::Matrixf const &, class osg::Vec4f const &);

    // RVA: 0xB2 | Ordinal: 179
        void render(class osg::Vec3f const *, int, class osg::Matrixf const &, class osg::Vec4f const &, unsigned int, bool);

    // RVA: 0xB3 | Ordinal: 180
        void render(class osg::Vec3f const *, int, unsigned int const *, int, class osg::Matrixf const &, class osg::Vec4f const &);

    // RVA: 0x27 | Ordinal: 40
        void _RenderLine(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERLINE_HPP
