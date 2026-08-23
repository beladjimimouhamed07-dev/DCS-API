#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Menu
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Menu
{
public:

    // RVA: 0x8D | Ordinal: 142
        void Menu(void);

    // RVA: 0x13A | Ordinal: 315
        void activateParentMenus_(void);

    // RVA: 0x13B | Ordinal: 316
        void activateSubMenus_(void);

    // RVA: 0x16F | Ordinal: 368
        void calcSize(void) const;

    // RVA: 0x19A | Ordinal: 411
        void clear(void);

    // RVA: 0x1C3 | Ordinal: 452
        void clone(void) const;

    // RVA: 0x1FA | Ordinal: 507
        void copyParams(class gui::Menu *) const;

    // RVA: 0x3A7 | Ordinal: 936
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x450 | Ordinal: 1105
        void getMouseButtonDown_(void) const;

    // RVA: 0x458 | Ordinal: 1113
        void getMouseInsideItem(void) const;

    // RVA: 0x4B0 | Ordinal: 1201
        void getSelectedItem(void) const;

    // RVA: 0x4DB | Ordinal: 1244
        void getSkin(void) const;

    // RVA: 0x585 | Ordinal: 1414
        void getWidget(int) const;

    // RVA: 0x590 | Ordinal: 1425
        void getWidgetCount(void) const;

    // RVA: 0x596 | Ordinal: 1431
        void getWidgetIndex(class gui::MenuItemBase *) const;

    // RVA: 0x5AF | Ordinal: 1456
        void getWidgetType(void) const;

    // RVA: 0x5DD | Ordinal: 1502
        void hideParentMenu_(void);

    // RVA: 0x5DE | Ordinal: 1503
        void highlightSubMenuItem(void);

    // RVA: 0x5EF | Ordinal: 1520
        void insertWidget(class gui::MenuItemBase *, int);

    // RVA: 0x693 | Ordinal: 1684
        void onFocusChanged_(bool);

    // RVA: 0x6A0 | Ordinal: 1697
        void onHoveredWidgetChanged_(class gui::WidgetHandler *, class osg::Vec2i const &);

    // RVA: 0x6A9 | Ordinal: 1706
        void onItemMouseIn_(class gui::WidgetHandler *);

    // RVA: 0x6AD | Ordinal: 1710
        void onItemMouseOut_(class gui::WidgetHandler *);

    // RVA: 0x6B8 | Ordinal: 1721
        void onItemSelected_(class gui::WidgetHandler *);

    // RVA: 0x6F1 | Ordinal: 1778
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x705 | Ordinal: 1798
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x717 | Ordinal: 1816
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x738 | Ordinal: 1849
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x753 | Ordinal: 1876
        void onParentMenuChanged_(class gui::WidgetHandler *);

    // RVA: 0x757 | Ordinal: 1880
        void onPositionChanged_(class osg::Vec2i const &);

    // RVA: 0x783 | Ordinal: 1924
        void onSubMenuChanged_(class gui::WidgetHandler *);

    // RVA: 0x7A0 | Ordinal: 1953
        void onVisibleChanged_(bool);

    // RVA: 0x801 | Ordinal: 2050
        void removeAllWidgets(void);

    // RVA: 0x80E | Ordinal: 2063
        void removeHighlight_(void);

    // RVA: 0x825 | Ordinal: 2086
        void removeWidget(class gui::MenuItemBase *);

    // RVA: 0x8DF | Ordinal: 2272
        void setListener(class gui::Menu::Listener *);

    // RVA: 0x905 | Ordinal: 2310
        void setParentMenu(class gui::Menu *);

    // RVA: 0x937 | Ordinal: 2360
        void setSubMenu(class gui::Menu *);

    // RVA: 0x9D0 | Ordinal: 2513
        void updateContent_(void);

    // RVA: 0x9F7 | Ordinal: 2552
        void updateSize_(void);

    // RVA: 0xA18 | Ordinal: 2585
        void update_(double);

    // RVA: 0xA23 | Ordinal: 2596
        void validateSize_(class osg::Vec2i const &) const;

    // RVA: 0x101 | Ordinal: 258
        void _Menu(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENU_HPP
