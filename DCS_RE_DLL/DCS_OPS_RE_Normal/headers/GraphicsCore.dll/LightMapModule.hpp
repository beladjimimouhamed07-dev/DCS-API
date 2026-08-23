#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: LightMapModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class LightMapModule
{
public:

    // RVA: 0x28 | Ordinal: 41
        void LightMapModule(class render::LightMapModule &&);

    // RVA: 0x29 | Ordinal: 42
        void LightMapModule(class render::LightMapModule const &);

    // RVA: 0x2A | Ordinal: 43
        void LightMapModule(void);

    // RVA: 0xEF | Ordinal: 240
        void addLightMapPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, class render::TerrainModule const &, struct render::TerrainModule::ITerrainRenderer const &, struct render::SceneRenderContext const &, class render::IRenderGraphDependencyList const *, class render::ViewportTag const &);

    // RVA: 0x6F | Ordinal: 112
        void _LightMapModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_LIGHTMAPMODULE_HPP
