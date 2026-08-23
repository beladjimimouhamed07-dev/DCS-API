#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: GridViewSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class GridViewSkin
{
public:

    // RVA: 0x7B | Ordinal: 124
        void GridViewSkin(class gui::GridView *);

    // RVA: 0x21A | Ordinal: 539
        void copyTo(class gui::skin::GridViewSkin *) const;

    // RVA: 0x281 | Ordinal: 642
        void draw(void) const;

    // RVA: 0x3D0 | Ordinal: 977
        void getHoverColor(void) const;

    // RVA: 0x62B | Ordinal: 1580
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x7D1 | Ordinal: 2002
        void redraw(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_GRIDVIEWSKIN_HPP
