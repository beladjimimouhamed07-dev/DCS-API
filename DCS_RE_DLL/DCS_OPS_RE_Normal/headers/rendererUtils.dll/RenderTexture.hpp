#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderTexture
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderTexture
{
public:

    // RVA: 0x17 | Ordinal: 24
        void RenderTexture(void);

    // RVA: 0x3E | Ordinal: 63
        void addDefine(class render::DefinePair const &);

    // RVA: 0x63 | Ordinal: 100
        void discard(void);

    // RVA: 0x90 | Ordinal: 145
        void init(void);

    // RVA: 0xCB | Ordinal: 204
        void render(class osg::Vec2i const &, class osg::Vec2i const &, class render::Texture const &, int, class osg::Vec4f const &, float, bool);

    // RVA: 0xCC | Ordinal: 205
        void render(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d const &, class osg::Matrixd const &, class osg::Vec4f const &, class render::Texture const &, bool);

    // RVA: 0x34 | Ordinal: 53
        void _RenderTexture(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERTEXTURE_HPP
