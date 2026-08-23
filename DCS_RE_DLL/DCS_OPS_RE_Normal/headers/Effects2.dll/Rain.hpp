#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: Rain
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class Rain
{
public:

    // RVA: 0x8 | Ordinal: 9
        void Rain(class Effects::Rain const &);

    // RVA: 0x9 | Ordinal: 10
        void Rain(void);

    // RVA: 0x29 | Ordinal: 42
        void applyAdditionalLighting(struct render::SceneRenderContext const *);

    // RVA: 0x2F | Ordinal: 48
        void collectCells(class osg::Vec3d const &, class osg::Vec3f const &, class osg::Matrixf const &);

    // RVA: 0x30 | Ordinal: 49
        void collectInstances(class osg::Vec3d const &, class osg::Vec3f const &, class osg::Matrixf const &);

    // RVA: 0x36 | Ordinal: 55
        void draw(void);

    // RVA: 0x37 | Ordinal: 56
        void draw(float, float, float, class osg::Vec3d const &, class osg::Vec3f const &, class osg::Matrixf const &, class osg::Matrixf const &, bool);

    // RVA: 0x38 | Ordinal: 57
        void draw(struct render::SceneRenderContext const *, float, float, float);

    // RVA: 0x64 | Ordinal: 101
        void init(enum Effects::Rain::PrecipitationType);

    // RVA: 0x77 | Ordinal: 120
        void release(void);

    // RVA: 0x7D | Ordinal: 126
        void reset(void);

    // RVA: 0x8E | Ordinal: 143
        void update(float, float, float, class osg::Vec3d const &, class osg::Vec3f const &, class osg::Matrixf const &, bool);

    // RVA: 0x14 | Ordinal: 21
        void _Rain(void);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS2.DLL_RAIN_HPP
