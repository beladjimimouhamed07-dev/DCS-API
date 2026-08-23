#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: ToneMappingModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ToneMappingModule
{
public:

    // RVA: 0x55 | Ordinal: 86
        void ToneMappingModule(class render::ToneMappingModule &&);

    // RVA: 0x56 | Ordinal: 87
        void ToneMappingModule(void);

    // RVA: 0xDC | Ordinal: 221
        void addAdaptationPass(class render::RenderGraph &, double, int, class render::RenderGraphTexture);

    // RVA: 0xEE | Ordinal: 239
        void addHistogramComputePass(class render::RenderGraph &, class render::RenderGraphTexture, class render::RenderGraphBuffer &, int);

    // RVA: 0xF4 | Ordinal: 245
        void addLuminancePass(class render::RenderGraph &, class render::RenderGraphTexture, class render::RenderGraphBuffer &, int);

    // RVA: 0x10B | Ordinal: 268
        void addToneMappingPass(class render::RenderGraph &, struct render::ToneMappingModule::Params const &, class render::RenderGraphTexture, class render::RenderGraphTexture, struct render::SceneRenderContext const *, struct render::ISceneRenderContextBinder const *);

    // RVA: 0x10C | Ordinal: 269
        void addToneMappingSimplePass(class render::RenderGraph &, enum deferredShading::ToneMapperMode, class render::RenderGraphTexture, class render::RenderGraphTexture);

    // RVA: 0x1AA | Ordinal: 427
        void getSharedLuminanceBuffer(void);

    // RVA: 0x1EE | Ordinal: 495
        void init(class render::RenderGraph &, struct render::ToneMappingModule::Initializer const &);

    // RVA: 0x1F7 | Ordinal: 504
        void isInitialized(void) const;

    // RVA: 0x86 | Ordinal: 135
        void _ToneMappingModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_TONEMAPPINGMODULE_HPP
