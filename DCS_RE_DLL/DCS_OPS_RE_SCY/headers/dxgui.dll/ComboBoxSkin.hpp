#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ComboBoxSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ComboBoxSkin
{
public:

    // RVA: 0x4F | Ordinal: 80
        void ComboBoxSkin(class gui::ComboBox *);

    // RVA: 0x214 | Ordinal: 533
        void copyTo(class gui::skin::ComboBoxSkin *) const;

    // RVA: 0x297 | Ordinal: 664
        void drawFocusRect(void) const;

    // RVA: 0x31C | Ordinal: 797
        void getButtonSkin(void) const;

    // RVA: 0x35D | Ordinal: 862
        void getEditBoxSkin(void) const;

    // RVA: 0x42D | Ordinal: 1070
        void getListBoxSkin(void) const;

    // RVA: 0x4F8 | Ordinal: 1273
        void getSkinData(void) const;

    // RVA: 0x5CE | Ordinal: 1487
        void getWindowSkin(void) const;

    // RVA: 0x619 | Ordinal: 1562
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x643 | Ordinal: 1604
        void makeFocusRect(class gui::GraphicCommands *) const;

    // RVA: 0x7DE | Ordinal: 2015
        void redrawFocusRect_(void);

    // RVA: 0x9B9 | Ordinal: 2490
        void unloadSubSkins_(struct lua_State *) const;

    // RVA: 0x9E9 | Ordinal: 2538
        void updateMaxItemCount(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COMBOBOXSKIN_HPP
