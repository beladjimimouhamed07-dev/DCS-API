#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SSAOModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class SSAOModule
{
public:

    // RVA: 0x39 | Ordinal: 58
        void SSAOModule(class render::SSAOModule &&);

    // RVA: 0x3A | Ordinal: 59
        void SSAOModule(void);

    // RVA: 0xF6 | Ordinal: 247
        void addPass(char const *, class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, char const *);

    // RVA: 0x1E0 | Ordinal: 481
        void init(struct render::SSAOModule::Initializer const &);

    // RVA: 0x1FC | Ordinal: 509
        void isValid(void) const;

    // RVA: 0x77 | Ordinal: 120
        void _SSAOModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_SSAOMODULE_HPP
