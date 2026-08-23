#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuBarItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class MenuBarItem
{
public:

    // RVA: 0x8F | Ordinal: 144
        void MenuBarItem(void);

    // RVA: 0x1C5 | Ordinal: 454
        void clone(void) const;

    // RVA: 0x1FC | Ordinal: 509
        void copyParams(class gui::MenuBarItem *) const;

    // RVA: 0x304 | Ordinal: 773
        void getActive(void) const;

    // RVA: 0x3A8 | Ordinal: 937
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3DF | Ordinal: 992
        void getInnerState(void) const;

    // RVA: 0x3F7 | Ordinal: 1016
        void getInteractiveState(void) const;

    // RVA: 0x43D | Ordinal: 1086
        void getMenu(void) const;

    // RVA: 0x4DD | Ordinal: 1246
        void getSkin(void) const;

    // RVA: 0x5B1 | Ordinal: 1458
        void getWidgetType(void) const;

    // RVA: 0x6D6 | Ordinal: 1751
        void onMenuVisibleChanged_(class gui::Menu *);

    // RVA: 0x706 | Ordinal: 1799
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x718 | Ordinal: 1817
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x85B | Ordinal: 2140
        void setActive(bool);

    // RVA: 0x8E5 | Ordinal: 2278
        void setMenu(class gui::Menu *);

    // RVA: 0x102 | Ordinal: 259
        void _MenuBarItem(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUBARITEM_HPP
