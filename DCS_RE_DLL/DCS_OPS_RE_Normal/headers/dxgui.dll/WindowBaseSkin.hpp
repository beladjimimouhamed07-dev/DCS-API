#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: WindowBaseSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class WindowBaseSkin
{
public:

    // RVA: 0xD4 | Ordinal: 213
        void WindowBaseSkin(class gui::WindowBase *, bool);

    // RVA: 0x226 | Ordinal: 551
        void copyTo(class gui::skin::WindowBaseSkin *) const;

    // RVA: 0x3B3 | Ordinal: 948
        void getHeaderSkin(void) const;

    // RVA: 0x504 | Ordinal: 1285
        void getSkinData(void) const;

    // RVA: 0x576 | Ordinal: 1399
        void getViewSkin(void) const;
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_WINDOWBASESKIN_HPP
