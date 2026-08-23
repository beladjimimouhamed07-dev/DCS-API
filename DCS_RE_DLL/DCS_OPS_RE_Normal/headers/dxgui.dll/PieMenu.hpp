#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: PieMenu
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class PieMenu
{
public:

    // RVA: 0x9E | Ordinal: 159
        void PieMenu(void);

    // RVA: 0x15E | Ordinal: 351
        void calcItemAngle_(void) const;

    // RVA: 0x19D | Ordinal: 414
        void clear(void);

    // RVA: 0x1CE | Ordinal: 463
        void clone(void) const;

    // RVA: 0x201 | Ordinal: 514
        void copyParams(class gui::PieMenu *) const;

    // RVA: 0x26A | Ordinal: 619
        void doRedrawChildren(void);

    // RVA: 0x26C | Ordinal: 621
        void doRedrawItems_(void);

    // RVA: 0x290 | Ordinal: 657
        void drawChildren(void) const;

    // RVA: 0x324 | Ordinal: 805
        void getCenter(void) const;

    // RVA: 0x357 | Ordinal: 856
        void getDrawToTarget(void) const;

    // RVA: 0x38D | Ordinal: 910
        void getGap(void) const;

    // RVA: 0x3A9 | Ordinal: 938
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3DA | Ordinal: 987
        void getInitialAngle(void) const;

    // RVA: 0x407 | Ordinal: 1032
        void getItemAtScreenPoint_(class osg::Vec2i const &) const;

    // RVA: 0x433 | Ordinal: 1076
        void getMaxItemRadius(void) const;

    // RVA: 0x447 | Ordinal: 1096
        void getMinItemRadius(void) const;

    // RVA: 0x452 | Ordinal: 1107
        void getMouseButtonDown_(void) const;

    // RVA: 0x459 | Ordinal: 1114
        void getMouseInsideItem(void) const;

    // RVA: 0x472 | Ordinal: 1139
        void getParentMenu(void) const;

    // RVA: 0x4A0 | Ordinal: 1185
        void getScreenPointInSector_(class osg::Vec2i const &, double, double) const;

    // RVA: 0x4A3 | Ordinal: 1188
        void getScreenPointInsideRadius_(class osg::Vec2i const &) const;

    // RVA: 0x4B1 | Ordinal: 1202
        void getSelectedItem(void) const;

    // RVA: 0x4E5 | Ordinal: 1254
        void getSkin(void) const;

    // RVA: 0x586 | Ordinal: 1415
        void getWidget(int) const;

    // RVA: 0x58A | Ordinal: 1419
        void getWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x591 | Ordinal: 1426
        void getWidgetCount(void) const;

    // RVA: 0x598 | Ordinal: 1433
        void getWidgetIndex(class gui::PieMenuItem *) const;

    // RVA: 0x5BA | Ordinal: 1467
        void getWidgetType(void) const;

    // RVA: 0x5F1 | Ordinal: 1522
        void insertWidget(class gui::PieMenuItem *, int);

    // RVA: 0x63B | Ordinal: 1596
        void makeChildren(class gui::GraphicCommands *) const;

    // RVA: 0x6AA | Ordinal: 1707
        void onItemMouseIn_(class gui::WidgetHandler *);

    // RVA: 0x6AE | Ordinal: 1711
        void onItemMouseOut_(class gui::WidgetHandler *);

    // RVA: 0x6B9 | Ordinal: 1722
        void onItemSelected_(class gui::WidgetHandler *);

    // RVA: 0x6F4 | Ordinal: 1781
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x73E | Ordinal: 1855
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x758 | Ordinal: 1881
        void onPositionChanged_(class osg::Vec2i const &);

    // RVA: 0x771 | Ordinal: 1906
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x7A3 | Ordinal: 1956
        void onVisibleChanged_(bool);

    // RVA: 0x803 | Ordinal: 2052
        void removeAllWidgets(void);

    // RVA: 0x827 | Ordinal: 2088
        void removeWidget(class gui::PieMenuItem *);

    // RVA: 0x881 | Ordinal: 2178
        void setCurrSubMenu(class gui::WidgetHandler *);

    // RVA: 0x891 | Ordinal: 2194
        void setDirty(enum gui::Widget::DirtyFlag);

    // RVA: 0x8CA | Ordinal: 2251
        void setInitialAngle(double);

    // RVA: 0x8D5 | Ordinal: 2262
        void setItemsAngle_(void);

    // RVA: 0x8E0 | Ordinal: 2273
        void setListener(class gui::PieMenu::Listener *);

    // RVA: 0x8E9 | Ordinal: 2282
        void setMinItemRadius(int);

    // RVA: 0x906 | Ordinal: 2311
        void setParentMenu(class gui::WidgetHandler *);

    // RVA: 0xA19 | Ordinal: 2586
        void update_(double);

    // RVA: 0x10C | Ordinal: 269
        void _PieMenu(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_PIEMENU_HPP
