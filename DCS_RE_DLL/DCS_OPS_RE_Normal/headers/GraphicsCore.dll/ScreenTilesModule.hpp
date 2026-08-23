#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: ScreenTilesModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ScreenTilesModule
{
public:

    // RVA: 0x43 | Ordinal: 68
        void ScreenTilesModule(class render::ScreenTilesModule &&);

    // RVA: 0x44 | Ordinal: 69
        void ScreenTilesModule(void);

    // RVA: 0xF3 | Ordinal: 244
        void addLightsPrePass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::SpectrumModel, class render::RenderGraphTexture, class render::SecondaryShadowmapModule *, struct render::RenderGraphLightsBuffers, class render::ViewportTag const &);

    // RVA: 0x1E4 | Ordinal: 485
        void init(class render::RenderGraph &, struct render::ScreenTilesModule::Initializer const &);

    // RVA: 0x7C | Ordinal: 125
        void _ScreenTilesModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_SCREENTILESMODULE_HPP
