#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: EnvironmentModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class EnvironmentModule
{
public:

    // RVA: 0xE8 | Ordinal: 233
        void addEnvironmentCubePass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::EnvironmentModule::Params const &, struct render::FrameContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::IRenderGraphDependencyList const *);

    // RVA: 0xFC | Ordinal: 253
        void addPrefilterPass(class render::RenderGraph &, struct environment::EnvironmentCubeTarget &, bool, bool, int);

    // RVA: 0x1B9 | Ordinal: 442
        void getTextureForAutoBinding(int) const;

    // RVA: 0x1D9 | Ordinal: 474
        void init(class render::RenderGraph &, int, int);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_ENVIRONMENTMODULE_HPP
