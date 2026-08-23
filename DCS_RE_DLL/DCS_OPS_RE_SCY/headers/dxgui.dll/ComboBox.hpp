#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ComboBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ComboBox
{
public:

    // RVA: 0x4B | Ordinal: 76
        void ComboBox(void);

    // RVA: 0x1B4 | Ordinal: 437
        void clone(void) const;

    // RVA: 0x1F0 | Ordinal: 497
        void copyParams(class gui::ComboBox *) const;

    // RVA: 0x2E5 | Ordinal: 742
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x31A | Ordinal: 795
        void getButton(void) const;

    // RVA: 0x35B | Ordinal: 860
        void getEditBox(void) const;

    // RVA: 0x360 | Ordinal: 865
        void getEnableSearchLine(void) const;

    // RVA: 0x37B | Ordinal: 892
        void getFocusedWidget(void) const;

    // RVA: 0x39E | Ordinal: 927
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3B4 | Ordinal: 949
        void getHintText(void) const;

    // RVA: 0x3EB | Ordinal: 1004
        void getInteractiveState(void) const;

    // RVA: 0x403 | Ordinal: 1028
        void getItem(int) const;

    // RVA: 0x408 | Ordinal: 1033
        void getItemCount(void) const;

    // RVA: 0x40E | Ordinal: 1039
        void getItemIndex(class gui::ListBoxLine *) const;

    // RVA: 0x48C | Ordinal: 1165
        void getReadonly(void) const;

    // RVA: 0x4AD | Ordinal: 1198
        void getSelectedItem(void) const;

    // RVA: 0x4CF | Ordinal: 1232
        void getSkin(void) const;

    // RVA: 0x525 | Ordinal: 1318
        void getText(void) const;

    // RVA: 0x5A3 | Ordinal: 1444
        void getWidgetType(void) const;

    // RVA: 0x5CC | Ordinal: 1485
        void getWindow(void) const;

    // RVA: 0x5D0 | Ordinal: 1489
        void getWindowVisible(void) const;

    // RVA: 0x5D9 | Ordinal: 1498
        void handleComboButtonClick_(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x5E5 | Ordinal: 1510
        void insertItem(class gui::ListBoxLine *, int);

    // RVA: 0x674 | Ordinal: 1653
        void onChangeEditBox_(void);

    // RVA: 0x675 | Ordinal: 1654
        void onChangeListBox_(void);

    // RVA: 0x68A | Ordinal: 1675
        void onEditBoxChange_(void);

    // RVA: 0x68F | Ordinal: 1680
        void onFocusChanged_(bool);

    // RVA: 0x6BD | Ordinal: 1726
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6D2 | Ordinal: 1747
        void onListBoxChange_(void);

    // RVA: 0x6DA | Ordinal: 1755
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6E8 | Ordinal: 1769
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6FE | Ordinal: 1791
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x70E | Ordinal: 1807
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x720 | Ordinal: 1825
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x72C | Ordinal: 1837
        void onMouseReleased(void);

    // RVA: 0x731 | Ordinal: 1842
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x76A | Ordinal: 1899
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x7F9 | Ordinal: 2042
        void removeAllItems(void);

    // RVA: 0x811 | Ordinal: 2066
        void removeItem(class gui::ListBoxLine *);

    // RVA: 0x83C | Ordinal: 2109
        void selectItem(class gui::ListBoxLine *);

    // RVA: 0x842 | Ordinal: 2115
        void selectNextItem_(void);

    // RVA: 0x847 | Ordinal: 2120
        void selectPrevItem_(void);

    // RVA: 0x8A2 | Ordinal: 2211
        void setEnableSearchLine(bool);

    // RVA: 0x8B7 | Ordinal: 2232
        void setHintText(class ed::basic_string<wchar_t> const &);

    // RVA: 0x916 | Ordinal: 2327
        void setReadonly(bool);

    // RVA: 0x93D | Ordinal: 2366
        void setTabFocused(void);

    // RVA: 0x948 | Ordinal: 2377
        void setText(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x981 | Ordinal: 2434
        void setWindowVisible(bool);

    // RVA: 0x9D2 | Ordinal: 2515
        void updateEditBox_(void);

    // RVA: 0xE4 | Ordinal: 229
        void _ComboBox(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COMBOBOX_HPP
