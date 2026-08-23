#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: SceneRenderer.dll
// Class: BRDFRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class BRDFRenderer
{
public:

    // RVA: 0x0 | Ordinal: 1
        void BRDFRenderer(void);

    // RVA: 0x5 | Ordinal: 6
        void bakeBRDF(struct BRDFRenderer::BRDFDesc const &, struct render::ISceneObjectsProvider const &, unsigned int);

    // RVA: 0x6 | Ordinal: 7
        void bakeRenderGraph(struct render::RenderGraph::BakeParams const &);

    // RVA: 0x9 | Ordinal: 10
        void buildRenderGraph(struct BRDFRenderer::BRDFDesc const &, class osg::Vec3f const &, class ed::span<struct BRDFRenderer::ViewSample const, -1>);

    // RVA: 0x10 | Ordinal: 17
        void init(struct BRDFRenderer::Initializer const &);

    // RVA: 0x12 | Ordinal: 19
        void lightsPrePass(void);

    // RVA: 0x15 | Ordinal: 22
        void onWaterUpdated(struct DCSWaterSettings const &);

    // RVA: 0x19 | Ordinal: 26
        void renderBakedRenderGraph(struct render::RenderGraph::RenderParams const &);

    // RVA: 0x1C | Ordinal: 29
        void resetRenderGraph(void);

    // RVA: 0x1F | Ordinal: 32
        void setDbgView(class osg::Matrixd const &, class osg::Vec3f const &);

    // RVA: 0x22 | Ordinal: 35
        void setTarget(class osg::Vec3d const &, float);

    // RVA: 0x23 | Ordinal: 36
        void setTerrainRenderer(struct render::TerrainModule::ITerrainRenderer *);

    // RVA: 0x2 | Ordinal: 3
        void _BRDFRenderer(void);
};

// DCS_OPS_RE_SCENERENDERER.DLL_BRDFRENDERER_HPP
