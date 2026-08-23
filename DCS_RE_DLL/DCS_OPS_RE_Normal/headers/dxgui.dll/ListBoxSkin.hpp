#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ListBoxSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ListBoxSkin
{
public:

    // RVA: 0x8B | Ordinal: 140
        void ListBoxSkin(class gui::ListBox *);

    // RVA: 0x21B | Ordinal: 540
        void copyTo(class gui::skin::ListBoxSkin *) const;

    // RVA: 0x3C5 | Ordinal: 966
        void getHorzScrollBarSkin(void) const;

    // RVA: 0x414 | Ordinal: 1045
        void getItemSkinData(void) const;

    // RVA: 0x562 | Ordinal: 1379
        void getVertScrollBarSkin(void) const;

    // RVA: 0x61D | Ordinal: 1566
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x9BD | Ordinal: 2494
        void unloadSubSkins_(struct lua_State *) const;

    // RVA: 0x100 | Ordinal: 257
        void _ListBoxSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_LISTBOXSKIN_HPP
