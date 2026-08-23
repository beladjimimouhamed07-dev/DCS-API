#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: BuilderRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FumeFX {

class BuilderRenderer
{
public:

    // RVA: 0x0 | Ordinal: 1
        void BuilderRenderer(class FumeFX::Builder &);

    // RVA: 0x39 | Ordinal: 58
        void drawBoundingBox(class render::RenderBox &, class osg::Matrixf const &, class osg::Vec4f const &) const;

    // RVA: 0x3A | Ordinal: 59
        void drawCachedSmoke(class render::RenderPoints &, unsigned int, class osg::Matrixf const &, class osg::Vec4f const &) const;

    // RVA: 0x3B | Ordinal: 60
        void drawCachedTemp(class render::RenderPoints &, unsigned int, class osg::Matrixf const &, class osg::Vec4f const &) const;

    // RVA: 0x3C | Ordinal: 61
        void drawCachedVelocities(class render::RenderLine &, unsigned int, class osg::Matrixf const &, class osg::Vec4f const &) const;

    // RVA: 0x3E | Ordinal: 63
        void drawSplines(class render::RenderLine &, unsigned int, class ed::vector<struct FumeFX::Builder::Spline, class ed::allocator<struct FumeFX::Builder::Spline>> const &, class osg::Matrixf const &, class osg::Vec4f const &, unsigned int, unsigned int) const;
};

} // namespace FumeFX

// DCS_OPS_RE_EFFECTS2.DLL_BUILDERRENDERER_HPP
