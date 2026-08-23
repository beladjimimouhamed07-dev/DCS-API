#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SSSModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class SSSModule
{
public:

    // RVA: 0x41 | Ordinal: 66
        void SSSModule(class render::SSSModule &&);

    // RVA: 0x42 | Ordinal: 67
        void SSSModule(void);

    // RVA: 0xF8 | Ordinal: 249
        void addPass(char const *, class render::RenderGraph &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, char const *);

    // RVA: 0x1E3 | Ordinal: 484
        void init(enum render::MSAA_ENUM);

    // RVA: 0x1FF | Ordinal: 512
        void isValid(void) const;

    // RVA: 0x7B | Ordinal: 124
        void _SSSModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_SSSMODULE_HPP
