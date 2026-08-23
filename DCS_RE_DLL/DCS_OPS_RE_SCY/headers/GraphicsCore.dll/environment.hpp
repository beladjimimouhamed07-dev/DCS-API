#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: environment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class environment
{
public:

    // RVA: 0x175 | Ordinal: 374
        void getCubeFaceProjection(class osg::Matrixf &);

    // RVA: 0x1B5 | Ordinal: 438
        void getSurfaceCamera(class osg::Vec3f const &, class osg::Vec3f const &, class osg::Matrixf &, class osg::Matrixf &);

    // RVA: 0x206 | Ordinal: 519
        void loadCubeFromSixWalls(char const **const, class render::Texture &);

    // RVA: 0x207 | Ordinal: 520
        void loadCubeFromSphericalMap(char const *, class render::Texture &);

    // RVA: 0x208 | Ordinal: 521
        void loadPrefilteredCube(char const *, class render::Texture &, struct environment::EnvironmentCubeMetadata *);

    // RVA: 0x272 | Ordinal: 627
        void savePrefilteredCube(char const *, class render::Texture &, struct environment::EnvironmentCubeMetadata const *);
};

// DCS_OPS_RE_GRAPHICSCORE.DLL_ENVIRONMENT_HPP
