#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderCone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderCone
{
public:

    // RVA: 0x7 | Ordinal: 8
        void RenderCone(void);

    // RVA: 0x54 | Ordinal: 85
        void discard(void);

    // RVA: 0xA8 | Ordinal: 169
        void render(class osg::Matrixf const &, float, float, float, class osg::Vec4f const &, unsigned int, unsigned int);

    // RVA: 0xD4 | Ordinal: 213
        void renderSector(class osg::Matrixf const &, float, float, float, float, class osg::Vec4f const &, unsigned int, unsigned int);

    // RVA: 0xD5 | Ordinal: 214
        void renderSector(class osg::Matrixf const &, float, float, float, float, float, float, class osg::Vec4f const &, unsigned int, unsigned int);

    // RVA: 0x24 | Ordinal: 37
        void _RenderCone(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERCONE_HPP
