#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: DeferredShadingModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class DeferredShadingModule
{
public:

    // RVA: 0x10 | Ordinal: 17
        void DeferredShadingModule(class render::DeferredShadingModule const &);

    // RVA: 0x11 | Ordinal: 18
        void DeferredShadingModule(void);

    // RVA: 0xE5 | Ordinal: 230
        void addDeferredShadingPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::DeferredShadingModule::Params const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::RenderGraphTexture, class render::RenderGraphTexture, class std::initializer_list<class render::ShadingModel> const &, class render::IRenderGraphDependencyList const *, class render::ViewportTag);

    // RVA: 0xEB | Ordinal: 236
        void addGBufferPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::DeferredShadingModule::Params const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, struct render::DeferredShadingModule::GBuffer, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::ShadingModel, bool, bool, class render::IRenderGraphDependencyList const *, class render::ViewportTag const &);

    // RVA: 0xF0 | Ordinal: 241
        void addLightingPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::DeferredShadingModule::Params const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, struct render::DeferredShadingModule::GBuffer, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, int, class render::IRenderGraphDependencyList const *, class render::ViewportTag const &);

    // RVA: 0x142 | Ordinal: 323
        void createGBuffer(struct render::DeferredShadingModule::Params const &, class render::RenderGraph &, class render::RenderGraphTexture const &);

    // RVA: 0x181 | Ordinal: 386
        void getEdgesMaskStencil(void) const;

    // RVA: 0x1D2 | Ordinal: 467
        void init(struct render::DeferredShadingModule::Initializer const &);

    // RVA: 0x65 | Ordinal: 102
        void _DeferredShadingModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_DEFERREDSHADINGMODULE_HPP
