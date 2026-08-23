#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ShaderEffectShowMsg
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ShaderEffectShowMsg
{
public:

    // RVA: 0xB8 | Ordinal: 185
        void ShaderEffectShowMsg(void);

    // RVA: 0x248 | Ordinal: 585
        void destroy(void);

    // RVA: 0x886 | Ordinal: 2183
        void setCurrTime(float);

    // RVA: 0x89E | Ordinal: 2207
        void setDrawParams_(void) const;

    // RVA: 0x903 | Ordinal: 2308
        void setParams(class gui::skin::ShaderEffectParams const &);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SHADEREFFECTSHOWMSG_HPP
