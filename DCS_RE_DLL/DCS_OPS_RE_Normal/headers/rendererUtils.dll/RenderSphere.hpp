#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rendererUtils.dll
// Class: RenderSphere
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderSphere
{
public:

    // RVA: 0x15 | Ordinal: 22
        void RenderSphere(float, float);

    // RVA: 0x61 | Ordinal: 98
        void discard(void);

    // RVA: 0x8E | Ordinal: 143
        void init(void);

    // RVA: 0xC7 | Ordinal: 200
        void render(class osg::Matrixd const &, double, class render::Texture &);

    // RVA: 0xC8 | Ordinal: 201
        void render(class osg::Matrixf const &, float, class osg::Vec4f const &, enum render::RASTER_FILL_MODE);

    // RVA: 0x32 | Ordinal: 51
        void _RenderSphere(void);
};

} // namespace render

// DCS_OPS_RE_RENDERERUTILS.DLL_RENDERSPHERE_HPP
