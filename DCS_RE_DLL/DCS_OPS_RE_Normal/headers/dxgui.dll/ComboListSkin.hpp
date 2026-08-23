#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ComboListSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ComboListSkin
{
public:

    // RVA: 0x54 | Ordinal: 85
        void ComboListSkin(class gui::ComboList *);

    // RVA: 0x215 | Ordinal: 534
        void copyTo(class gui::skin::ComboListSkin *) const;

    // RVA: 0x31D | Ordinal: 798
        void getButtonSkin(void) const;

    // RVA: 0x370 | Ordinal: 881
        void getFocusRectBounds_(void) const;

    // RVA: 0x42E | Ordinal: 1071
        void getListBoxSkin(void) const;

    // RVA: 0x4F9 | Ordinal: 1274
        void getSkinData(void) const;

    // RVA: 0x573 | Ordinal: 1396
        void getViewSkin(void) const;

    // RVA: 0x5CF | Ordinal: 1488
        void getWindowSkin(void) const;

    // RVA: 0x61A | Ordinal: 1563
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x9BA | Ordinal: 2491
        void unloadSubSkins_(struct lua_State *) const;

    // RVA: 0x9EA | Ordinal: 2539
        void updateMaxItemCount(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COMBOLISTSKIN_HPP
