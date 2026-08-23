#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderMoveManipulator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderMoveManipulator
{
public:

    // RVA: 0xC | Ordinal: 13
        void RenderMoveManipulator(void);

    // RVA: 0x59 | Ordinal: 90
        void discard(void);

    // RVA: 0x78 | Ordinal: 121
        void hitTest(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Matrixd const &, double);

    // RVA: 0x86 | Ordinal: 135
        void init(void);

    // RVA: 0xB5 | Ordinal: 182
        void render(class osg::Matrixd const &, class osg::Matrixd const &, double, class osg::Vec4f *const);

    // RVA: 0xD6 | Ordinal: 215
        void setEnabledAxis(int);

    // RVA: 0x29 | Ordinal: 42
        void _RenderMoveManipulator(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERMOVEMANIPULATOR_HPP
