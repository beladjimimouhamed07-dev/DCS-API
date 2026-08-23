#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SSS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace deferredShading {

class SSS
{
public:

    // RVA: 0x3F | Ordinal: 64
        void SSS(class deferredShading::SSS const &);

    // RVA: 0x40 | Ordinal: 65
        void SSS(enum render::MSAA_ENUM);

    // RVA: 0x252 | Ordinal: 595
        void render(struct render::SceneRenderContext const &, class render::Texture, class render::Texture);

    // RVA: 0x7A | Ordinal: 123
        void _SSS(void);
};

} // namespace deferredShading

// DCS_OPS_RE_GRAPHICSCORE.DLL_SSS_HPP
