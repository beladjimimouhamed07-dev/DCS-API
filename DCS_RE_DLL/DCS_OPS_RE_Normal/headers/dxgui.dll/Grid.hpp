#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Grid
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Grid
{
public:

    // RVA: 0x75 | Ordinal: 118
        void Grid(void);

    // RVA: 0x146 | Ordinal: 327
        void addRowCallback(enum gui::GridRowCallbackType, class std::shared_ptr<class std::function<void __cdecl(int, int)>>);

    // RVA: 0x16C | Ordinal: 365
        void calcSize(void) const;

    // RVA: 0x17E | Ordinal: 383
        void callGridRowCallbacks_(enum gui::GridRowCallbackType, int, int);

    // RVA: 0x185 | Ordinal: 390
        void changeColumnWidth_(int, int);

    // RVA: 0x197 | Ordinal: 408
        void clear(void);

    // RVA: 0x1A1 | Ordinal: 418
        void clearColumn(int);

    // RVA: 0x1A4 | Ordinal: 421
        void clearRow(int);

    // RVA: 0x1A5 | Ordinal: 422
        void clearRows(void);

    // RVA: 0x1A6 | Ordinal: 423
        void clearRows_(bool);

    // RVA: 0x1B9 | Ordinal: 442
        void clone(void) const;

    // RVA: 0x1F5 | Ordinal: 502
        void copyParams(class gui::Grid *) const;

    // RVA: 0x253 | Ordinal: 596
        void detachWidget_(class gui::WidgetHandler *);

    // RVA: 0x2EA | Ordinal: 747
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x322 | Ordinal: 803
        void getCell(int, int) const;

    // RVA: 0x323 | Ordinal: 804
        void getCell_(int, int) const;

    // RVA: 0x33B | Ordinal: 828
        void getColumnCount(void) const;

    // RVA: 0x33D | Ordinal: 830
        void getColumnHeader(int) const;

    // RVA: 0x33E | Ordinal: 831
        void getColumnIndexValid_(int) const;

    // RVA: 0x33F | Ordinal: 832
        void getColumnIndex_(int) const;

    // RVA: 0x340 | Ordinal: 833
        void getColumnVisible_(int) const;

    // RVA: 0x341 | Ordinal: 834
        void getColumnWidth(int) const;

    // RVA: 0x36A | Ordinal: 875
        void getFirstVisibleRowOffset(void) const;

    // RVA: 0x36B | Ordinal: 876
        void getFixedColumnCount(void) const;

    // RVA: 0x3A4 | Ordinal: 933
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3B1 | Ordinal: 946
        void getHeader(void) const;

    // RVA: 0x3BD | Ordinal: 958
        void getHorzScrollBar(void) const;

    // RVA: 0x3C1 | Ordinal: 962
        void getHorzScrollBarPageStep(void) const;

    // RVA: 0x3C7 | Ordinal: 968
        void getHorzScrollBarStep(void) const;

    // RVA: 0x3CA | Ordinal: 971
        void getHorzScrollBarValue_(void) const;

    // RVA: 0x3CB | Ordinal: 972
        void getHorzScrollPosition(void) const;

    // RVA: 0x3D1 | Ordinal: 978
        void getHoveredRow(void) const;

    // RVA: 0x455 | Ordinal: 1110
        void getMouseColumnResizing(void) const;

    // RVA: 0x457 | Ordinal: 1112
        void getMouseCursorColumnRow(class osg::Vec2i const &, int &, int &) const;

    // RVA: 0x491 | Ordinal: 1170
        void getResizeColumnIndex_(class osg::Vec2i const &) const;

    // RVA: 0x499 | Ordinal: 1178
        void getRowCount(void) const;

    // RVA: 0x49A | Ordinal: 1179
        void getRowHeight(int) const;

    // RVA: 0x49B | Ordinal: 1180
        void getRowIndexValid_(int) const;

    // RVA: 0x49C | Ordinal: 1181
        void getRowIndex_(int) const;

    // RVA: 0x49D | Ordinal: 1182
        void getRowVisible_(int) const;

    // RVA: 0x4A8 | Ordinal: 1193
        void getScrollBarVisibility_(bool &, bool &) const;

    // RVA: 0x4B3 | Ordinal: 1204
        void getSelectedRow(void) const;

    // RVA: 0x4D4 | Ordinal: 1237
        void getSkin(void) const;

    // RVA: 0x55B | Ordinal: 1372
        void getVertScrollBar(void) const;

    // RVA: 0x55E | Ordinal: 1375
        void getVertScrollBarPageStep(void) const;

    // RVA: 0x564 | Ordinal: 1381
        void getVertScrollBarStep(void) const;

    // RVA: 0x567 | Ordinal: 1384
        void getVertScrollBarValue_(void) const;

    // RVA: 0x569 | Ordinal: 1386
        void getVertScrollPosition(void) const;

    // RVA: 0x56E | Ordinal: 1391
        void getView(void) const;

    // RVA: 0x57B | Ordinal: 1404
        void getVisibleColumns_(class ed::vector<int, class ed::allocator<int>> &, int &) const;

    // RVA: 0x582 | Ordinal: 1411
        void getVisibleRows_(void) const;

    // RVA: 0x5A7 | Ordinal: 1448
        void getWidgetType(void) const;

    // RVA: 0x5E2 | Ordinal: 1507
        void insertColumn(int, class gui::GridHeaderCell *, int);

    // RVA: 0x5EC | Ordinal: 1517
        void insertRow(int, int);

    // RVA: 0x668 | Ordinal: 1641
        void markToRedraw_(void);

    // RVA: 0x69B | Ordinal: 1692
        void onHorzScrollBarChange_(void);

    // RVA: 0x6C4 | Ordinal: 1733
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x713 | Ordinal: 1812
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x725 | Ordinal: 1830
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x745 | Ordinal: 1862
        void onMouseWheel(class osg::Vec2i const &, int);

    // RVA: 0x76F | Ordinal: 1904
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x798 | Ordinal: 1945
        void onVertScrollBarChange_(void);

    // RVA: 0x7F7 | Ordinal: 2040
        void removeAll(void);

    // RVA: 0x7FD | Ordinal: 2046
        void removeAllRows(void);

    // RVA: 0x7FE | Ordinal: 2047
        void removeAllRows_(void);

    // RVA: 0x809 | Ordinal: 2058
        void removeCell(int, int);

    // RVA: 0x80A | Ordinal: 2059
        void removeColumn(int);

    // RVA: 0x80C | Ordinal: 2061
        void removeColumn_(int, bool);

    // RVA: 0x81E | Ordinal: 2079
        void removeRow(int);

    // RVA: 0x81F | Ordinal: 2080
        void removeRowCallback(enum gui::GridRowCallbackType, class std::shared_ptr<class std::function<void __cdecl(int, int)>>);

    // RVA: 0x820 | Ordinal: 2081
        void removeRow_(int, bool);

    // RVA: 0x84A | Ordinal: 2123
        void selectRow(int);

    // RVA: 0x872 | Ordinal: 2163
        void setCell(int, int, class gui::Widget *, bool);

    // RVA: 0x87D | Ordinal: 2174
        void setColumnHeader(int, class gui::GridHeaderCell *);

    // RVA: 0x87E | Ordinal: 2175
        void setColumnWidth(int, int);

    // RVA: 0x8A5 | Ordinal: 2214
        void setFixedColumnCount(int);

    // RVA: 0x8B5 | Ordinal: 2230
        void setHeaderCellSkin_(class gui::GridHeaderCell *&);

    // RVA: 0x8BF | Ordinal: 2240
        void setHorzScrollBarPageStep(double);

    // RVA: 0x8C1 | Ordinal: 2242
        void setHorzScrollBarStep(double);

    // RVA: 0x8C4 | Ordinal: 2245
        void setHorzScrollPosition(int);

    // RVA: 0x8EC | Ordinal: 2285
        void setMouseColumnResizing(bool);

    // RVA: 0x91C | Ordinal: 2333
        void setRowHeight(int, int);

    // RVA: 0x91D | Ordinal: 2334
        void setRowVisible(int);

    // RVA: 0x96E | Ordinal: 2415
        void setVertScrollBarPageStep(double);

    // RVA: 0x970 | Ordinal: 2417
        void setVertScrollBarStep(double);

    // RVA: 0x973 | Ordinal: 2420
        void setVertScrollPosition(int);

    // RVA: 0x975 | Ordinal: 2422
        void setViewDirty(void);

    // RVA: 0x9A4 | Ordinal: 2469
        void stretchColumns(class ed::vector<int, class ed::allocator<int>> const &);

    // RVA: 0x9CE | Ordinal: 2511
        void updateChildren_(void);

    // RVA: 0x9DB | Ordinal: 2524
        void updateHeaderSize_(bool);

    // RVA: 0x9DC | Ordinal: 2525
        void updateHeader_(void);

    // RVA: 0x9DE | Ordinal: 2527
        void updateHorzScrollBarSize_(bool);

    // RVA: 0x9E1 | Ordinal: 2530
        void updateHorzScrollBar_(bool);

    // RVA: 0x9E4 | Ordinal: 2533
        void updateHoveredRow_(class osg::Vec2i const &);

    // RVA: 0xA04 | Ordinal: 2565
        void updateVertScrollBarSize_(bool);

    // RVA: 0xA07 | Ordinal: 2568
        void updateVertScrollBar_(bool);

    // RVA: 0xA0A | Ordinal: 2571
        void updateViewSize_(bool, bool);

    // RVA: 0xA0E | Ordinal: 2575
        void updateView_(void);

    // RVA: 0xA10 | Ordinal: 2577
        void updateVisibleRowIndices_(void);

    // RVA: 0xA11 | Ordinal: 2578
        void updateVisibleRow_(void);

    // RVA: 0xF9 | Ordinal: 250
        void _Grid(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_GRID_HPP
