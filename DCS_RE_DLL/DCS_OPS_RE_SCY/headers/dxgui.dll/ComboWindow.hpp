#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ComboWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ComboWindow
{
public:

    // RVA: 0x57 | Ordinal: 88
        void ComboWindow(class gui::Widget &);

    // RVA: 0x16B | Ordinal: 364
        void calcSize(void) const;

    // RVA: 0x17C | Ordinal: 381
        void calcWindowPosition(void) const;

    // RVA: 0x42B | Ordinal: 1068
        void getListBox(void) const;

    // RVA: 0x432 | Ordinal: 1075
        void getMaxItemCount(void) const;

    // RVA: 0x4D1 | Ordinal: 1234
        void getSkin(void) const;

    // RVA: 0x514 | Ordinal: 1301
        void getSurfaceId(void) const;

    // RVA: 0x8E4 | Ordinal: 2277
        void setMaxItemCount(int);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COMBOWINDOW_HPP
