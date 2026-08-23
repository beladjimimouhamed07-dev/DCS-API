#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class MenuItem
{
public:

    // RVA: 0x92 | Ordinal: 147
        void MenuItem(void);

    // RVA: 0x168 | Ordinal: 361
        void calcShortcutWidth(void) const;

    // RVA: 0x1C7 | Ordinal: 456
        void clone(void) const;

    // RVA: 0x1E1 | Ordinal: 482
        void cloneItem(void) const;

    // RVA: 0x441 | Ordinal: 1090
        void getMenuSkinData_(void) const;

    // RVA: 0x4DF | Ordinal: 1248
        void getSkin(void) const;

    // RVA: 0x5B3 | Ordinal: 1460
        void getWidgetType(void) const;

    // RVA: 0x73B | Ordinal: 1852
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUITEM_HPP
