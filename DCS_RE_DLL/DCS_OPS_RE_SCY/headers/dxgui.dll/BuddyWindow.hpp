#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: BuddyWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class BuddyWindow
{
public:

    // RVA: 0x39 | Ordinal: 58
        void BuddyWindow(void);

    // RVA: 0x195 | Ordinal: 406
        void clear(void);

    // RVA: 0x583 | Ordinal: 1412
        void getWidget(int) const;

    // RVA: 0x58E | Ordinal: 1423
        void getWidgetCount(void) const;

    // RVA: 0x5ED | Ordinal: 1518
        void insertWidget(class gui::Widget *, int);

    // RVA: 0x67B | Ordinal: 1660
        void onChar(enum gui::KeyboardButton, int);

    // RVA: 0x6BA | Ordinal: 1723
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6CB | Ordinal: 1740
        void onKeyUp(enum gui::KeyboardButton, int);

    // RVA: 0x7FF | Ordinal: 2048
        void removeAllWidgets(void);

    // RVA: 0x823 | Ordinal: 2084
        void removeWidget(class gui::Widget *);

    // RVA: 0x86E | Ordinal: 2159
        void setBuddyWidget(class gui::Widget *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_BUDDYWINDOW_HPP
