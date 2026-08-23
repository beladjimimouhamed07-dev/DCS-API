#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: HeightMapModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class HeightMapModule
{
public:

    // RVA: 0x1B | Ordinal: 28
        void HeightMapModule(class render::HeightMapModule &&);

    // RVA: 0x1C | Ordinal: 29
        void HeightMapModule(class render::HeightMapModule const &);

    // RVA: 0x1D | Ordinal: 30
        void HeightMapModule(void);

    // RVA: 0xED | Ordinal: 238
        void addHeightMapPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, class render::TerrainModule const &, struct render::TerrainModule::ITerrainRenderer const &, struct render::FrameContext const &);

    // RVA: 0x6A | Ordinal: 107
        void _HeightMapModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_HEIGHTMAPMODULE_HPP
