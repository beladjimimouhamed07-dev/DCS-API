#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ComboList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ComboList
{
public:

    // RVA: 0x51 | Ordinal: 82
        void ComboList(void);

    // RVA: 0x1B5 | Ordinal: 438
        void clone(void) const;

    // RVA: 0x1F1 | Ordinal: 498
        void copyParams(class gui::ComboList *) const;

    // RVA: 0x2E6 | Ordinal: 743
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x31B | Ordinal: 796
        void getButton(void) const;

    // RVA: 0x37C | Ordinal: 893
        void getFocusedWidget(void) const;

    // RVA: 0x39F | Ordinal: 928
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3EE | Ordinal: 1007
        void getInteractiveState(void) const;

    // RVA: 0x404 | Ordinal: 1029
        void getItem(int) const;

    // RVA: 0x409 | Ordinal: 1034
        void getItemCount(void) const;

    // RVA: 0x40F | Ordinal: 1040
        void getItemIndex(class gui::ListBoxLine *) const;

    // RVA: 0x4AE | Ordinal: 1199
        void getSelectedItem(void) const;

    // RVA: 0x4D0 | Ordinal: 1233
        void getSkin(void) const;

    // RVA: 0x56C | Ordinal: 1389
        void getView(void) const;

    // RVA: 0x5A4 | Ordinal: 1445
        void getWidgetType(void) const;

    // RVA: 0x5CD | Ordinal: 1486
        void getWindow(void) const;

    // RVA: 0x5D1 | Ordinal: 1490
        void getWindowVisible(void) const;

    // RVA: 0x5E6 | Ordinal: 1511
        void insertItem(class gui::ListBoxLine *, int);

    // RVA: 0x6BF | Ordinal: 1728
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x6D3 | Ordinal: 1748
        void onListBoxChange_(void);

    // RVA: 0x6DB | Ordinal: 1756
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6E9 | Ordinal: 1770
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6FC | Ordinal: 1789
        void onMouseDown_(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6FF | Ordinal: 1792
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x70F | Ordinal: 1808
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x721 | Ordinal: 1826
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x72D | Ordinal: 1838
        void onMouseReleased(void);

    // RVA: 0x732 | Ordinal: 1843
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x76B | Ordinal: 1900
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x7FA | Ordinal: 2043
        void removeAllItems(void);

    // RVA: 0x812 | Ordinal: 2067
        void removeItem(class gui::ListBoxLine *);

    // RVA: 0x83D | Ordinal: 2110
        void selectItem(class gui::ListBoxLine *);

    // RVA: 0x843 | Ordinal: 2116
        void selectNextItem_(void);

    // RVA: 0x848 | Ordinal: 2121
        void selectPrevItem_(void);

    // RVA: 0x982 | Ordinal: 2435
        void setWindowVisible(bool);

    // RVA: 0xA0C | Ordinal: 2573
        void updateView_(void);

    // RVA: 0xE5 | Ordinal: 230
        void _ComboList(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COMBOLIST_HPP
