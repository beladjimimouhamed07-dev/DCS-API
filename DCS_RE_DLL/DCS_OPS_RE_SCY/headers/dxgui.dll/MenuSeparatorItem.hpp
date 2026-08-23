#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuSeparatorItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class MenuSeparatorItem
{
public:

    // RVA: 0x96 | Ordinal: 151
        void MenuSeparatorItem(void);

    // RVA: 0x1C9 | Ordinal: 458
        void clone(void) const;

    // RVA: 0x1E3 | Ordinal: 484
        void cloneItem(void) const;

    // RVA: 0x443 | Ordinal: 1092
        void getMenuSkinData_(void) const;

    // RVA: 0x4E2 | Ordinal: 1251
        void getSkin(void) const;

    // RVA: 0x5B5 | Ordinal: 1462
        void getWidgetType(void) const;

    // RVA: 0x708 | Ordinal: 1801
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x71A | Ordinal: 1819
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x73C | Ordinal: 1853
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUSEPARATORITEM_HPP
