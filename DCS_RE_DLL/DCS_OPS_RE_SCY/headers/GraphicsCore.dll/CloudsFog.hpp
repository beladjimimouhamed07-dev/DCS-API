#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: CloudsFog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class CloudsFog
{
public:

    // RVA: 0x7 | Ordinal: 8
        void CloudsFog(float, float);

    // RVA: 0x8 | Ordinal: 9
        void CloudsFog(float, float, float, float, float);

    // RVA: 0x16F | Ordinal: 368
        void getColorFactor(void) const;

    // RVA: 0x17A | Ordinal: 379
        void getDensity(class osg::Vec3f, class osg::Vec3f, float) const;

    // RVA: 0x17B | Ordinal: 380
        void getDensityFactor(void);

    // RVA: 0x186 | Ordinal: 391
        void getFogDensity(class osg::Vec3f, class osg::Vec3f, float) const;

    // RVA: 0x187 | Ordinal: 392
        void getFogTransmittance(class osg::Vec3f, class osg::Vec3f, float) const;

    // RVA: 0x188 | Ordinal: 393
        void getFogTransmittance(class osg::Vec3f, class osg::Vec3f, float, float) const;

    // RVA: 0x18F | Ordinal: 400
        void getLayerThickness(void) const;

    // RVA: 0x1AC | Ordinal: 429
        void getSphericalFogDensity(class osg::Vec3f, class osg::Vec3f, float) const;

    // RVA: 0x1AE | Ordinal: 431
        void getSphericalFogTransmittance(class osg::Vec3f, class osg::Vec3f, float) const;

    // RVA: 0x1AF | Ordinal: 432
        void getSphericalFogTransmittance(class osg::Vec3f, class osg::Vec3f, float, float) const;

    // RVA: 0x1BD | Ordinal: 446
        void getTransmittance(class osg::Vec3f, class osg::Vec3f, float) const;

    // RVA: 0x1BE | Ordinal: 447
        void getTransmittance(class osg::Vec3f, class osg::Vec3f, float, float) const;

    // RVA: 0x1C2 | Ordinal: 451
        void getUniformity(void) const;

    // RVA: 0x1C3 | Ordinal: 452
        void getVisibilityAltitude(void) const;

    // RVA: 0x1C4 | Ordinal: 453
        void getVisibilityDistance(void) const;

    // RVA: 0x1CD | Ordinal: 462
        void init(float, float, float);

    // RVA: 0x1F9 | Ordinal: 506
        void isValid(void) const;

    // RVA: 0x29C | Ordinal: 669
        void setUseSphericalDensity(bool);
};

// DCS_OPS_RE_GRAPHICSCORE.DLL_CLOUDSFOG_HPP
