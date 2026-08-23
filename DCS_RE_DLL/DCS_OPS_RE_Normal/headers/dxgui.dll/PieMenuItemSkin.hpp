#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: PieMenuItemSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class PieMenuItemSkin
{
public:

    // RVA: 0xA0 | Ordinal: 161
        void PieMenuItemSkin(class gui::PieMenuItem *, bool);

    // RVA: 0x260 | Ordinal: 609
        void doRedraw(void);

    // RVA: 0x299 | Ordinal: 666
        void drawFocusRect(void) const;

    // RVA: 0x645 | Ordinal: 1606
        void makeFocusRect(class gui::GraphicCommands *) const;

    // RVA: 0x10D | Ordinal: 270
        void _PieMenuItemSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_PIEMENUITEMSKIN_HPP
