#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: ViewerSceneHelper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ViewerSceneHelper
{
public:

    // RVA: 0x1C | Ordinal: 29
        void ViewerSceneHelper(void);

    // RVA: 0x3C | Ordinal: 61
        void addAxes(void);

    // RVA: 0x3D | Ordinal: 62
        void addBasis(float);

    // RVA: 0x3F | Ordinal: 64
        void addFloor(class osg::Matrixf const &);

    // RVA: 0x40 | Ordinal: 65
        void addFloor(float);

    // RVA: 0x41 | Ordinal: 66
        void addGrid(float, float, class osg::Matrixf const &);

    // RVA: 0x42 | Ordinal: 67
        void addSunDir(void);

    // RVA: 0x70 | Ordinal: 113
        void draw(class osg::Vec3f const &, class osg::Matrixf const &, class osg::Vec3f const &);

    // RVA: 0x71 | Ordinal: 114
        void draw(class osg::Vec3f const &, class osg::Matrixf const &, class osg::Vec3f const &, struct render::ViewerSceneHelper::OmniLightInfo *, int);

    // RVA: 0xA0 | Ordinal: 161
        void release(void);

    // RVA: 0x39 | Ordinal: 58
        void _ViewerSceneHelper(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_VIEWERSCENEHELPER_HPP
