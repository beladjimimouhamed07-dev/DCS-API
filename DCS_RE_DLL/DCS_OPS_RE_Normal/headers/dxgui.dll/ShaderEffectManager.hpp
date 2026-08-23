#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ShaderEffectManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ShaderEffectManager
{
public:

    // RVA: 0x24A | Ordinal: 587
        void destroyAlphaEffect(class gui::skin::ShaderEffectAlpha *);

    // RVA: 0x24B | Ordinal: 588
        void destroyAppearQuadsEffect(class gui::skin::ShaderEffectAppearQuads *);

    // RVA: 0x24C | Ordinal: 589
        void destroyFlickerQuadsEffect(class gui::skin::ShaderEffectFlickerQuads *);

    // RVA: 0x24D | Ordinal: 590
        void destroyShowMsgEffect(class gui::skin::ShaderEffectShowMsg *);

    // RVA: 0x2FC | Ordinal: 765
        void get(void);

    // RVA: 0x30C | Ordinal: 781
        void getAlphaEffect(void);

    // RVA: 0x313 | Ordinal: 788
        void getAppearQuadsEffect(void);

    // RVA: 0x35F | Ordinal: 864
        void getEffect(char const *);

    // RVA: 0x36C | Ordinal: 877
        void getFlickerQuadsEffect(void);

    // RVA: 0x4C3 | Ordinal: 1220
        void getShowMsgEffect(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SHADEREFFECTMANAGER_HPP
