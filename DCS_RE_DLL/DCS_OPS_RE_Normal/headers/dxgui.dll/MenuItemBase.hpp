#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuItemBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class MenuItemBase
{
public:

    // RVA: 0x93 | Ordinal: 148
        void MenuItemBase(void);

    // RVA: 0x169 | Ordinal: 362
        void calcShortcutWidth(void) const;

    // RVA: 0x1FD | Ordinal: 510
        void copyParams(class gui::MenuItemBase *) const;

    // RVA: 0x3F8 | Ordinal: 1017
        void getInteractiveState(void) const;

    // RVA: 0x43E | Ordinal: 1087
        void getMenu(void) const;

    // RVA: 0x451 | Ordinal: 1106
        void getMouseButtonDown_(void) const;

    // RVA: 0x4C2 | Ordinal: 1219
        void getShortcut(void) const;

    // RVA: 0x4E0 | Ordinal: 1249
        void getSkin(void) const;

    // RVA: 0x511 | Ordinal: 1298
        void getSubMenu(void) const;

    // RVA: 0x60F | Ordinal: 1552
        void loadSkin_(void);

    // RVA: 0x699 | Ordinal: 1690
        void onHighlightedChanged_(bool);

    // RVA: 0x6B5 | Ordinal: 1718
        void onItemMouseUp_(void);

    // RVA: 0x6D4 | Ordinal: 1749
        void onMenuChanged_(class gui::WidgetHandler *);

    // RVA: 0x707 | Ordinal: 1800
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x719 | Ordinal: 1818
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x768 | Ordinal: 1897
        void onShortcutChanged_(class ed::basic_string<wchar_t> const &);

    // RVA: 0x786 | Ordinal: 1927
        void onTextChanged_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x85C | Ordinal: 2141
        void setActive(void);

    // RVA: 0x8B6 | Ordinal: 2231
        void setHighlighted(bool);

    // RVA: 0x8E6 | Ordinal: 2279
        void setMenu(class gui::Menu *);

    // RVA: 0x927 | Ordinal: 2344
        void setShortcut(class ed::basic_string<wchar_t> const &);

    // RVA: 0x938 | Ordinal: 2361
        void setSubMenu(class gui::Menu *);

    // RVA: 0xA24 | Ordinal: 2597
        void validateSize_(class osg::Vec2i const &) const;
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUITEMBASE_HPP
