#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: TabGroupItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class TabGroupItem
{
public:

    // RVA: 0xC3 | Ordinal: 196
        void TabGroupItem(bool);

    // RVA: 0x1D6 | Ordinal: 471
        void clone(void) const;

    // RVA: 0x3AE | Ordinal: 943
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3E1 | Ordinal: 994
        void getInnerState(void) const;

    // RVA: 0x3FE | Ordinal: 1023
        void getInteractiveState(void) const;

    // RVA: 0x4F1 | Ordinal: 1266
        void getSkin(void) const;

    // RVA: 0x508 | Ordinal: 1289
        void getState(void) const;

    // RVA: 0x5C2 | Ordinal: 1475
        void getWidgetType(void) const;

    // RVA: 0x698 | Ordinal: 1689
        void onHide_(void);

    // RVA: 0x6F6 | Ordinal: 1783
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x70A | Ordinal: 1803
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x71C | Ordinal: 1821
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x751 | Ordinal: 1874
        void onParentChanged_(class gui::WidgetHandler *);

    // RVA: 0x769 | Ordinal: 1898
        void onShow_(void);

    // RVA: 0x77C | Ordinal: 1917
        void onStateChanged_(bool);

    // RVA: 0x930 | Ordinal: 2353
        void setState(bool);

    // RVA: 0x119 | Ordinal: 282
        void _TabGroupItem(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_TABGROUPITEM_HPP
