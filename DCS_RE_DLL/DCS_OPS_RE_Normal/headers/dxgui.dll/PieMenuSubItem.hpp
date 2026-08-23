#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: PieMenuSubItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class PieMenuSubItem
{
public:

    // RVA: 0xA2 | Ordinal: 163
        void PieMenuSubItem(void);

    // RVA: 0x1D0 | Ordinal: 465
        void clone(void) const;

    // RVA: 0x1E6 | Ordinal: 487
        void cloneItem(void) const;

    // RVA: 0x446 | Ordinal: 1095
        void getMenuSkinData_(void) const;

    // RVA: 0x4E7 | Ordinal: 1256
        void getSkin(void) const;

    // RVA: 0x513 | Ordinal: 1300
        void getSubMenu(void) const;

    // RVA: 0x5BC | Ordinal: 1469
        void getWidgetType(void) const;

    // RVA: 0x611 | Ordinal: 1554
        void loadSkin_(void);

    // RVA: 0x6B7 | Ordinal: 1720
        void onItemMouseUp_(void);

    // RVA: 0x939 | Ordinal: 2362
        void setSubMenu(class gui::PieMenu *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_PIEMENUSUBITEM_HPP
