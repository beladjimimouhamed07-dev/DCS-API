#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: render
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class render
{
public:

    // RVA: 0xC8 | Ordinal: 201
        void CreateCubeGenerator(void);

    // RVA: 0xD5 | Ordinal: 214
        void LightBufferTypeToString(enum render::LightBufferType);

    // RVA: 0x103 | Ordinal: 260
        void addSimpleRenderingPass(char const *, class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::ShadingModel, class render::RenderGraphTexture, class render::RenderGraphTexture, struct render::ISceneRenderContextBinder::ShadowMapContext, bool, bool, class render::IRenderGraphDependencyList const *, float, class osg::Vec4f const &, class render::ViewportTag const &, struct render::LODInfo const *);
};

// DCS_OPS_RE_GRAPHICSCORE.DLL_RENDER_HPP
