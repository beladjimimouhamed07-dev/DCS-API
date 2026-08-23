#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: AutoScrollTextSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class AutoScrollTextSkin
{
public:

    // RVA: 0x36 | Ordinal: 55
        void AutoScrollTextSkin(class gui::AutoScrollText *);

    // RVA: 0x212 | Ordinal: 531
        void copyTo(class gui::skin::AutoScrollTextSkin *) const;

    // RVA: 0x4BD | Ordinal: 1214
        void getSeparatorSkin(void) const;

    // RVA: 0x4F6 | Ordinal: 1271
        void getSkinData(void) const;

    // RVA: 0x530 | Ordinal: 1329
        void getTextSkin(void) const;

    // RVA: 0x617 | Ordinal: 1560
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x7DD | Ordinal: 2014
        void redrawFocusRect_(void);

    // RVA: 0x9B7 | Ordinal: 2488
        void unloadSubSkins_(struct lua_State *) const;

    // RVA: 0xDB | Ordinal: 220
        void _AutoScrollTextSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_AUTOSCROLLTEXTSKIN_HPP
