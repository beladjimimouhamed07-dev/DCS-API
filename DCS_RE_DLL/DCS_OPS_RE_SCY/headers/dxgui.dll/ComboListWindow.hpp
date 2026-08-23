#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ComboListWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ComboListWindow
{
public:

    // RVA: 0x56 | Ordinal: 87
        void ComboListWindow(class gui::ComboList &);

    // RVA: 0x6B0 | Ordinal: 1713
        void onItemMouseUp(void);

    // RVA: 0x6C0 | Ordinal: 1729
        void onKeyDown(enum gui::KeyboardButton, int);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COMBOLISTWINDOW_HPP
