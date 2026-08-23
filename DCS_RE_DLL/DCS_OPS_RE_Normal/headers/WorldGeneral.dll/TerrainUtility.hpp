#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TerrainUtility
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TerrainUtility
{
public:

    // RVA: 0x1B4 | Ordinal: 437
        void TerrainUtility(void);

    // RVA: 0x841 | Ordinal: 2114
        void getInstance(void);

    // RVA: 0x8EA | Ordinal: 2283
        void getRadioPathBarrier(void);

    // RVA: 0x942 | Ordinal: 2371
        void get_max_elevation_MT(struct edterrain::AsyncContextRequestAccess *, class osg::Vec3f const &, class osg::Vec3f const &, unsigned long);

    // RVA: 0x943 | Ordinal: 2372
        void get_max_elevation_ST(class osg::Vec3f const &, class osg::Vec3f const &, unsigned long);

    // RVA: 0xA8B | Ordinal: 2700
        void obtainIntersectionOfSurface(class ed::Ptr<class ElevationParameters, struct ElevationParametersDeleter>, class osg::Vec3d);

    // RVA: 0xA8C | Ordinal: 2701
        void obtainTrgVisibility(class ed::Ptr<class TargetVisibilityParameters, struct TargetVisibilityParametersDeleter>, class osg::Vec3d);

    // RVA: 0xA8D | Ordinal: 2702
        void obtain_elevation_results(class ed::Ptr<class ElevationParameters, struct ElevationParametersDeleter>);

    // RVA: 0xB71 | Ordinal: 2930
        void requestCheckTrgVisibility(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d, class MovingObject *, class MovingObject *, bool);

    // RVA: 0xB72 | Ordinal: 2931
        void requestIntersectSurface(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d);

    // RVA: 0xB77 | Ordinal: 2936
        void request_max_elevation(class osg::Vec3f const &, class osg::Vec3f const &, unsigned long);

    // RVA: 0xB78 | Ordinal: 2937
        void request_max_elevation_in_sector(class osg::Vec3f const &, class osg::Vec3f const &, float, float, unsigned long);

    // RVA: 0xB79 | Ordinal: 2938
        void request_max_elevation_in_sector(class osg::Vec3f const &, float, float, float, float, unsigned long);

    // RVA: 0xC11 | Ordinal: 3090
        void start(void);

    // RVA: 0xC17 | Ordinal: 3096
        void startTimers(void);

    // RVA: 0xC1F | Ordinal: 3104
        void stop(void);

    // RVA: 0x2BF | Ordinal: 704
        void _TerrainUtility(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_TERRAINUTILITY_HPP
