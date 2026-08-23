#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderBox
{
public:

    // RVA: 0x5 | Ordinal: 6
        void RenderBox(void);

    // RVA: 0x52 | Ordinal: 83
        void discard(void);

    // RVA: 0x81 | Ordinal: 130
        void init(void);

    // RVA: 0xA4 | Ordinal: 165
        void render(class osg::BoundingBoxImpl<class osg::Vec3d> const &, class osg::Matrixf const &, class osg::Vec4f const &, enum render::RASTER_FILL_MODE, bool);

    // RVA: 0xA5 | Ordinal: 166
        void render(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Matrixf const &, class osg::Matrixf const &, class osg::Vec4f const &, enum render::RASTER_FILL_MODE);

    // RVA: 0xA6 | Ordinal: 167
        void render(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Matrixf const &, class osg::Vec4f const &, enum render::RASTER_FILL_MODE, bool);

    // RVA: 0x22 | Ordinal: 35
        void _RenderBox(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERBOX_HPP
