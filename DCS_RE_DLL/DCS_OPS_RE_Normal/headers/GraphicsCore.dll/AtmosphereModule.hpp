#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: AtmosphereModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class AtmosphereModule
{
public:

    // RVA: 0x2 | Ordinal: 3
        void AtmosphereModule(class render::AtmosphereModule &&);

    // RVA: 0x3 | Ordinal: 4
        void AtmosphereModule(void);

    // RVA: 0xFB | Ordinal: 252
        void addPrePass(class render::RenderGraph &, class osg::Vec3f const &, struct render::FrameContext const &, bool);

    // RVA: 0x101 | Ordinal: 258
        void addSamplesPrePass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, class osg::Vec3f const &, struct render::FrameContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, struct render::ILightProbesProvider const *);

    // RVA: 0x104 | Ordinal: 261
        void addSkyPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::ViewportContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, char const *, class render::ViewportTag const &);

    // RVA: 0x105 | Ordinal: 262
        void addSkyPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::ViewportContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, bool, class render::ViewportTag const &);

    // RVA: 0x106 | Ordinal: 263
        void addSunFLIRPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::ViewportTag const &);

    // RVA: 0x107 | Ordinal: 264
        void addSunGlarePass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, float, class render::ViewportTag const &);

    // RVA: 0x18D | Ordinal: 398
        void getIrradiance(void);

    // RVA: 0x1A1 | Ordinal: 418
        void getRendererForEnvironment(void);

    // RVA: 0x1A3 | Ordinal: 420
        void getResources(enum render::PipelineStage);

    // RVA: 0x1A4 | Ordinal: 421
        void getSamplesBuffer(void);

    // RVA: 0x1A5 | Ordinal: 422
        void getScattering(void);

    // RVA: 0x1AB | Ordinal: 428
        void getSkyTexDummy(void);

    // RVA: 0x1BC | Ordinal: 445
        void getTransmittance(void);

    // RVA: 0x1CB | Ordinal: 460
        void init(class render::RenderGraph &, int, int, int, int, int, int, int);

    // RVA: 0x1F2 | Ordinal: 499
        void isInitialized(void) const;

    // RVA: 0x61 | Ordinal: 98
        void _AtmosphereModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_ATMOSPHEREMODULE_HPP
