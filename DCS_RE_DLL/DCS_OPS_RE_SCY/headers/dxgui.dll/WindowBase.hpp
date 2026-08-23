#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: WindowBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class WindowBase
{
public:

    // RVA: 0x1A | Ordinal: 27
        void HotKey_(struct lua_State *, int, struct gui::WindowBase::HotKey &);

    // RVA: 0x24 | Ordinal: 37
        void HotKey_(struct lua_State *, struct gui::WindowBase::HotKey const &);

    // RVA: 0xD3 | Ordinal: 212
        void WindowBase(void);

    // RVA: 0x13E | Ordinal: 319
        void addHotKeyCallback(struct gui::WindowBase::HotKey const &, class std::shared_ptr<class std::function<void __cdecl(void)>>);

    // RVA: 0x154 | Ordinal: 341
        void assignClutterBitIdx(unsigned char);

    // RVA: 0x173 | Ordinal: 372
        void calcSize(void) const;

    // RVA: 0x17D | Ordinal: 382
        void calcWindowPositionInsideScreen(class osg::Vec2i const &, class osg::Vec2i const &);

    // RVA: 0x183 | Ordinal: 388
        void centerWindow(void);

    // RVA: 0x191 | Ordinal: 402
        void checkOutOfScreenOnDrag(void) const;

    // RVA: 0x19F | Ordinal: 416
        void clear(void);

    // RVA: 0x1E7 | Ordinal: 488
        void close(void);

    // RVA: 0x2BB | Ordinal: 700
        void draw_(void) const;

    // RVA: 0x316 | Ordinal: 791
        void getAsWidget(void) const;

    // RVA: 0x32D | Ordinal: 814
        void getClientRect(void) const;

    // RVA: 0x331 | Ordinal: 818
        void getClipResizeCursor(void) const;

    // RVA: 0x353 | Ordinal: 852
        void getDraggable(void) const;

    // RVA: 0x39B | Ordinal: 924
        void getHasCursor(void) const;

    // RVA: 0x3B2 | Ordinal: 947
        void getHeader(void) const;

    // RVA: 0x3E4 | Ordinal: 997
        void getInnerState(void) const;

    // RVA: 0x41E | Ordinal: 1055
        void getLayout(void) const;

    // RVA: 0x456 | Ordinal: 1111
        void getMouseCursor(void) const;

    // RVA: 0x468 | Ordinal: 1129
        void getOverlayWidget(int) const;

    // RVA: 0x469 | Ordinal: 1130
        void getOverlayWidgetCount(void) const;

    // RVA: 0x490 | Ordinal: 1169
        void getResizable(void) const;

    // RVA: 0x492 | Ordinal: 1171
        void getResizeCursor_(int) const;

    // RVA: 0x493 | Ordinal: 1172
        void getResizeMask_(class osg::Vec2i const &) const;

    // RVA: 0x4F4 | Ordinal: 1269
        void getSkin(void) const;

    // RVA: 0x506 | Ordinal: 1287
        void getSortedTabOrderedWidgets_(class ed::vector<class gui::WidgetHandler *, class ed::allocator<class gui::WidgetHandler *>> &);

    // RVA: 0x515 | Ordinal: 1302
        void getSurfaceId(void) const;

    // RVA: 0x571 | Ordinal: 1394
        void getView(void) const;

    // RVA: 0x588 | Ordinal: 1417
        void getWidget(int) const;

    // RVA: 0x593 | Ordinal: 1428
        void getWidgetCount(void) const;

    // RVA: 0x5EB | Ordinal: 1516
        void insertOverlayWidget(class gui::Widget *, int);

    // RVA: 0x5F3 | Ordinal: 1524
        void insertWidget(class gui::Widget *, int);

    // RVA: 0x605 | Ordinal: 1542
        void kill(void);

    // RVA: 0x666 | Ordinal: 1639
        void make_(class gui::GraphicCommands *) const;

    // RVA: 0x681 | Ordinal: 1666
        void onChar(enum gui::KeyboardButton, int);

    // RVA: 0x688 | Ordinal: 1673
        void onClose_(void);

    // RVA: 0x697 | Ordinal: 1688
        void onHasCursorChanged_(bool);

    // RVA: 0x69E | Ordinal: 1695
        void onHotKey(struct gui::WindowBase::HotKey const &);

    // RVA: 0x6C9 | Ordinal: 1738
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6D0 | Ordinal: 1745
        void onKeyUp(enum gui::KeyboardButton, int);

    // RVA: 0x6FA | Ordinal: 1787
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x70C | Ordinal: 1805
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x71E | Ordinal: 1823
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x729 | Ordinal: 1834
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x741 | Ordinal: 1858
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x779 | Ordinal: 1914
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x789 | Ordinal: 1930
        void onTextChanged_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x7BD | Ordinal: 1982
        void popMouseCursor(void);

    // RVA: 0x7C6 | Ordinal: 1991
        void pushMouseCursor(int);

    // RVA: 0x805 | Ordinal: 2054
        void removeAllWidgets(void);

    // RVA: 0x80F | Ordinal: 2064
        void removeHotKeyCallback(struct gui::WindowBase::HotKey const &, class std::shared_ptr<class std::function<void __cdecl(void)>>);

    // RVA: 0x81B | Ordinal: 2076
        void removeOverlayWidget(class gui::Widget *);

    // RVA: 0x829 | Ordinal: 2090
        void removeWidget(class gui::Widget *);

    // RVA: 0x868 | Ordinal: 2153
        void setAsWidget(bool);

    // RVA: 0x877 | Ordinal: 2168
        void setClipResizeCursor(bool);

    // RVA: 0x899 | Ordinal: 2202
        void setDraggable(bool);

    // RVA: 0x8B4 | Ordinal: 2229
        void setHasCursor(bool);

    // RVA: 0x8D8 | Ordinal: 2265
        void setLayout(class gui::LayoutHandler *);

    // RVA: 0x8F1 | Ordinal: 2290
        void setNextWidgetFocused(void);

    // RVA: 0x90C | Ordinal: 2317
        void setPrevWidgetFocused(void);

    // RVA: 0x918 | Ordinal: 2329
        void setResizable(bool);

    // RVA: 0x93A | Ordinal: 2363
        void setSurfaceId(int);

    // RVA: 0xA16 | Ordinal: 2583
        void updateWidgets_(void);

    // RVA: 0x11D | Ordinal: 286
        void _WindowBase(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_WINDOWBASE_HPP
