#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuSubItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class MenuSubItem
{
public:

    // RVA: 0x98 | Ordinal: 153
        void MenuSubItem(bool);

    // RVA: 0x174 | Ordinal: 373
        void calcSubMenuPosition_(class gui::Menu *) const;

    // RVA: 0x1CA | Ordinal: 459
        void clone(void) const;

    // RVA: 0x1E4 | Ordinal: 485
        void cloneItem(void) const;

    // RVA: 0x444 | Ordinal: 1093
        void getMenuSkinData_(void) const;

    // RVA: 0x4E3 | Ordinal: 1252
        void getSkin(void) const;

    // RVA: 0x5B6 | Ordinal: 1463
        void getWidgetType(void) const;

    // RVA: 0x85D | Ordinal: 2142
        void setActive(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUSUBITEM_HPP
