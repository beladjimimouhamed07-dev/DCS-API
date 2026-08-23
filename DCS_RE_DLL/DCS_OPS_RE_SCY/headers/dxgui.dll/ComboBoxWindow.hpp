#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ComboBoxWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ComboBoxWindow
{
public:

    // RVA: 0x50 | Ordinal: 81
        void ComboBoxWindow(class gui::ComboBox &);

    // RVA: 0x67C | Ordinal: 1661
        void onChar(enum gui::KeyboardButton, int);

    // RVA: 0x6AF | Ordinal: 1712
        void onItemMouseUp(void);

    // RVA: 0x6BE | Ordinal: 1727
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6CD | Ordinal: 1742
        void onKeyUp(enum gui::KeyboardButton, int);

    // RVA: 0x9EC | Ordinal: 2541
        void updateSearch(bool);

    // RVA: 0x9EE | Ordinal: 2543
        void updateSelection(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COMBOBOXWINDOW_HPP
