#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: SceneRenderer.dll
// Class: DCSSceneRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class DCSSceneRenderer
{
public:

    // RVA: 0x1 | Ordinal: 2
        void DCSSceneRenderer(void);

    // RVA: 0x4 | Ordinal: 5
        void addAuxViewport(struct render::SceneViewportInitializer const &, char const *);

    // RVA: 0x7 | Ordinal: 8
        void bakeRenderGraph(struct render::RenderGraph::BakeParams const &);

    // RVA: 0x8 | Ordinal: 9
        void buildDemoSceneRenderGraph(void *, struct DCSDemoSceneFrameDesc const &, class osg::Vec3d const *);

    // RVA: 0xA | Ordinal: 11
        void buildRenderGraph(struct DCSFrameDesc const &);

    // RVA: 0xB | Ordinal: 12
        void buildRenderGraphWithAuxColorBuffersOnly(struct DCSFrameDesc const &);

    // RVA: 0xC | Ordinal: 13
        void createDemoSceneModule(char const *);

    // RVA: 0xD | Ordinal: 14
        void deleteDemoSceneModule(void *);

    // RVA: 0xE | Ordinal: 15
        void getDemoSceneRenderGraphData(void *);

    // RVA: 0xF | Ordinal: 16
        void getStatistics(struct DCSSceneRendererStatistics &) const;

    // RVA: 0x11 | Ordinal: 18
        void init(struct DCSSceneRenderer::Initializer const &);

    // RVA: 0x13 | Ordinal: 20
        void lightsPrePass(void);

    // RVA: 0x14 | Ordinal: 21
        void onCockpitChanged(struct enlight::CockpitConfig const &);

    // RVA: 0x16 | Ordinal: 23
        void onWaterUpdated(struct DCSWaterSettings const &);

    // RVA: 0x17 | Ordinal: 24
        void prepareRenderGraph(struct DCSFrameDesc const &, struct render::ISceneObjectsProvider const &, class ed::TaskQueue *, unsigned int, struct render::RenderGraph::BakeParams const &);

    // RVA: 0x18 | Ordinal: 25
        void removeAuxViewport(char const *);

    // RVA: 0x1A | Ordinal: 27
        void renderBakedRenderGraph(struct render::RenderGraph::RenderParams const &);

    // RVA: 0x1B | Ordinal: 28
        void requestCloudDensitySamples(class ed::span<class osg::Vec3f const, -1>, class ed::span<float, -1>);

    // RVA: 0x1D | Ordinal: 30
        void resetRenderGraph(void);

    // RVA: 0x1E | Ordinal: 31
        void resizeMFDViewport(unsigned int, class osg::Vec2i);

    // RVA: 0x20 | Ordinal: 33
        void setMirrorViewports(class ed::span<struct render::SceneViewportInitializer const, -1>);

    // RVA: 0x21 | Ordinal: 34
        void setSeed(unsigned int);

    // RVA: 0x24 | Ordinal: 37
        void setTerrainRenderer(struct render::TerrainModule::ITerrainRenderer *);

    // RVA: 0x25 | Ordinal: 38
        void updateAuxViewport(struct render::SceneViewportInitializer const &, char const *);

    // RVA: 0x3 | Ordinal: 4
        void _DCSSceneRenderer(void);
};

// DCS_OPS_RE_SCENERENDERER.DLL_DCSSCENERENDERER_HPP
