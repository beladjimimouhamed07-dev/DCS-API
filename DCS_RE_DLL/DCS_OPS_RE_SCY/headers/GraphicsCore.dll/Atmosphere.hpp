#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: Atmosphere
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class Atmosphere
{
public:

    // RVA: 0x1 | Ordinal: 2
        void Atmosphere(void);

    // RVA: 0x131 | Ordinal: 306
        void computeAerialAtmosphereMaps(class render::Texture &, class render::Texture &, class osg::Vec3i const &, class osg::Matrixf const &, class osg::Vec3f const &);

    // RVA: 0x132 | Ordinal: 307
        void computeAtmosphereSamples(class render::StructuredBuffer &, class osg::Vec3f const *, int, float);

    // RVA: 0x133 | Ordinal: 308
        void computeAuxMapsForClouds(class osg::Vec3f const &);

    // RVA: 0x137 | Ordinal: 312
        void computeSkyRadiance(class render::Texture &, float, bool);

    // RVA: 0x138 | Ordinal: 313
        void computeSkyRadianceChunk(class render::Texture &, float, class osg::Vec3i const &, class osg::Vec3i const &);

    // RVA: 0x13B | Ordinal: 316
        void copyToTarget(class render::Texture);

    // RVA: 0x145 | Ordinal: 326
        void createResolvedScatteringMap(char const *);

    // RVA: 0x14D | Ordinal: 334
        void discardTempFramebuffers(void);

    // RVA: 0x150 | Ordinal: 337
        void draw(class osg::Matrixf const &, class osg::Matrixf const &, enum enlight::SkyTechnique);

    // RVA: 0x151 | Ordinal: 338
        void draw(class osg::Matrixf const &, enum enlight::SkyTechnique);

    // RVA: 0x159 | Ordinal: 346
        void drawQuad(int);

    // RVA: 0x15A | Ordinal: 347
        void drawQuadLayer(int);

    // RVA: 0x18E | Ordinal: 399
        void getIrradianceTexture(void);

    // RVA: 0x192 | Ordinal: 403
        void getMiePhaseFunctionTexture(void);

    // RVA: 0x1A0 | Ordinal: 417
        void getRendererForEnvironment(void);

    // RVA: 0x1C0 | Ordinal: 449
        void getTransmittanceTexture(void);

    // RVA: 0x1BF | Ordinal: 448
        void getTransmittanceTexture3D(void);

    // RVA: 0x224 | Ordinal: 549
        void precompute(float, class render::Texture *);

    // RVA: 0x26F | Ordinal: 624
        void resolveScattering(float);

    // RVA: 0x287 | Ordinal: 648
        void setLayer(int);

    // RVA: 0x60 | Ordinal: 97
        void _Atmosphere(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_ATMOSPHERE_HPP
