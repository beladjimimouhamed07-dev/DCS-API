#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MenuBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class MenuBar
{
public:

    // RVA: 0x8E | Ordinal: 143
        void MenuBar(void);

    // RVA: 0x19B | Ordinal: 412
        void clear(void);

    // RVA: 0x1C4 | Ordinal: 453
        void clone(void) const;

    // RVA: 0x1FB | Ordinal: 508
        void copyParams(class gui::MenuBar *) const;

    // RVA: 0x307 | Ordinal: 776
        void getActiveItem_(void) const;

    // RVA: 0x406 | Ordinal: 1031
        void getItem(int) const;

    // RVA: 0x40B | Ordinal: 1036
        void getItemCount(void) const;

    // RVA: 0x411 | Ordinal: 1042
        void getItemIndex(class gui::MenuBarItem *) const;

    // RVA: 0x4DC | Ordinal: 1245
        void getSkin(void) const;

    // RVA: 0x5B0 | Ordinal: 1457
        void getWidgetType(void) const;

    // RVA: 0x5E8 | Ordinal: 1513
        void insertItem(class gui::MenuBarItem *, int);

    // RVA: 0x6A1 | Ordinal: 1698
        void onHoveredWidgetChanged_(class gui::WidgetHandler *, class osg::Vec2i const &);

    // RVA: 0x6E2 | Ordinal: 1763
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6F2 | Ordinal: 1779
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x739 | Ordinal: 1850
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x7FC | Ordinal: 2045
        void removeAllItems(void);

    // RVA: 0x814 | Ordinal: 2069
        void removeItem(class gui::MenuBarItem *);

    // RVA: 0x85F | Ordinal: 2144
        void setActiveItem_(class gui::MenuBarItem *);

    // RVA: 0x889 | Ordinal: 2186
        void setDeactivateByClickValue(bool);

    // RVA: 0x88A | Ordinal: 2187
        void setDeactiveItem_(class gui::MenuBarItem *);

    // RVA: 0x8E8 | Ordinal: 2281
        void setMenuBarItemSkin_(class gui::MenuBarItem *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MENUBAR_HPP
