#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ScrollPane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ScrollPane
{
public:

    // RVA: 0xB2 | Ordinal: 179
        void ScrollPane(void);

    // RVA: 0x19E | Ordinal: 415
        void clear(void);

    // RVA: 0x1D2 | Ordinal: 467
        void clone(void) const;

    // RVA: 0x206 | Ordinal: 519
        void copyParams(class gui::ScrollPane *) const;

    // RVA: 0x2EF | Ordinal: 752
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x390 | Ordinal: 913
        void getGenerateMouseDoubleClickCallbacks(class osg::Vec2i const &, enum gui::MouseButton) const;

    // RVA: 0x392 | Ordinal: 915
        void getGenerateMouseDownCallbacks(class osg::Vec2i const &, enum gui::MouseButton) const;

    // RVA: 0x394 | Ordinal: 917
        void getGenerateMouseMoveCallbacks(class osg::Vec2i const &) const;

    // RVA: 0x396 | Ordinal: 919
        void getGenerateMouseUpCallbacks(class osg::Vec2i const &, enum gui::MouseButton) const;

    // RVA: 0x3AB | Ordinal: 940
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3BB | Ordinal: 956
        void getHorzMouseWheel(void) const;

    // RVA: 0x3BF | Ordinal: 960
        void getHorzScrollBar(void) const;

    // RVA: 0x3C2 | Ordinal: 963
        void getHorzScrollBarPageStep(void) const;

    // RVA: 0x3C8 | Ordinal: 969
        void getHorzScrollBarStep(void) const;

    // RVA: 0x3CD | Ordinal: 974
        void getHorzScrollRange(double &, double &) const;

    // RVA: 0x3CE | Ordinal: 975
        void getHorzScrollValue(void) const;

    // RVA: 0x41D | Ordinal: 1054
        void getLayout(void) const;

    // RVA: 0x4EC | Ordinal: 1261
        void getSkin(void) const;

    // RVA: 0x559 | Ordinal: 1370
        void getVertMouseWheel(void) const;

    // RVA: 0x55D | Ordinal: 1374
        void getVertScrollBar(void) const;

    // RVA: 0x55F | Ordinal: 1376
        void getVertScrollBarPageStep(void) const;

    // RVA: 0x565 | Ordinal: 1382
        void getVertScrollBarStep(void) const;

    // RVA: 0x56A | Ordinal: 1387
        void getVertScrollRange(double &, double &) const;

    // RVA: 0x56B | Ordinal: 1388
        void getVertScrollValue(void) const;

    // RVA: 0x570 | Ordinal: 1393
        void getView(void) const;

    // RVA: 0x587 | Ordinal: 1416
        void getWidget(int) const;

    // RVA: 0x592 | Ordinal: 1427
        void getWidgetCount(void) const;

    // RVA: 0x599 | Ordinal: 1434
        void getWidgetIndex(class gui::Widget *) const;

    // RVA: 0x5BE | Ordinal: 1471
        void getWidgetType(void) const;

    // RVA: 0x5F2 | Ordinal: 1523
        void insertWidget(class gui::Widget *, int);

    // RVA: 0x69D | Ordinal: 1694
        void onHorzScrollBarChange_(void);

    // RVA: 0x749 | Ordinal: 1866
        void onMouseWheel(class osg::Vec2i const &, int);

    // RVA: 0x775 | Ordinal: 1910
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x79A | Ordinal: 1947
        void onVertScrollBarChange_(void);

    // RVA: 0x7EE | Ordinal: 2031
        void redraw_(void);

    // RVA: 0x804 | Ordinal: 2053
        void removeAllWidgets(void);

    // RVA: 0x828 | Ordinal: 2089
        void removeWidget(class gui::Widget *);

    // RVA: 0x8BE | Ordinal: 2239
        void setHorzMouseWheel(bool);

    // RVA: 0x8C0 | Ordinal: 2241
        void setHorzScrollBarPageStep(double);

    // RVA: 0x8C2 | Ordinal: 2243
        void setHorzScrollBarStep(double);

    // RVA: 0x8C5 | Ordinal: 2246
        void setHorzScrollValue(double);

    // RVA: 0x8D7 | Ordinal: 2264
        void setLayout(class gui::LayoutHandler *);

    // RVA: 0x96D | Ordinal: 2414
        void setVertMouseWheel(bool);

    // RVA: 0x96F | Ordinal: 2416
        void setVertScrollBarPageStep(double);

    // RVA: 0x971 | Ordinal: 2418
        void setVertScrollBarStep(double);

    // RVA: 0x974 | Ordinal: 2421
        void setVertScrollValue(double);

    // RVA: 0x976 | Ordinal: 2423
        void setViewOffset_(void);

    // RVA: 0xA13 | Ordinal: 2580
        void updateWidgetBounds_(void);

    // RVA: 0xA14 | Ordinal: 2581
        void updateWidgetsBounds(void);

    // RVA: 0xA15 | Ordinal: 2582
        void updateWidgetsSizes_(bool, bool);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SCROLLPANE_HPP
