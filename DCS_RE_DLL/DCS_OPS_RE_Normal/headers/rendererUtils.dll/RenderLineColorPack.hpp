#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderLineColorPack
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderLineColorPack
{
public:

    // RVA: 0xB | Ordinal: 12
        void RenderLineColorPack(void);

    // RVA: 0x58 | Ordinal: 89
        void discard(void);

    // RVA: 0x85 | Ordinal: 134
        void init(void);

    // RVA: 0xB4 | Ordinal: 181
        void render(class osg::Vec4ui const *, int, class osg::Matrixf const &);

    // RVA: 0x28 | Ordinal: 41
        void _RenderLineColorPack(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERLINECOLORPACK_HPP
