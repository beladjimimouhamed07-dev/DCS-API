#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: CheckListBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class CheckListBox
{
public:

    // RVA: 0x43 | Ordinal: 68
        void CheckListBox(void);

    // RVA: 0x1B1 | Ordinal: 434
        void clone(void) const;

    // RVA: 0x1EE | Ordinal: 495
        void copyParams(class gui::CheckListBox *) const;

    // RVA: 0x329 | Ordinal: 810
        void getCheckRect_(class gui::CheckListBoxLine *) const;

    // RVA: 0x402 | Ordinal: 1027
        void getItem(int) const;

    // RVA: 0x40D | Ordinal: 1038
        void getItemIndex(class gui::CheckListBoxLine const *) const;

    // RVA: 0x4AC | Ordinal: 1197
        void getSelectedItem(void) const;

    // RVA: 0x4CC | Ordinal: 1229
        void getSkin(void) const;

    // RVA: 0x5A0 | Ordinal: 1441
        void getWidgetType(void) const;

    // RVA: 0x5E4 | Ordinal: 1509
        void insertItem(class gui::CheckListBoxLine *, int);

    // RVA: 0x6A3 | Ordinal: 1700
        void onItemChange_(class gui::CheckListBoxLine *);

    // RVA: 0x6A5 | Ordinal: 1702
        void onItemMouseDoubleClick_(class osg::Vec2i const &, class gui::ListBoxLineBase *);

    // RVA: 0x6A7 | Ordinal: 1704
        void onItemMouseDown_(class osg::Vec2i const &, class gui::ListBoxLineBase *);

    // RVA: 0x6AB | Ordinal: 1708
        void onItemMouseMove_(class osg::Vec2i const &, class gui::ListBoxLineBase *);

    // RVA: 0x6B1 | Ordinal: 1714
        void onItemMouseUp_(class osg::Vec2i const &, class gui::ListBoxLineBase *);

    // RVA: 0x6BC | Ordinal: 1725
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x810 | Ordinal: 2065
        void removeItem(class gui::CheckListBoxLine *);

    // RVA: 0x83B | Ordinal: 2108
        void selectItem(class gui::CheckListBoxLine *);

    // RVA: 0x8D2 | Ordinal: 2259
        void setItemVisible(class gui::CheckListBoxLine *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_CHECKLISTBOX_HPP
