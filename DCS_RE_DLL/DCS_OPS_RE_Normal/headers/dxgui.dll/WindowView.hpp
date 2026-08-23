#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: WindowView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class WindowView
{
public:

    // RVA: 0xD7 | Ordinal: 216
        void WindowView(class gui::WindowBase &);

    // RVA: 0x1A0 | Ordinal: 417
        void clear(void);

    // RVA: 0x5F4 | Ordinal: 1525
        void insertWidget(class gui::Widget *, int);

    // RVA: 0x806 | Ordinal: 2055
        void removeAllWidgets(void);

    // RVA: 0x82A | Ordinal: 2091
        void removeWidget(class gui::Widget *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_WINDOWVIEW_HPP
