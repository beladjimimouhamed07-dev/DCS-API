#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: AtmosphereWrapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class AtmosphereWrapper
{
public:

    // RVA: 0x5 | Ordinal: 6
        void AtmosphereWrapper(class enlight::AtmosphereWrapper &&);

    // RVA: 0x6 | Ordinal: 7
        void AtmosphereWrapper(void);

    // RVA: 0x117 | Ordinal: 280
        void beginFrame(class osg::Vec3f const &, class osg::Vec3f const &, bool);

    // RVA: 0x11A | Ordinal: 283
        void bindAtmosphereToGPU(void);

    // RVA: 0x135 | Ordinal: 310
        void computeInscatter(float);

    // RVA: 0x15B | Ordinal: 348
        void drawSky(class GraphicsCore::ContextBase const *, enum enlight::SkyTechnique, bool);

    // RVA: 0x15C | Ordinal: 349
        void drawSunGlare(class render::Texture, float);

    // RVA: 0x1A6 | Ordinal: 423
        void getScatteringTexture(void);

    // RVA: 0x1CC | Ordinal: 461
        void init(class osg::Vec2i const &);

    // RVA: 0x225 | Ordinal: 550
        void precompute(float);

    // RVA: 0x239 | Ordinal: 570
        void registerToComputeInscatter(class osg::Vec3f const *, unsigned int);

    // RVA: 0x23B | Ordinal: 572
        void release(void);

    // RVA: 0x2AE | Ordinal: 687
        void unbindAtmosphereFromGPU(void);

    // RVA: 0x2C8 | Ordinal: 713
        void updateSkyTex(class GraphicsCore::ContextBase const *, enum enlight::SkyTechnique);

    // RVA: 0x2C7 | Ordinal: 712
        void updateSkyTex2(void);

    // RVA: 0x62 | Ordinal: 99
        void _AtmosphereWrapper(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_ATMOSPHEREWRAPPER_HPP
