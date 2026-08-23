#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: PieMenuSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class PieMenuSkin
{
public:

    // RVA: 0xA1 | Ordinal: 162
        void PieMenuSkin(class gui::PieMenu *);

    // RVA: 0x21E | Ordinal: 543
        void copyTo(class gui::skin::PieMenuSkin *) const;

    // RVA: 0x261 | Ordinal: 610
        void doRedraw(void);

    // RVA: 0x29A | Ordinal: 667
        void drawFocusRect(void) const;

    // RVA: 0x2B8 | Ordinal: 697
        void draw_(void) const;

    // RVA: 0x416 | Ordinal: 1047
        void getItemSkinData(void) const;

    // RVA: 0x510 | Ordinal: 1297
        void getSubItemSkinData(void) const;

    // RVA: 0x646 | Ordinal: 1607
        void makeFocusRect(class gui::GraphicCommands *) const;

    // RVA: 0x663 | Ordinal: 1636
        void make_(class gui::GraphicCommands *) const;

    // RVA: 0x7ED | Ordinal: 2030
        void redraw_(void);

    // RVA: 0x10E | Ordinal: 271
        void _PieMenuSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_PIEMENUSKIN_HPP
