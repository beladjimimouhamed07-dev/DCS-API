#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects.dll
// Class: ODCSEnvironment2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class ODCSEnvironment2
{
public:

    // RVA: 0x2 | Ordinal: 3
        void ODCSEnvironment2(struct Effects::ODCSEnvironment2 &&);

    // RVA: 0x3 | Ordinal: 4
        void ODCSEnvironment2(struct Effects::ODCSEnvironment2 const &);

    // RVA: 0x4 | Ordinal: 5
        void ODCSEnvironment2(void);

    // RVA: 0x20 | Ordinal: 33
        void createLightOmni(class osg::Vec3d const &, class osg::Vec3f const &, float);

    // RVA: 0x21 | Ordinal: 34
        void createLightSpot(class wPosition3<float> const &, class osg::Vec3f const &, float, float, float, float);

    // RVA: 0x22 | Ordinal: 35
        void destroyLight(class Effects::OLight *);

    // RVA: 0x26 | Ordinal: 39
        void getModelTime(void) const;

    // RVA: 0x27 | Ordinal: 40
        void getWind(class osg::Vec3d const &) const;

    // RVA: 0x28 | Ordinal: 41
        void hasFeature(enum Effects::ORenderingFeature) const;

    // RVA: 0x2A | Ordinal: 43
        void isOnPause(void) const;

    // RVA: 0x2F | Ordinal: 48
        void setIsOnPause(bool);

    // RVA: 0x30 | Ordinal: 49
        void setModelTime(double);

    // RVA: 0x31 | Ordinal: 50
        void setSceneProxy(class DCSSceneProxy *);

    // RVA: 0x33 | Ordinal: 52
        void setWindVerticalProfiles(unsigned int, class osg::Vec3f const **const, class osg::Vec3f const *const, unsigned int, float const *const);

    // RVA: 0x7 | Ordinal: 8
        void _ODCSEnvironment2(void);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS.DLL_ODCSENVIRONMENT2_HPP
