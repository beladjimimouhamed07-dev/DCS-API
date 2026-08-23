#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ShaderEffectAppearQuads
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ShaderEffectAppearQuads
{
public:

    // RVA: 0xB6 | Ordinal: 183
        void ShaderEffectAppearQuads(void);

    // RVA: 0x246 | Ordinal: 583
        void destroy(void);

    // RVA: 0x884 | Ordinal: 2181
        void setCurrTime(float);

    // RVA: 0x89C | Ordinal: 2205
        void setDrawParams_(void) const;

    // RVA: 0x901 | Ordinal: 2306
        void setParams(class gui::skin::ShaderEffectParams const &);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SHADEREFFECTAPPEARQUADS_HPP
