#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: TerrainModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class TerrainModule
{
public:

    // RVA: 0x4D | Ordinal: 78
        void TerrainModule(class render::TerrainModule &&);

    // RVA: 0x4E | Ordinal: 79
        void TerrainModule(class render::TerrainModule const &);

    // RVA: 0x4F | Ordinal: 80
        void TerrainModule(void);

    // RVA: 0xF1 | Ordinal: 242
        void addLightsBuffersPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, struct render::TerrainModule::ITerrainRenderer &, class render::ViewportTag const &);

    // RVA: 0x10E | Ordinal: 271
        void addUpdatePass(class render::RenderGraph &, struct render::TerrainModule::ITerrainRenderer &);

    // RVA: 0x194 | Ordinal: 405
        void getNativeResource(enum render::TerrainModule::ResourceType) const;

    // RVA: 0x19F | Ordinal: 416
        void getRenderGraphResource(enum render::TerrainModule::ResourceType) const;

    // RVA: 0x1E9 | Ordinal: 490
        void init(class render::RenderGraph &, struct render::TerrainModule::ITerrainRenderer &, unsigned int, unsigned int);

    // RVA: 0x1F4 | Ordinal: 501
        void isInitialized(void) const;

    // RVA: 0x268 | Ordinal: 617
        void resetFrame(struct render::TerrainModule::ITerrainRenderer &);

    // RVA: 0x82 | Ordinal: 131
        void _TerrainModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_TERRAINMODULE_HPP
