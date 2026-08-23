#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ScrollPaneSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ScrollPaneSkin
{
public:

    // RVA: 0xB3 | Ordinal: 180
        void ScrollPaneSkin(class gui::ScrollPane *);

    // RVA: 0x222 | Ordinal: 547
        void copyTo(class gui::skin::ScrollPaneSkin *) const;

    // RVA: 0x3C6 | Ordinal: 967
        void getHorzScrollBarSkin(void) const;

    // RVA: 0x4FF | Ordinal: 1280
        void getSkinData(void) const;

    // RVA: 0x563 | Ordinal: 1380
        void getVertScrollBarSkin(void) const;

    // RVA: 0x575 | Ordinal: 1398
        void getViewSkin(void) const;

    // RVA: 0x620 | Ordinal: 1569
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x9C0 | Ordinal: 2497
        void unloadSubSkins_(struct lua_State *) const;
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SCROLLPANESKIN_HPP
