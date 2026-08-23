#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Widget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Widget
{
public:

    // RVA: 0xD1 | Ordinal: 210
        void Widget(void);

    // RVA: 0x140 | Ordinal: 321
        void addKeyboardCallback(enum gui::KeyboardCallbackType, class std::shared_ptr<class std::function<bool __cdecl(enum gui::KeyboardButton, int)>>);

    // RVA: 0x141 | Ordinal: 322
        void addMouseCallback(enum gui::MouseCallbackType, class std::shared_ptr<class std::function<void __cdecl(int, int, int)>>);

    // RVA: 0x143 | Ordinal: 324
        void addMouseWheelCallback(class std::shared_ptr<class std::function<bool __cdecl(int, int, int)>>);

    // RVA: 0x14B | Ordinal: 332
        void addWidgetCallback(int, class std::shared_ptr<class std::function<void __cdecl(void)>>);

    // RVA: 0x157 | Ordinal: 344
        void beginClip_(void) const;

    // RVA: 0x164 | Ordinal: 357
        void calcMaxSize(void) const;

    // RVA: 0x172 | Ordinal: 371
        void calcSize(void) const;

    // RVA: 0x17F | Ordinal: 384
        void callKeyboardCallbacks_(enum gui::KeyboardCallbackType, enum gui::KeyboardButton, int);

    // RVA: 0x180 | Ordinal: 385
        void callMouseCallbacks_(enum gui::MouseCallbackType, int, int, int);

    // RVA: 0x181 | Ordinal: 386
        void callWidgetCallbacks_(int);

    // RVA: 0x192 | Ordinal: 403
        void clampSize_(class osg::Vec2i const &) const;

    // RVA: 0x1DE | Ordinal: 479
        void clone(void) const;

    // RVA: 0x20D | Ordinal: 526
        void copyParams(class gui::Widget *) const;

    // RVA: 0x249 | Ordinal: 586
        void destroy(class gui::Widget *);

    // RVA: 0x250 | Ordinal: 593
        void destroy_(void);

    // RVA: 0x251 | Ordinal: 594
        void detachFromParent(void);

    // RVA: 0x267 | Ordinal: 616
        void doRedraw(void);

    // RVA: 0x268 | Ordinal: 617
        void doRedrawAll(void);

    // RVA: 0x26B | Ordinal: 620
        void doRedrawChildren(void);

    // RVA: 0x26E | Ordinal: 623
        void doRedraw_(void);

    // RVA: 0x288 | Ordinal: 649
        void draw(void) const;

    // RVA: 0x291 | Ordinal: 658
        void drawChildren(void) const;

    // RVA: 0x294 | Ordinal: 661
        void drawClipped_(void) const;

    // RVA: 0x29D | Ordinal: 670
        void drawFocusRect_(void) const;

    // RVA: 0x2A8 | Ordinal: 681
        void drawModelView_(void) const;

    // RVA: 0x2BA | Ordinal: 699
        void draw_(void) const;

    // RVA: 0x2E1 | Ordinal: 738
        void endClip_(void) const;

    // RVA: 0x2F2 | Ordinal: 755
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x2F5 | Ordinal: 758
        void findWidgetByName(class ed::basic_string<wchar_t> const &) const;

    // RVA: 0x32C | Ordinal: 813
        void getClientRect(void) const;

    // RVA: 0x32E | Ordinal: 815
        void getClientRect_(void) const;

    // RVA: 0x330 | Ordinal: 817
        void getClipRect_(void) const;

    // RVA: 0x350 | Ordinal: 849
        void getDirtySize(void) const;

    // RVA: 0x358 | Ordinal: 857
        void getDrawToTarget(void) const;

    // RVA: 0x361 | Ordinal: 866
        void getEnabled(void) const;

    // RVA: 0x379 | Ordinal: 890
        void getFocusable(void) const;

    // RVA: 0x37A | Ordinal: 891
        void getFocused(void) const;

    // RVA: 0x384 | Ordinal: 901
        void getFocusedWidget(void) const;

    // RVA: 0x3AF | Ordinal: 944
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3E3 | Ordinal: 996
        void getInnerState(void) const;

    // RVA: 0x3FF | Ordinal: 1024
        void getInteractiveState(void) const;

    // RVA: 0x401 | Ordinal: 1026
        void getInteractiveState_(bool, bool) const;

    // RVA: 0x43C | Ordinal: 1085
        void getMaxSize(void) const;

    // RVA: 0x44E | Ordinal: 1103
        void getMinSize(void) const;

    // RVA: 0x45E | Ordinal: 1119
        void getName(void) const;

    // RVA: 0x467 | Ordinal: 1128
        void getOpacity(void) const;

    // RVA: 0x471 | Ordinal: 1138
        void getParent(void) const;

    // RVA: 0x47A | Ordinal: 1147
        void getPosition(void) const;

    // RVA: 0x481 | Ordinal: 1154
        void getPrefSize(void) const;

    // RVA: 0x495 | Ordinal: 1174
        void getResourceString(void) const;

    // RVA: 0x496 | Ordinal: 1175
        void getRoot(void) const;

    // RVA: 0x498 | Ordinal: 1177
        void getRootSurfaceId(void) const;

    // RVA: 0x4A2 | Ordinal: 1187
        void getScreenPointInside(class osg::Vec2i const &) const;

    // RVA: 0x4C6 | Ordinal: 1223
        void getSize(void) const;

    // RVA: 0x519 | Ordinal: 1306
        void getTabOrder(void) const;

    // RVA: 0x51B | Ordinal: 1308
        void getTabOrderedWidgets(class ed::vector<class gui::WidgetHandler *, class ed::allocator<class gui::WidgetHandler *>> &) const;

    // RVA: 0x520 | Ordinal: 1313
        void getTargetPosition_(void) const;

    // RVA: 0x528 | Ordinal: 1321
        void getText(void) const;

    // RVA: 0x53D | Ordinal: 1342
        void getTooltipSkin(void) const;

    // RVA: 0x53E | Ordinal: 1343
        void getTooltipText(void) const;

    // RVA: 0x541 | Ordinal: 1346
        void getTooltipWidget(class osg::Vec2i const &) const;

    // RVA: 0x579 | Ordinal: 1402
        void getVisible(bool) const;

    // RVA: 0x58B | Ordinal: 1420
        void getWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x58C | Ordinal: 1421
        void getWidgetAtScreenPoint_(class osg::Vec2i const &) const;

    // RVA: 0x59C | Ordinal: 1437
        void getWidgetSkin(void) const;

    // RVA: 0x5C8 | Ordinal: 1481
        void getWidgetType(void) const;

    // RVA: 0x5D8 | Ordinal: 1497
        void getZoom(void) const;

    // RVA: 0x5DC | Ordinal: 1501
        void handler(void) const;

    // RVA: 0x626 | Ordinal: 1575
        void localize(class std::unordered_map<class ed::basic_string<wchar_t>, class ed::basic_string<wchar_t>, struct std::hash<class ed::basic_string<wchar_t>>, struct std::equal_to<class ed::basic_string<wchar_t>>, class ed::allocator<struct std::pair<class ed::basic_string<wchar_t> const, class ed::basic_string<wchar_t>>>> const &);

    // RVA: 0x632 | Ordinal: 1587
        void make(class gui::GraphicCommands *) const;

    // RVA: 0x634 | Ordinal: 1589
        void makeBeginClip_(class gui::GraphicCommands *) const;

    // RVA: 0x63C | Ordinal: 1597
        void makeChildren(class gui::GraphicCommands *) const;

    // RVA: 0x63F | Ordinal: 1600
        void makeClipped_(class gui::GraphicCommands *) const;

    // RVA: 0x642 | Ordinal: 1603
        void makeEndClip_(class gui::GraphicCommands *) const;

    // RVA: 0x649 | Ordinal: 1610
        void makeFocusRect_(class gui::GraphicCommands *) const;

    // RVA: 0x653 | Ordinal: 1620
        void makeModelView_(class gui::GraphicCommands *) const;

    // RVA: 0x655 | Ordinal: 1622
        void makeParse(class gui::GraphicCommands *);

    // RVA: 0x657 | Ordinal: 1624
        void makeParse_(class gui::GraphicCommands *);

    // RVA: 0x665 | Ordinal: 1638
        void make_(class gui::GraphicCommands *) const;

    // RVA: 0x67A | Ordinal: 1659
        void onChange_(void);

    // RVA: 0x680 | Ordinal: 1665
        void onChar(enum gui::KeyboardButton, int);

    // RVA: 0x686 | Ordinal: 1671
        void onChildBecomeDirty_(class gui::Widget *);

    // RVA: 0x68D | Ordinal: 1678
        void onEnableChanged_(bool);

    // RVA: 0x695 | Ordinal: 1686
        void onFocusChanged_(bool);

    // RVA: 0x6C8 | Ordinal: 1737
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6CF | Ordinal: 1744
        void onKeyUp(enum gui::KeyboardButton, int);

    // RVA: 0x6D8 | Ordinal: 1753
        void onMouseCursorMove(class osg::Vec2i const &);

    // RVA: 0x6E6 | Ordinal: 1767
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6F9 | Ordinal: 1786
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x70B | Ordinal: 1804
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x71D | Ordinal: 1822
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x728 | Ordinal: 1833
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x72F | Ordinal: 1840
        void onMouseReleased(void);

    // RVA: 0x740 | Ordinal: 1857
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x74A | Ordinal: 1867
        void onMouseWheel(class osg::Vec2i const &, int);

    // RVA: 0x752 | Ordinal: 1875
        void onParentChanged_(class gui::WidgetHandler *);

    // RVA: 0x759 | Ordinal: 1882
        void onPositionChanged_(class osg::Vec2i const &);

    // RVA: 0x778 | Ordinal: 1913
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x788 | Ordinal: 1929
        void onTextChanged_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x7A5 | Ordinal: 1958
        void onVisibleChanged_(bool);

    // RVA: 0x7AD | Ordinal: 1966
        void onZoomChanged_(float);

    // RVA: 0x7B1 | Ordinal: 1970
        void parse(void);

    // RVA: 0x7B5 | Ordinal: 1974
        void parse_(void);

    // RVA: 0x7D5 | Ordinal: 2006
        void redraw(void);

    // RVA: 0x7D6 | Ordinal: 2007
        void redrawAll(void);

    // RVA: 0x7DB | Ordinal: 2012
        void redrawChildren(void);

    // RVA: 0x7F1 | Ordinal: 2034
        void redraw_(void);

    // RVA: 0x817 | Ordinal: 2072
        void removeKeyboardCallback(enum gui::KeyboardCallbackType, class std::shared_ptr<class std::function<bool __cdecl(enum gui::KeyboardButton, int)>>);

    // RVA: 0x818 | Ordinal: 2073
        void removeMouseCallback(enum gui::MouseCallbackType, class std::shared_ptr<class std::function<void __cdecl(int, int, int)>>);

    // RVA: 0x81A | Ordinal: 2075
        void removeMouseWheelCallback(class std::shared_ptr<class std::function<bool __cdecl(int, int, int)>>);

    // RVA: 0x82B | Ordinal: 2092
        void removeWidgetCallback(int, class std::shared_ptr<class std::function<void __cdecl(void)>>);

    // RVA: 0x832 | Ordinal: 2099
        void resetParent(void);

    // RVA: 0x835 | Ordinal: 2102
        void screenToWidget(class osg::Vec2i const &) const;

    // RVA: 0x894 | Ordinal: 2197
        void setDirty(enum gui::Widget::DirtyFlag);

    // RVA: 0x895 | Ordinal: 2198
        void setDirtySize(bool);

    // RVA: 0x896 | Ordinal: 2199
        void setDoRedrawCallback(class std::function<void __cdecl(void)>);

    // RVA: 0x89F | Ordinal: 2208
        void setDrawToTarget(bool);

    // RVA: 0x8A3 | Ordinal: 2212
        void setEnabled(bool);

    // RVA: 0x8A7 | Ordinal: 2216
        void setFocused(bool);

    // RVA: 0x8A9 | Ordinal: 2218
        void setFocusedWidget_(class gui::WidgetHandler *);

    // RVA: 0x8F0 | Ordinal: 2289
        void setName(class ed::basic_string<wchar_t> const &);

    // RVA: 0x8F8 | Ordinal: 2297
        void setOpacity(float);

    // RVA: 0x904 | Ordinal: 2309
        void setParent(class gui::WidgetHandler *);

    // RVA: 0x90B | Ordinal: 2316
        void setPosition(class osg::Vec2i const &);

    // RVA: 0x917 | Ordinal: 2328
        void setRedrawCallback(class std::function<void __cdecl(void)>);

    // RVA: 0x91A | Ordinal: 2331
        void setResourceString(class ed::basic_string<char> const &);

    // RVA: 0x924 | Ordinal: 2341
        void setShaderEffect(char const *, class gui::skin::ShaderEffectParams const *);

    // RVA: 0x92A | Ordinal: 2347
        void setSize(class osg::Vec2i const &);

    // RVA: 0x940 | Ordinal: 2369
        void setTabFocused(void);

    // RVA: 0x941 | Ordinal: 2370
        void setTabOrder(int);

    // RVA: 0x94B | Ordinal: 2380
        void setText(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x958 | Ordinal: 2393
        void setTooltipSkin(class gui::skin::Skin *);

    // RVA: 0x959 | Ordinal: 2394
        void setTooltipText(class ed::basic_string<wchar_t> const &);

    // RVA: 0x97A | Ordinal: 2427
        void setVisible(bool);

    // RVA: 0x988 | Ordinal: 2441
        void setZoom(float);

    // RVA: 0x9F6 | Ordinal: 2551
        void updateSize(void);

    // RVA: 0x9F8 | Ordinal: 2553
        void updateSize_(void);

    // RVA: 0xA25 | Ordinal: 2598
        void validateSize_(class osg::Vec2i const &) const;

    // RVA: 0xA33 | Ordinal: 2612
        void widgetToParentWidget(class osg::Vec2i const &, class gui::Widget *) const;

    // RVA: 0xA34 | Ordinal: 2613
        void widgetToScreen(class osg::Vec2i const &) const;

    // RVA: 0x11B | Ordinal: 284
        void _Widget(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_WIDGET_HPP
