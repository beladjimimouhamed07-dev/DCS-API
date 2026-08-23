#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: WaterModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class WaterModule
{
public:

    // RVA: 0x58 | Ordinal: 89
        void WaterModule(class render::WaterModule &&);

    // RVA: 0x59 | Ordinal: 90
        void WaterModule(void);

    // RVA: 0xEC | Ordinal: 237
        void addGeneratorPass(class render::RenderGraph &);

    // RVA: 0xFA | Ordinal: 251
        void addPasses(int, class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::IRenderGraphDependencyList const &, class render::ViewportTag const &);

    // RVA: 0xFD | Ordinal: 254
        void addReflectionPass(int, class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::IRenderGraphDependencyList const &);

    // RVA: 0xFE | Ordinal: 255
        void addRefractionPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::IRenderGraphDependencyList const &, bool);

    // RVA: 0x100 | Ordinal: 257
        void addRiversPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture);

    // RVA: 0x102 | Ordinal: 259
        void addSeaPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::IRenderGraphDependencyList const &);

    // RVA: 0x10F | Ordinal: 272
        void addWaterForwardPass(char const *, class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::ShadingModel, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::IRenderGraphDependencyList const &, class render::ViewportTag const &);

    // RVA: 0x110 | Ordinal: 273
        void addWaveMaskPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::RenderGraphTexture, bool);

    // RVA: 0x195 | Ordinal: 406
        void getNormals(void) const;

    // RVA: 0x1EF | Ordinal: 496
        void init(struct render::WaterModule::Initializer const &, class render::RenderGraph &);

    // RVA: 0x201 | Ordinal: 514
        void isValid(void) const;

    // RVA: 0x25F | Ordinal: 608
        void renderSeaRadar(void);

    // RVA: 0x2A2 | Ordinal: 675
        void setWind(class osg::Vec2f const &);

    // RVA: 0x88 | Ordinal: 137
        void _WaterModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_WATERMODULE_HPP
