#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: EditBoxItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class EditBoxItem
{
public:

    // RVA: 0x60 | Ordinal: 97
        void EditBoxItem(class ed::vector<struct gui::EditBoxItem::Word, class ed::allocator<struct gui::EditBoxItem::Word>> &&);

    // RVA: 0x61 | Ordinal: 98
        void EditBoxItem(class ed::vector<struct gui::EditBoxItem::Word, class ed::allocator<struct gui::EditBoxItem::Word>> const &);

    // RVA: 0x153 | Ordinal: 340
        void appendTo(class ed::basic_string<wchar_t> &) const;

    // RVA: 0x369 | Ordinal: 874
        void getFirstSymbol(void) const;

    // RVA: 0x45F | Ordinal: 1120
        void getNormalizedSelection(int &, int &) const;

    // RVA: 0x4B5 | Ordinal: 1206
        void getSelectionEmpty(void) const;

    // RVA: 0x5D3 | Ordinal: 1492
        void getWords(void) const;

    // RVA: 0x8A1 | Ordinal: 2210
        void setEditBoxLine(class gui::EditBoxLine *) const;

    // RVA: 0x921 | Ordinal: 2338
        void setSelection(int, int);

    // RVA: 0x983 | Ordinal: 2436
        void setWords(class ed::vector<struct gui::EditBoxItem::Word, class ed::allocator<struct gui::EditBoxItem::Word>> const &);

    // RVA: 0xEA | Ordinal: 235
        void _EditBoxItem(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_EDITBOXITEM_HPP
