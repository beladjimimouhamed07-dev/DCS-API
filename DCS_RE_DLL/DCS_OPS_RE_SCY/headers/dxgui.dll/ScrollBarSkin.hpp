#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ScrollBarSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ScrollBarSkin
{
public:

    // RVA: 0xAF | Ordinal: 176
        void ScrollBarSkin(class gui::ScrollBar *);

    // RVA: 0x221 | Ordinal: 546
        void copyTo(class gui::skin::ScrollBarSkin *) const;

    // RVA: 0x34D | Ordinal: 846
        void getDecreaseButtonSkin(void) const;

    // RVA: 0x3D8 | Ordinal: 985
        void getIncreaseButtonSkin(void) const;

    // RVA: 0x4FE | Ordinal: 1279
        void getSkinData(void) const;

    // RVA: 0x537 | Ordinal: 1336
        void getThumbSkin(void) const;

    // RVA: 0x61F | Ordinal: 1568
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x97D | Ordinal: 2430
        void setWidget(class gui::ScrollBar *);

    // RVA: 0x9BF | Ordinal: 2496
        void unloadSubSkins_(struct lua_State *) const;

    // RVA: 0x113 | Ordinal: 276
        void _ScrollBarSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SCROLLBARSKIN_HPP
