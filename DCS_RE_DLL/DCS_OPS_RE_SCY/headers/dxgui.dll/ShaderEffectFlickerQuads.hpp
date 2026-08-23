#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ShaderEffectFlickerQuads
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ShaderEffectFlickerQuads
{
public:

    // RVA: 0xB7 | Ordinal: 184
        void ShaderEffectFlickerQuads(void);

    // RVA: 0x247 | Ordinal: 584
        void destroy(void);

    // RVA: 0x885 | Ordinal: 2182
        void setCurrTime(float);

    // RVA: 0x89D | Ordinal: 2206
        void setDrawParams_(void) const;

    // RVA: 0x902 | Ordinal: 2307
        void setParams(class gui::skin::ShaderEffectParams const &);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SHADEREFFECTFLICKERQUADS_HPP
