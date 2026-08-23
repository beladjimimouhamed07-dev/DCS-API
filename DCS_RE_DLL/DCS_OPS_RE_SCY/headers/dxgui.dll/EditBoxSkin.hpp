#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: EditBoxSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class EditBoxSkin
{
public:

    // RVA: 0x67 | Ordinal: 104
        void EditBoxSkin(class gui::EditBox *);

    // RVA: 0x178 | Ordinal: 377
        void calcTextSize_(enum gui::skin::InteractiveState, int) const;

    // RVA: 0x218 | Ordinal: 537
        void copyTo(class gui::skin::EditBoxSkin *) const;

    // RVA: 0x298 | Ordinal: 665
        void drawFocusRect(void) const;

    // RVA: 0x2B0 | Ordinal: 689
        void drawText_(void) const;

    // RVA: 0x309 | Ordinal: 778
        void getActualTextLineHeight(void) const;

    // RVA: 0x321 | Ordinal: 802
        void getCaretSkin(void) const;

    // RVA: 0x387 | Ordinal: 904
        void getFont(void) const;

    // RVA: 0x3C4 | Ordinal: 965
        void getHorzScrollBarSkin(void) const;

    // RVA: 0x4FA | Ordinal: 1275
        void getSkinData(void) const;

    // RVA: 0x529 | Ordinal: 1322
        void getTextColor(void) const;

    // RVA: 0x561 | Ordinal: 1378
        void getVertScrollBarSkin(void) const;

    // RVA: 0x574 | Ordinal: 1397
        void getViewSkin(void) const;

    // RVA: 0x61C | Ordinal: 1565
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x629 | Ordinal: 1578
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x644 | Ordinal: 1605
        void makeFocusRect(class gui::GraphicCommands *) const;

    // RVA: 0x65D | Ordinal: 1630
        void makeText_(class gui::GraphicCommands *) const;

    // RVA: 0x7CE | Ordinal: 1999
        void redraw(void);

    // RVA: 0x7DF | Ordinal: 2016
        void redrawFocusRect_(void);

    // RVA: 0x7E6 | Ordinal: 2023
        void redrawText_(enum gui::skin::InteractiveState, int);

    // RVA: 0x9BC | Ordinal: 2493
        void unloadSubSkins_(struct lua_State *) const;

    // RVA: 0xED | Ordinal: 238
        void _EditBoxSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_EDITBOXSKIN_HPP
