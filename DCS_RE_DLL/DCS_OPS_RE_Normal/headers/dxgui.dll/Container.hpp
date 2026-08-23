#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Container
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Container
{
public:

    // RVA: 0x58 | Ordinal: 89
        void Container(void);

    // RVA: 0x160 | Ordinal: 353
        void calcMaxSize(void) const;

    // RVA: 0x1AA | Ordinal: 427
        void clear_(void);

    // RVA: 0x1F2 | Ordinal: 499
        void copyParams(class gui::Container *) const;

    // RVA: 0x241 | Ordinal: 578
        void deleteWidgets_(void);

    // RVA: 0x269 | Ordinal: 618
        void doRedrawChildren(void);

    // RVA: 0x28D | Ordinal: 654
        void drawChildren(void) const;

    // RVA: 0x2E7 | Ordinal: 744
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x2F4 | Ordinal: 757
        void findWidgetByName(class ed::basic_string<wchar_t> const &) const;

    // RVA: 0x377 | Ordinal: 888
        void getFocusable(void) const;

    // RVA: 0x37D | Ordinal: 894
        void getFocusedWidget(void) const;

    // RVA: 0x385 | Ordinal: 902
        void getFocusedWidget_(void) const;

    // RVA: 0x38F | Ordinal: 912
        void getGenerateMouseDoubleClickCallbacks(class osg::Vec2i const &, enum gui::MouseButton) const;

    // RVA: 0x391 | Ordinal: 914
        void getGenerateMouseDownCallbacks(class osg::Vec2i const &, enum gui::MouseButton) const;

    // RVA: 0x393 | Ordinal: 916
        void getGenerateMouseMoveCallbacks(class osg::Vec2i const &) const;

    // RVA: 0x395 | Ordinal: 918
        void getGenerateMouseUpCallbacks(class osg::Vec2i const &, enum gui::MouseButton) const;

    // RVA: 0x3A0 | Ordinal: 929
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x41C | Ordinal: 1053
        void getLayout(void) const;

    // RVA: 0x437 | Ordinal: 1080
        void getMaxSize(void) const;

    // RVA: 0x449 | Ordinal: 1098
        void getMinSize(void) const;

    // RVA: 0x47C | Ordinal: 1149
        void getPrefSize(void) const;

    // RVA: 0x51A | Ordinal: 1307
        void getTabOrderedWidgets(class ed::vector<class gui::WidgetHandler *, class ed::allocator<class gui::WidgetHandler *>> &) const;

    // RVA: 0x584 | Ordinal: 1413
        void getWidget(int) const;

    // RVA: 0x589 | Ordinal: 1418
        void getWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x58F | Ordinal: 1424
        void getWidgetCount(void) const;

    // RVA: 0x594 | Ordinal: 1429
        void getWidgetCount_(void) const;

    // RVA: 0x59A | Ordinal: 1435
        void getWidgetIndex_(class gui::Widget *) const;

    // RVA: 0x5CA | Ordinal: 1483
        void getWidget_(int) const;

    // RVA: 0x5F5 | Ordinal: 1526
        void insertWidget_(class gui::Widget *, int);

    // RVA: 0x625 | Ordinal: 1574
        void localize(class std::unordered_map<class ed::basic_string<wchar_t>, class ed::basic_string<wchar_t>, struct std::hash<class ed::basic_string<wchar_t>>, struct std::equal_to<class ed::basic_string<wchar_t>>, class ed::allocator<struct std::pair<class ed::basic_string<wchar_t> const, class ed::basic_string<wchar_t>>>> const &);

    // RVA: 0x638 | Ordinal: 1593
        void makeChildren(class gui::GraphicCommands *) const;

    // RVA: 0x656 | Ordinal: 1623
        void makeParse_(class gui::GraphicCommands *);

    // RVA: 0x67D | Ordinal: 1662
        void onChar(enum gui::KeyboardButton, int);

    // RVA: 0x68C | Ordinal: 1677
        void onEnableChanged_(bool);

    // RVA: 0x690 | Ordinal: 1681
        void onFocusChanged_(bool);

    // RVA: 0x69F | Ordinal: 1696
        void onHoveredWidgetChanged_(class gui::WidgetHandler *, class osg::Vec2i const &);

    // RVA: 0x6C1 | Ordinal: 1730
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6CE | Ordinal: 1743
        void onKeyUp(enum gui::KeyboardButton, int);

    // RVA: 0x6D7 | Ordinal: 1752
        void onMouseCursorMove(class osg::Vec2i const &);

    // RVA: 0x6DC | Ordinal: 1757
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6EA | Ordinal: 1771
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x700 | Ordinal: 1793
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x710 | Ordinal: 1809
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x722 | Ordinal: 1827
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x733 | Ordinal: 1844
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x743 | Ordinal: 1860
        void onMouseWheel(class osg::Vec2i const &, int);

    // RVA: 0x756 | Ordinal: 1879
        void onPositionChanged_(class osg::Vec2i const &);

    // RVA: 0x76C | Ordinal: 1901
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x7A7 | Ordinal: 1960
        void onWidgetDestroy(class gui::WidgetHandler *);

    // RVA: 0x7B2 | Ordinal: 1971
        void parseChildren_(void);

    // RVA: 0x7B4 | Ordinal: 1973
        void parse_(void);

    // RVA: 0x7DA | Ordinal: 2011
        void redrawChildren(void);

    // RVA: 0x7EC | Ordinal: 2029
        void redraw_(void);

    // RVA: 0x807 | Ordinal: 2056
        void removeAllWidgets_(void);

    // RVA: 0x82C | Ordinal: 2093
        void removeWidget_(class gui::Widget *);

    // RVA: 0x833 | Ordinal: 2100
        void resetWidgets_(void);

    // RVA: 0x88E | Ordinal: 2191
        void setDirty(enum gui::Widget::DirtyFlag);

    // RVA: 0x8A8 | Ordinal: 2217
        void setFocusedWidget_(class gui::WidgetHandler *);

    // RVA: 0x8D6 | Ordinal: 2263
        void setLayout(class gui::LayoutHandler *);

    // RVA: 0x9E5 | Ordinal: 2534
        void updateHoveredWidget_(class osg::Vec2i const &);

    // RVA: 0x9E6 | Ordinal: 2535
        void updateLayout(bool);

    // RVA: 0x9F1 | Ordinal: 2546
        void updateSize(void);

    // RVA: 0xE6 | Ordinal: 231
        void _Container(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_CONTAINER_HPP
