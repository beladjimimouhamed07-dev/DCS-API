#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: SpaceRenderer.dll
// Class: SpaceRendererInstance
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SpaceRendererInstance
{
public:

    // RVA: 0xA | Ordinal: 11
        void draw(class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Matrixf, float, float, bool);

    // RVA: 0x15 | Ordinal: 22
        void setGraphicState(struct SpaceState const &);
};

// DCS_OPS_RE_SPACERENDERER.DLL_SPACERENDERERINSTANCE_HPP
