#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: ShadowMapModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ShadowMapModule
{
public:

    // RVA: 0x48 | Ordinal: 73
        void ShadowMapModule(void);

    // RVA: 0xDD | Ordinal: 222
        void addCascadeShadowMapPass(class render::RenderGraph &, struct render::ShadowMapModule::Params const &, struct render::FrameContext const &, struct render::ISceneRenderContextBinder const &);

    // RVA: 0xDF | Ordinal: 224
        void addComposedShadowsBlurPass(char const *, class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::ViewportTag const &);

    // RVA: 0x108 | Ordinal: 265
        void addTerrainShadowMapPass(class render::RenderGraph &, struct render::ShadowMapModule::Params const &, struct render::FrameContext const &, struct render::ISceneRenderContextBinder const &, struct render::IResourcesChecker *);

    // RVA: 0x109 | Ordinal: 266
        void addTerrainShadowsPass(char const *, class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::ViewportTag const &);

    // RVA: 0x17E | Ordinal: 383
        void getDummyCascadeMap(void) const;

    // RVA: 0x180 | Ordinal: 385
        void getDummyShadowMap(void) const;

    // RVA: 0x1A8 | Ordinal: 425
        void getShadowParams(int) const;

    // RVA: 0x1B7 | Ordinal: 440
        void getTerrainShadowMatrix(void) const;

    // RVA: 0x1E5 | Ordinal: 486
        void init(class render::RenderGraph &, int, bool, enum render::MSAA_ENUM, char const *);

    // RVA: 0x21E | Ordinal: 543
        void parseShadowMap(int, class osg::Matrixf const &, class osg::Matrixf const &);

    // RVA: 0x220 | Ordinal: 545
        void parseTerrainShadowMap(class osg::Matrixf const &, class osg::Matrixf const &);

    // RVA: 0x223 | Ordinal: 548
        void precollectCasters(class osg::Matrixf const &);

    // RVA: 0x232 | Ordinal: 563
        void queryCasters(int, class osg::Matrixf const &, class osg::Matrixf const &, class osg::Matrixf const &);

    // RVA: 0x260 | Ordinal: 609
        void renderShadowMap(int);

    // RVA: 0x263 | Ordinal: 612
        void renderTerrainShadowMap(void);

    // RVA: 0x7E | Ordinal: 127
        void _ShadowMapModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_SHADOWMAPMODULE_HPP
