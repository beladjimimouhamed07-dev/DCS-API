#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: CheckListBoxSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class CheckListBoxSkin
{
public:

    // RVA: 0x46 | Ordinal: 71
        void CheckListBoxSkin(class gui::CheckListBox *);

    // RVA: 0x213 | Ordinal: 532
        void copyTo(class gui::skin::CheckListBoxSkin *) const;

    // RVA: 0x36F | Ordinal: 880
        void getFocusRectBounds_(void) const;

    // RVA: 0x3C3 | Ordinal: 964
        void getHorzScrollBarSkin(void) const;

    // RVA: 0x413 | Ordinal: 1044
        void getItemSkinData(void) const;

    // RVA: 0x560 | Ordinal: 1377
        void getVertScrollBarSkin(void) const;

    // RVA: 0x618 | Ordinal: 1561
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x9B8 | Ordinal: 2489
        void unloadSubSkins_(struct lua_State *) const;

    // RVA: 0xE1 | Ordinal: 226
        void _CheckListBoxSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_CHECKLISTBOXSKIN_HPP
