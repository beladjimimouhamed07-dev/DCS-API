#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: RenderGraph
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class RenderGraph
{
public:

    // RVA: 0x32 | Ordinal: 51
        void RenderGraph(unsigned int);

    // RVA: 0x112 | Ordinal: 275
        void bakeGraph(struct render::RenderGraph::BakeParams const &);

    // RVA: 0x143 | Ordinal: 324
        void createLightsCollection(struct render::LightsCollectionInfo const &);

    // RVA: 0x144 | Ordinal: 325
        void createRenderablesCollection(struct render::CollectionInfo const &);

    // RVA: 0x14F | Ordinal: 336
        void doUnitTests(void);

    // RVA: 0x160 | Ordinal: 353
        void dumpResources(char *const, unsigned int) const;

    // RVA: 0x164 | Ordinal: 357
        void exportToGraphvizDOT(char const *) const;

    // RVA: 0x1B1 | Ordinal: 434
        void getStatistics(struct render::RenderGraphStatistics &) const;

    // RVA: 0x1C7 | Ordinal: 456
        void importBuffer(char const *, class render::Buffer const &, int, int);

    // RVA: 0x1C8 | Ordinal: 457
        void importStructuredBuffer(char const *, class render::StructuredBuffer const &, int, int);

    // RVA: 0x1C9 | Ordinal: 458
        void importTexture(char const *, class render::Texture const &, int, struct render::TextureDescription::AutoBindInfo const &, bool);

    // RVA: 0x203 | Ordinal: 516
        void lightsPrePass(class ed::vector<struct render::SceneLight *, class ed::allocator<struct render::SceneLight *>> const *const);

    // RVA: 0x24F | Ordinal: 592
        void render(class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> const *const, class ed::vector<struct render::SceneLight *, class ed::allocator<struct render::SceneLight *>> const *const, struct render::RenderGraph::RenderParams const &);

    // RVA: 0x267 | Ordinal: 616
        void reset(enum render::RenderGraph::ResetType);

    // RVA: 0x74 | Ordinal: 117
        void _RenderGraph(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_RENDERGRAPH_HPP
