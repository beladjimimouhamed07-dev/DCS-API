#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuBarSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class MenuBarSkin
{
public:

    // RVA: 0x90 | Ordinal: 145
        void MenuBarSkin(class gui::MenuBar *);

    // RVA: 0x21C | Ordinal: 541
        void copyTo(class gui::skin::MenuBarSkin *) const;

    // RVA: 0x61E | Ordinal: 1567
        void loadSubSkins_(struct lua_State *);

    // RVA: 0x9BE | Ordinal: 2495
        void unloadSubSkins_(struct lua_State *) const;

    // RVA: 0x103 | Ordinal: 260
        void _MenuBarSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUBARSKIN_HPP
