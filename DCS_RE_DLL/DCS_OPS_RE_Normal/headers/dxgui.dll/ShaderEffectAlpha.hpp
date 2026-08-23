#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ShaderEffectAlpha
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ShaderEffectAlpha
{
public:

    // RVA: 0xB5 | Ordinal: 182
        void ShaderEffectAlpha(void);

    // RVA: 0x245 | Ordinal: 582
        void destroy(void);

    // RVA: 0x883 | Ordinal: 2180
        void setCurrTime(float);

    // RVA: 0x89B | Ordinal: 2204
        void setDrawParams_(void) const;

    // RVA: 0x900 | Ordinal: 2305
        void setParams(class gui::skin::ShaderEffectParams const &);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SHADEREFFECTALPHA_HPP
