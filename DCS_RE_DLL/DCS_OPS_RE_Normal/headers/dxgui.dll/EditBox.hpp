#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: EditBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class EditBox
{
public:

    // RVA: 0x5E | Ordinal: 95
        void EditBox(bool);

    // RVA: 0x176 | Ordinal: 375
        void calcTextSize(void) const;

    // RVA: 0x1A3 | Ordinal: 420
        void clearParagraphs_(void);

    // RVA: 0x1B7 | Ordinal: 440
        void clone(void) const;

    // RVA: 0x1E9 | Ordinal: 490
        void convertFromLinearSymbolIndex_(int, int &, int &, bool) const;

    // RVA: 0x1EB | Ordinal: 492
        void convertToLinearSymbolIndex_(int, int) const;

    // RVA: 0x1F4 | Ordinal: 501
        void copyParams(class gui::EditBox *) const;

    // RVA: 0x227 | Ordinal: 552
        void copy_(void);

    // RVA: 0x22E | Ordinal: 559
        void createParagraph_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>) const;

    // RVA: 0x22F | Ordinal: 560
        void createScrollBars_(void);

    // RVA: 0x239 | Ordinal: 570
        void cut_(void);

    // RVA: 0x23E | Ordinal: 575
        void deleteScrollBars_(void);

    // RVA: 0x23F | Ordinal: 576
        void deleteSelection_(void);

    // RVA: 0x254 | Ordinal: 597
        void divideTextIntoParagraphs_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x2E9 | Ordinal: 746
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x301 | Ordinal: 770
        void getAcceptDecimalPoint(void) const;

    // RVA: 0x320 | Ordinal: 801
        void getCaret(void) const;

    // RVA: 0x325 | Ordinal: 806
        void getCharIsNumber_(int) const;

    // RVA: 0x37F | Ordinal: 896
        void getFocusedWidget(void) const;

    // RVA: 0x386 | Ordinal: 903
        void getFont(void) const;

    // RVA: 0x3A2 | Ordinal: 931
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3B5 | Ordinal: 950
        void getHintText(void) const;

    // RVA: 0x3BC | Ordinal: 957
        void getHorzScrollBar(void) const;

    // RVA: 0x3C0 | Ordinal: 961
        void getHorzScrollBarHeight_(void) const;

    // RVA: 0x3C9 | Ordinal: 970
        void getHorzScrollBarValue_(void) const;

    // RVA: 0x3CF | Ordinal: 976
        void getHorzStep_(void) const;

    // RVA: 0x3DC | Ordinal: 989
        void getInnerState(void) const;

    // RVA: 0x3F3 | Ordinal: 1012
        void getInteractiveState(void) const;

    // RVA: 0x41F | Ordinal: 1056
        void getLineCount(void) const;

    // RVA: 0x421 | Ordinal: 1058
        void getLineCount_(void) const;

    // RVA: 0x422 | Ordinal: 1059
        void getLineHeight(float) const;

    // RVA: 0x424 | Ordinal: 1061
        void getLineIndexValid_(int) const;

    // RVA: 0x425 | Ordinal: 1062
        void getLineIndex_(int) const;

    // RVA: 0x426 | Ordinal: 1063
        void getLineTextLength(int) const;

    // RVA: 0x42A | Ordinal: 1067
        void getLine_(int) const;

    // RVA: 0x435 | Ordinal: 1078
        void getMaxLineWidth_(void) const;

    // RVA: 0x45D | Ordinal: 1118
        void getMultiline(void) const;

    // RVA: 0x463 | Ordinal: 1124
        void getNumeric(void) const;

    // RVA: 0x470 | Ordinal: 1137
        void getParagraphIndex_(int, int *) const;

    // RVA: 0x474 | Ordinal: 1141
        void getPassword(void) const;

    // RVA: 0x482 | Ordinal: 1155
        void getProcessedChar_(int) const;

    // RVA: 0x48B | Ordinal: 1164
        void getReadOnly(void) const;

    // RVA: 0x4A7 | Ordinal: 1192
        void getScrollBarVisibility_(bool &, bool &) const;

    // RVA: 0x4B4 | Ordinal: 1205
        void getSelection(void) const;

    // RVA: 0x4B6 | Ordinal: 1207
        void getSelectionIndexBeginValid_(struct gui::EditBoxSelection &) const;

    // RVA: 0x4B7 | Ordinal: 1208
        void getSelectionIndexEndValid_(struct gui::EditBoxSelection &) const;

    // RVA: 0x4B8 | Ordinal: 1209
        void getSelectionItems_(struct gui::EditBoxSelection const &, class ed::vector<class gui::EditBoxItem *, class ed::allocator<class gui::EditBoxItem *>> &) const;

    // RVA: 0x4B9 | Ordinal: 1210
        void getSelectionLineBeginValid_(struct gui::EditBoxSelection &) const;

    // RVA: 0x4BA | Ordinal: 1211
        void getSelectionLineEndValid_(struct gui::EditBoxSelection &) const;

    // RVA: 0x4BB | Ordinal: 1212
        void getSelectionText_(void) const;

    // RVA: 0x4BC | Ordinal: 1213
        void getSelectionValid_(struct gui::EditBoxSelection &) const;

    // RVA: 0x4D3 | Ordinal: 1236
        void getSkin(void) const;

    // RVA: 0x517 | Ordinal: 1304
        void getSymbolIndexValid_(int, int) const;

    // RVA: 0x518 | Ordinal: 1305
        void getSymbolIndex_(class gui::EditBoxItem const *, int) const;

    // RVA: 0x527 | Ordinal: 1320
        void getText(void) const;

    // RVA: 0x52E | Ordinal: 1327
        void getTextLines_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>, class ed::vector<class ed::basic_string<wchar_t>, class ed::allocator<class ed::basic_string<wchar_t>>> &) const;

    // RVA: 0x52F | Ordinal: 1328
        void getTextSize_(void) const;

    // RVA: 0x531 | Ordinal: 1330
        void getTextTo(class ed::basic_string<wchar_t> &) const;

    // RVA: 0x532 | Ordinal: 1331
        void getTextWrapping(void) const;

    // RVA: 0x540 | Ordinal: 1345
        void getTooltipWidget(class osg::Vec2i const &) const;

    // RVA: 0x55A | Ordinal: 1371
        void getVertScrollBar(void) const;

    // RVA: 0x566 | Ordinal: 1383
        void getVertScrollBarValue_(void) const;

    // RVA: 0x568 | Ordinal: 1385
        void getVertScrollBarWidth_(void) const;

    // RVA: 0x56D | Ordinal: 1390
        void getView(void) const;

    // RVA: 0x580 | Ordinal: 1409
        void getVisibleItems_(class ed::vector<class gui::EditBoxItem *, class ed::allocator<class gui::EditBoxItem *>> &) const;

    // RVA: 0x581 | Ordinal: 1410
        void getVisibleLineCount_(void) const;

    // RVA: 0x5A6 | Ordinal: 1447
        void getWidgetType(void) const;

    // RVA: 0x5E1 | Ordinal: 1506
        void insertChar_(int);

    // RVA: 0x5EA | Ordinal: 1515
        void insertNewParagraph_(void);

    // RVA: 0x66E | Ordinal: 1647
        void moveCaret_(int, int);

    // RVA: 0x676 | Ordinal: 1655
        void onChange_(void);

    // RVA: 0x67E | Ordinal: 1663
        void onChar(enum gui::KeyboardButton, int);

    // RVA: 0x691 | Ordinal: 1682
        void onFocusChanged_(bool);

    // RVA: 0x69A | Ordinal: 1691
        void onHorzScrollBarChange_(void);

    // RVA: 0x6C3 | Ordinal: 1732
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6DD | Ordinal: 1758
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6EC | Ordinal: 1773
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x702 | Ordinal: 1795
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x712 | Ordinal: 1811
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x724 | Ordinal: 1829
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x735 | Ordinal: 1846
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x744 | Ordinal: 1861
        void onMouseWheel(class osg::Vec2i const &, int);

    // RVA: 0x76E | Ordinal: 1903
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x784 | Ordinal: 1925
        void onTextChanged_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x797 | Ordinal: 1944
        void onVertScrollBarChange_(void);

    // RVA: 0x79B | Ordinal: 1948
        void onViewMouseDoubleClick(class osg::Vec2i const &);

    // RVA: 0x79C | Ordinal: 1949
        void onViewMouseDown_(class osg::Vec2i const &);

    // RVA: 0x79D | Ordinal: 1950
        void onViewMouseMove_(class osg::Vec2i const &);

    // RVA: 0x79E | Ordinal: 1951
        void onViewMouseUp_(class osg::Vec2i const &);

    // RVA: 0x7B6 | Ordinal: 1975
        void paste_(void);

    // RVA: 0x830 | Ordinal: 2097
        void resetLinesSelection_(void);

    // RVA: 0x838 | Ordinal: 2105
        void selectAll(void);

    // RVA: 0x839 | Ordinal: 2106
        void selectAll_(void);

    // RVA: 0x859 | Ordinal: 2138
        void setAcceptDecimalPoint(bool);

    // RVA: 0x862 | Ordinal: 2147
        void setAllowLineNumbers(bool);

    // RVA: 0x8B8 | Ordinal: 2233
        void setHintText(class ed::basic_string<wchar_t> const &);

    // RVA: 0x8C3 | Ordinal: 2244
        void setHorzScrollBarValue_(int);

    // RVA: 0x8DD | Ordinal: 2270
        void setLinesSelection_(struct gui::EditBoxSelection const &);

    // RVA: 0x8EF | Ordinal: 2288
        void setMultiline(bool);

    // RVA: 0x8F2 | Ordinal: 2291
        void setNumeric(bool);

    // RVA: 0x907 | Ordinal: 2312
        void setPassword(bool);

    // RVA: 0x915 | Ordinal: 2326
        void setReadOnly(bool);

    // RVA: 0x920 | Ordinal: 2337
        void setSelection(struct gui::EditBoxSelection);

    // RVA: 0x922 | Ordinal: 2339
        void setSelection_(struct gui::EditBoxSelection const &);

    // RVA: 0x93E | Ordinal: 2367
        void setTabFocused(void);

    // RVA: 0x94A | Ordinal: 2379
        void setText(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x94E | Ordinal: 2383
        void setTextWrapping(bool);

    // RVA: 0x972 | Ordinal: 2419
        void setVertScrollBarValue_(int);

    // RVA: 0x9CB | Ordinal: 2508
        void updateCaretOffset_(void);

    // RVA: 0x9CC | Ordinal: 2509
        void updateCaretPosition_(void);

    // RVA: 0x9CD | Ordinal: 2510
        void updateChildren_(void);

    // RVA: 0x9D1 | Ordinal: 2514
        void updateContents_(void);

    // RVA: 0x9DD | Ordinal: 2526
        void updateHorzScrollBarSize_(bool, bool);

    // RVA: 0x9E0 | Ordinal: 2529
        void updateHorzScrollBar_(bool);

    // RVA: 0x9EB | Ordinal: 2540
        void updateScrollBars_(void);

    // RVA: 0xA03 | Ordinal: 2564
        void updateVertScrollBarSize_(bool, bool);

    // RVA: 0xA06 | Ordinal: 2567
        void updateVertScrollBar_(bool);

    // RVA: 0xA09 | Ordinal: 2570
        void updateViewSize_(bool, bool);

    // RVA: 0xA0D | Ordinal: 2574
        void updateView_(void);

    // RVA: 0xE9 | Ordinal: 234
        void _EditBox(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_EDITBOX_HPP
