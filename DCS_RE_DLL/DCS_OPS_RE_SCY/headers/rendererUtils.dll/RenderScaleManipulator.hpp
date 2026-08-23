#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderScaleManipulator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderScaleManipulator
{
public:

    // RVA: 0x14 | Ordinal: 21
        void RenderScaleManipulator(void);

    // RVA: 0x60 | Ordinal: 97
        void discard(void);

    // RVA: 0x79 | Ordinal: 122
        void hitTest(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Matrixd const &, double);

    // RVA: 0x8D | Ordinal: 142
        void init(void);

    // RVA: 0xC6 | Ordinal: 199
        void render(class osg::Matrixd const &, class osg::Matrixd const &, double, class osg::Vec4f *const);

    // RVA: 0xD7 | Ordinal: 216
        void setEnabledAxis(int);

    // RVA: 0x31 | Ordinal: 50
        void _RenderScaleManipulator(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERSCALEMANIPULATOR_HPP
