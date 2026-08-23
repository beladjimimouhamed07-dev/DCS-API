#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ListBoxBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ListBoxBase
{
public:

    // RVA: 0x86 | Ordinal: 135
        void ListBoxBase(void);

    // RVA: 0x15C | Ordinal: 349
        void calcHeight(int) const;

    // RVA: 0x16D | Ordinal: 366
        void calcSize(void) const;

    // RVA: 0x17B | Ordinal: 380
        void calcWidth(void) const;

    // RVA: 0x1F8 | Ordinal: 505
        void copyParams(class gui::ListBoxBase *) const;

    // RVA: 0x23D | Ordinal: 574
        void deleteItems_(void);

    // RVA: 0x252 | Ordinal: 595
        void detachItem_(class gui::ListBoxLineBase *);

    // RVA: 0x2EB | Ordinal: 748
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x380 | Ordinal: 897
        void getFocusedWidget(void) const;

    // RVA: 0x3A5 | Ordinal: 934
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3BE | Ordinal: 959
        void getHorzScrollBar(void) const;

    // RVA: 0x3CC | Ordinal: 973
        void getHorzScrollPosition_(void) const;

    // RVA: 0x40A | Ordinal: 1035
        void getItemCount(void) const;

    // RVA: 0x40C | Ordinal: 1037
        void getItemCountInView_(void) const;

    // RVA: 0x412 | Ordinal: 1043
        void getItemIndex_(class gui::ListBoxLineBase const *) const;

    // RVA: 0x417 | Ordinal: 1048
        void getItemVisible_(int) const;

    // RVA: 0x418 | Ordinal: 1049
        void getItem_(int) const;

    // RVA: 0x434 | Ordinal: 1077
        void getMaxItemWidth_(void) const;

    // RVA: 0x4A9 | Ordinal: 1194
        void getScrollBarVisibility_(bool &, bool &) const;

    // RVA: 0x4AA | Ordinal: 1195
        void getScrollPosition(void) const;

    // RVA: 0x4B2 | Ordinal: 1203
        void getSelectedItem_(void) const;

    // RVA: 0x4D8 | Ordinal: 1241
        void getSkin(void) const;

    // RVA: 0x55C | Ordinal: 1373
        void getVertScrollBar(void) const;

    // RVA: 0x56F | Ordinal: 1392
        void getView(void) const;

    // RVA: 0x57C | Ordinal: 1405
        void getVisibleItemCount(void) const;

    // RVA: 0x57D | Ordinal: 1406
        void getVisibleItemCount_(void) const;

    // RVA: 0x57E | Ordinal: 1407
        void getVisibleItemsIndices2_(void) const;

    // RVA: 0x57F | Ordinal: 1408
        void getVisibleItemsIndices_(int &, int &) const;

    // RVA: 0x5E9 | Ordinal: 1514
        void insertItem_(class gui::ListBoxLineBase *, int);

    // RVA: 0x669 | Ordinal: 1642
        void markToRedraw_(void);

    // RVA: 0x692 | Ordinal: 1683
        void onFocusChanged_(bool);

    // RVA: 0x69C | Ordinal: 1693
        void onHorzScrollBarChange_(void);

    // RVA: 0x6A4 | Ordinal: 1701
        void onItemChanged(class gui::ListBoxLineBase *);

    // RVA: 0x6A6 | Ordinal: 1703
        void onItemMouseDoubleClick_(class osg::Vec2i const &, class gui::ListBoxLineBase *);

    // RVA: 0x6A8 | Ordinal: 1705
        void onItemMouseDown_(class osg::Vec2i const &, class gui::ListBoxLineBase *);

    // RVA: 0x6AC | Ordinal: 1709
        void onItemMouseMove_(class osg::Vec2i const &, class gui::ListBoxLineBase *);

    // RVA: 0x6B4 | Ordinal: 1717
        void onItemMouseUp_(class osg::Vec2i const &, class gui::ListBoxLineBase *);

    // RVA: 0x746 | Ordinal: 1863
        void onMouseWheel(class osg::Vec2i const &, int);

    // RVA: 0x766 | Ordinal: 1895
        void onScrollPositionChanged_(int);

    // RVA: 0x770 | Ordinal: 1905
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x799 | Ordinal: 1946
        void onVertScrollBarChange_(void);

    // RVA: 0x7FB | Ordinal: 2044
        void removeAllItems(void);

    // RVA: 0x815 | Ordinal: 2070
        void removeItem_(class gui::ListBoxLineBase *);

    // RVA: 0x836 | Ordinal: 2103
        void scrollDown_(void);

    // RVA: 0x837 | Ordinal: 2104
        void scrollUp_(void);

    // RVA: 0x83A | Ordinal: 2107
        void selectFirstVisibleItem(void);

    // RVA: 0x83F | Ordinal: 2112
        void selectItemAndPutIntoView_(int);

    // RVA: 0x840 | Ordinal: 2113
        void selectItem_(class gui::ListBoxLineBase *);

    // RVA: 0x841 | Ordinal: 2114
        void selectLastVisibleItem(void);

    // RVA: 0x844 | Ordinal: 2117
        void selectNextVisibleItem(void);

    // RVA: 0x845 | Ordinal: 2118
        void selectPageDownVisibleItem(void);

    // RVA: 0x846 | Ordinal: 2119
        void selectPageUpVisibleItem(void);

    // RVA: 0x849 | Ordinal: 2122
        void selectPrevVisibleItem(void);

    // RVA: 0x8D0 | Ordinal: 2257
        void setItemSelected_(class gui::ListBoxLineBase *, bool);

    // RVA: 0x8D1 | Ordinal: 2258
        void setItemSkin_(class gui::ListBoxLineBase *);

    // RVA: 0x8D4 | Ordinal: 2261
        void setItemVisible_(class gui::ListBoxLineBase *);

    // RVA: 0x91E | Ordinal: 2335
        void setScrollPosition(int);

    // RVA: 0x9CF | Ordinal: 2512
        void updateChildren_(void);

    // RVA: 0x9DF | Ordinal: 2528
        void updateHorzScrollBarSize_(bool);

    // RVA: 0x9E2 | Ordinal: 2531
        void updateHorzScrollBar_(bool);

    // RVA: 0x9ED | Ordinal: 2542
        void updateSelectedItem_(class gui::ListBoxLineBase *);

    // RVA: 0xA05 | Ordinal: 2566
        void updateVertScrollBarSize_(bool);

    // RVA: 0xA08 | Ordinal: 2569
        void updateVertScrollBar_(bool);

    // RVA: 0xA0B | Ordinal: 2572
        void updateViewSize_(bool, bool);

    // RVA: 0xA0F | Ordinal: 2576
        void updateView_(void);

    // RVA: 0xFE | Ordinal: 255
        void _ListBoxBase(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_LISTBOXBASE_HPP
