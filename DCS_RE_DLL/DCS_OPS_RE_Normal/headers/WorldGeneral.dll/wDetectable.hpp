#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wDetectable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDetectable
{
public:

    // RVA: 0x82F | Ordinal: 2096
        void getEmissionFrequencies(void) const;

    // RVA: 0x839 | Ordinal: 2106
        void getIllumination(class osg::Vec3f const &) const;

    // RVA: 0x8D6 | Ordinal: 2263
        void getOuterSourceIllumination(class MovingObject *) const;

    // RVA: 0x8E3 | Ordinal: 2276
        void getRCS(float, class osg::Vec3f const &) const;

    // RVA: 0x8E9 | Ordinal: 2282
        void getRadiationToTarget(unsigned int, float &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *) const;

    // RVA: 0x8FE | Ordinal: 2303
        void getTargetResolutionDistance(class MovingObject *) const;

    // RVA: 0x904 | Ordinal: 2309
        void getTemperature(class osg::Vec3f const &) const;

    // RVA: 0x905 | Ordinal: 2310
        void getTemperature(float) const;

    // RVA: 0x910 | Ordinal: 2321
        void getVolumeEffectBox(class Math::Box<2, float> *) const;

    // RVA: 0x1E6 | Ordinal: 487
        void wDetectable(class wDetectable const &);

    // RVA: 0x1E7 | Ordinal: 488
        void wDetectable(void);

    // RVA: 0x2D1 | Ordinal: 722
        void _wDetectable(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WDETECTABLE_HPP
