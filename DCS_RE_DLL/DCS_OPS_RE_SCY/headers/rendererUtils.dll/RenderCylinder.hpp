#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderCylinder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderCylinder
{
public:

    // RVA: 0x8 | Ordinal: 9
        void RenderCylinder(float);

    // RVA: 0x55 | Ordinal: 86
        void discard(void);

    // RVA: 0xA9 | Ordinal: 170
        void render(class osg::Matrixf const &, float, float, float, float, class osg::Vec4f const &);

    // RVA: 0x25 | Ordinal: 38
        void _RenderCylinder(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERCYLINDER_HPP
