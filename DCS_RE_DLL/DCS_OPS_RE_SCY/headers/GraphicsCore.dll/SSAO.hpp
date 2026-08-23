#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SSAO
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace deferredShading {

class SSAO
{
public:

    // RVA: 0x37 | Ordinal: 56
        void SSAO(class deferredShading::SSAO const &);

    // RVA: 0x38 | Ordinal: 57
        void SSAO(enum render::MSAA_ENUM, bool, int);

    // RVA: 0x250 | Ordinal: 593
        void render(class render::Texture, class render::Texture, class render::Texture, class render::Texture, class render::Texture, class render::Texture, class osg::Vec4i const &, float);

    // RVA: 0x76 | Ordinal: 119
        void _SSAO(void);
};

} // namespace deferredShading

// DCS_OPS_RE_GRAPHICSCORE.DLL_SSAO_HPP
