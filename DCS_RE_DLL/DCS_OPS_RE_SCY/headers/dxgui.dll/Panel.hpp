#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Panel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Panel
{
public:

    // RVA: 0x9D | Ordinal: 158
        void Panel(void);

    // RVA: 0x19C | Ordinal: 413
        void clear(void);

    // RVA: 0x1CD | Ordinal: 462
        void clone(void) const;

    // RVA: 0x200 | Ordinal: 513
        void copyParams(class gui::Panel *) const;

    // RVA: 0x4E4 | Ordinal: 1253
        void getSkin(void) const;

    // RVA: 0x597 | Ordinal: 1432
        void getWidgetIndex(class gui::Widget *) const;

    // RVA: 0x5B9 | Ordinal: 1466
        void getWidgetType(void) const;

    // RVA: 0x5F0 | Ordinal: 1521
        void insertWidget(class gui::Widget *, int);

    // RVA: 0x802 | Ordinal: 2051
        void removeAllWidgets(void);

    // RVA: 0x826 | Ordinal: 2087
        void removeWidget(class gui::Widget *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_PANEL_HPP
