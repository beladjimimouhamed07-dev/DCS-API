#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ListBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ListBox
{
public:

    // RVA: 0x85 | Ordinal: 134
        void ListBox(void);

    // RVA: 0x1C1 | Ordinal: 450
        void clone(void) const;

    // RVA: 0x1F7 | Ordinal: 504
        void copyParams(class gui::ListBox *) const;

    // RVA: 0x2E2 | Ordinal: 739
        void filterItemsBySearch(class ed::basic_string<wchar_t> const &);

    // RVA: 0x405 | Ordinal: 1030
        void getItem(int) const;

    // RVA: 0x410 | Ordinal: 1041
        void getItemIndex(class gui::ListBoxLine *) const;

    // RVA: 0x4AF | Ordinal: 1200
        void getSelectedItem(void) const;

    // RVA: 0x4D7 | Ordinal: 1240
        void getSkin(void) const;

    // RVA: 0x5AD | Ordinal: 1454
        void getWidgetType(void) const;

    // RVA: 0x5E7 | Ordinal: 1512
        void insertItem(class gui::ListBoxLine *, int);

    // RVA: 0x6C5 | Ordinal: 1734
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x813 | Ordinal: 2068
        void removeItem(class gui::ListBoxLine *);

    // RVA: 0x83E | Ordinal: 2111
        void selectItem(class gui::ListBoxLine *);

    // RVA: 0x8D3 | Ordinal: 2260
        void setItemVisible(class gui::ListBoxLine *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_LISTBOX_HPP
