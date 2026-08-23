#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: SpaceRenderer.dll
// Class: SpaceRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SpaceRenderer
{
public:

    // RVA: 0x2 | Ordinal: 3
        void SpaceRenderer(void);

    // RVA: 0x6 | Ordinal: 7
        void createSpaceRendererInstance(void);

    // RVA: 0x7 | Ordinal: 8
        void done(void);

    // RVA: 0x8 | Ordinal: 9
        void draw(class osg::Vec3f const &, class osg::Vec3f const &, class osg::Vec3f const &, class osg::Matrixf, float, bool);

    // RVA: 0x9 | Ordinal: 10
        void draw(void);

    // RVA: 0xE | Ordinal: 15
        void getInstance(void);

    // RVA: 0xF | Ordinal: 16
        void getMoonTransform(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x10 | Ordinal: 17
        void getShiftTimeSunDir(float, class osg::Vec3f &, class osg::Vec3f &);

    // RVA: 0x11 | Ordinal: 18
        void init(void);

    // RVA: 0x14 | Ordinal: 21
        void setGraphicState(struct SpaceState const &);

    // RVA: 0x16 | Ordinal: 23
        void update(class osg::Vec3d const &);

    // RVA: 0x4 | Ordinal: 5
        void _SpaceRenderer(void);
};

// DCS_OPS_RE_SPACERENDERER.DLL_SPACERENDERER_HPP
