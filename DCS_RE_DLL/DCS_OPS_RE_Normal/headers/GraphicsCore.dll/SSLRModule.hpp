#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SSLRModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class SSLRModule
{
public:

    // RVA: 0x3D | Ordinal: 62
        void SSLRModule(class render::SSLRModule &&);

    // RVA: 0x3E | Ordinal: 63
        void SSLRModule(void);

    // RVA: 0xF7 | Ordinal: 248
        void addPass(char const *, char const *, class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::IRenderGraphDependencyList const *);

    // RVA: 0x1E2 | Ordinal: 483
        void init(struct render::SSLRModule::Initializer const &);

    // RVA: 0x1FE | Ordinal: 511
        void isValid(void) const;

    // RVA: 0x79 | Ordinal: 122
        void _SSLRModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_SSLRMODULE_HPP
