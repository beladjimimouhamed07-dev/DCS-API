#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: GridView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class GridView
{
public:

    // RVA: 0x7A | Ordinal: 123
        void GridView(class gui::Grid &);

    // RVA: 0x28F | Ordinal: 656
        void drawChildren(void) const;

    // RVA: 0x4D6 | Ordinal: 1239
        void getSkin(void) const;

    // RVA: 0x63A | Ordinal: 1595
        void makeChildren(class gui::GraphicCommands *) const;

    // RVA: 0x667 | Ordinal: 1640
        void markNeedUpdate(void);

    // RVA: 0x7A8 | Ordinal: 1961
        void onWidgetDestroy(class gui::WidgetHandler *);

    // RVA: 0x9C6 | Ordinal: 2503
        void update(void);

    // RVA: 0x9E3 | Ordinal: 2532
        void updateHoveredRow(void);

    // RVA: 0xFB | Ordinal: 252
        void _GridView(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_GRIDVIEW_HPP
