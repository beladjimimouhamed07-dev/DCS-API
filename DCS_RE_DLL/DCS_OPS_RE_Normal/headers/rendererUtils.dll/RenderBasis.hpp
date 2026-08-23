#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderBasis
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderBasis
{
public:

    // RVA: 0x4 | Ordinal: 5
        void RenderBasis(void);

    // RVA: 0x51 | Ordinal: 82
        void discard(void);

    // RVA: 0x80 | Ordinal: 129
        void init(void);

    // RVA: 0xA3 | Ordinal: 164
        void render(double, class osg::Matrixf const &, class osg::Vec4f *);

    // RVA: 0x21 | Ordinal: 34
        void _RenderBasis(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERBASIS_HPP
