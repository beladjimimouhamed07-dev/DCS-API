#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: TerrainRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class TerrainRenderer
{
public:

    // RVA: 0x1B | Ordinal: 28
        void TerrainRenderer(class render::SharedSceneResources &);

    // RVA: 0xA6 | Ordinal: 167
        void beginFrame(void);

    // RVA: 0xC1 | Ordinal: 194
        void forceLoading(class osg::Vec3d const &, double, class std::function<void __cdecl(float, class ed::basic_string<char> const &)>);

    // RVA: 0xCD | Ordinal: 206
        void getBoundingBox(unsigned int const &);

    // RVA: 0xD6 | Ordinal: 215
        void getCurrentParseContext(void);

    // RVA: 0xD8 | Ordinal: 217
        void getDump(void) const;

    // RVA: 0xF2 | Ordinal: 243
        void getRenderContext(void);

    // RVA: 0x108 | Ordinal: 265
        void initialize(void);

    // RVA: 0x10E | Ordinal: 271
        void isValid(void);

    // RVA: 0x11A | Ordinal: 283
        void parse(void);

    // RVA: 0x124 | Ordinal: 293
        void readRuntimeOptions(void);

    // RVA: 0x129 | Ordinal: 298
        void release(void);

    // RVA: 0x12F | Ordinal: 304
        void render(unsigned int const &, enum render::enShadingModel, class render::Camera const &);

    // RVA: 0x149 | Ordinal: 330
        void setCivilLights(double);

    // RVA: 0x158 | Ordinal: 345
        void setForestDetailsFactor(float);

    // RVA: 0x159 | Ordinal: 346
        void setForestDistanceFactor(float);

    // RVA: 0x15A | Ordinal: 347
        void setGrassDistanceFactor(float);

    // RVA: 0x163 | Ordinal: 356
        void setLightsBuffers(struct render::LightsBuffers);

    // RVA: 0x174 | Ordinal: 373
        void setParseOptions(struct render::ParseOptions *);

    // RVA: 0x179 | Ordinal: 378
        void setSceneryDetailsFactor(float);

    // RVA: 0x187 | Ordinal: 392
        void startDumpOffshore(void) const;

    // RVA: 0x18E | Ordinal: 399
        void updateContext(class osg::Vec3f const &, class osg::Vec3d const &);

    // RVA: 0x18F | Ordinal: 400
        void updateHeightMapCamera(class render::Camera const &);

    // RVA: 0x191 | Ordinal: 402
        void updateLightMapCamera(class render::Camera const &);

    // RVA: 0x193 | Ordinal: 404
        void updateRenderContext(unsigned int const &, enum render::enShadingModel);

    // RVA: 0x194 | Ordinal: 405
        void updateSharedParams(void);

    // RVA: 0x2B | Ordinal: 44
        void _TerrainRenderer(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_TERRAINRENDERER_HPP
