#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ListBoxLineBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ListBoxLineBase
{
public:

    // RVA: 0x88 | Ordinal: 137
        void ListBoxLineBase(void);

    // RVA: 0x1F9 | Ordinal: 506
        void copyParams(class gui::ListBoxLineBase *) const;

    // RVA: 0x24F | Ordinal: 592
        void destroy_(void);

    // RVA: 0x3A6 | Ordinal: 935
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3F6 | Ordinal: 1015
        void getInteractiveState(void) const;

    // RVA: 0x42C | Ordinal: 1069
        void getListBox(void) const;

    // RVA: 0x4AB | Ordinal: 1196
        void getSelected(void) const;

    // RVA: 0x4DA | Ordinal: 1243
        void getSkin(void) const;

    // RVA: 0x5CB | Ordinal: 1484
        void getWidth(void) const;

    // RVA: 0x704 | Ordinal: 1797
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x716 | Ordinal: 1815
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x767 | Ordinal: 1896
        void onSelectedChanged_(bool);

    // RVA: 0x785 | Ordinal: 1926
        void onTextChanged_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x79F | Ordinal: 1952
        void onVisibleChanged_(bool);

    // RVA: 0x8DE | Ordinal: 2271
        void setListBox(class gui::ListBoxBase *);

    // RVA: 0x91F | Ordinal: 2336
        void setSelected(bool);

    // RVA: 0xA17 | Ordinal: 2584
        void updateWidth(void);

    // RVA: 0xFF | Ordinal: 256
        void _ListBoxLineBase(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_LISTBOXLINEBASE_HPP
