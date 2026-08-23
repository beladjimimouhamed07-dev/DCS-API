#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: SpinBoxSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class SpinBoxSkin
{
public:

    // RVA: 0xBF | Ordinal: 192
        void SpinBoxSkin(class gui::SpinBox *);

    // RVA: 0x225 | Ordinal: 550
        void copyTo(class gui::skin::SpinBoxSkin *) const;

    // RVA: 0x29C | Ordinal: 669
        void drawFocusRect(void) const;

    // RVA: 0x34E | Ordinal: 847
        void getDecreaseButtonSkin(void) const;

    // RVA: 0x35E | Ordinal: 863
        void getEditBoxSkin(void) const;

    // RVA: 0x3D9 | Ordinal: 986
        void getIncreaseButtonSkin(void) const;

    // RVA: 0x502 | Ordinal: 1283
        void getSkinData(void) const;

    // RVA: 0x623 | Ordinal: 1572
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x648 | Ordinal: 1609
        void makeFocusRect(class gui::GraphicCommands *) const;

    // RVA: 0x7E1 | Ordinal: 2018
        void redrawFocusRect_(void);

    // RVA: 0x9C3 | Ordinal: 2500
        void unloadSubSkins_(struct lua_State *) const;
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SPINBOXSKIN_HPP
