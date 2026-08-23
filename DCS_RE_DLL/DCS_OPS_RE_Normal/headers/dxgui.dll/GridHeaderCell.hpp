#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: GridHeaderCell
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class GridHeaderCell
{
public:

    // RVA: 0x77 | Ordinal: 120
        void GridHeaderCell(void);

    // RVA: 0x199 | Ordinal: 410
        void clear(void);

    // RVA: 0x1BA | Ordinal: 443
        void clone(void) const;

    // RVA: 0x1F6 | Ordinal: 503
        void copyParams(class gui::GridHeaderCell *) const;

    // RVA: 0x352 | Ordinal: 851
        void getDraggable(void) const;

    // RVA: 0x3F5 | Ordinal: 1014
        void getInteractiveState(void) const;

    // RVA: 0x4D5 | Ordinal: 1238
        void getSkin(void) const;

    // RVA: 0x595 | Ordinal: 1430
        void getWidgetIndex(class gui::Widget *) const;

    // RVA: 0x5A8 | Ordinal: 1449
        void getWidgetType(void) const;

    // RVA: 0x5EE | Ordinal: 1519
        void insertWidget(class gui::Widget *, int);

    // RVA: 0x6DF | Ordinal: 1760
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6EE | Ordinal: 1775
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x703 | Ordinal: 1796
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x715 | Ordinal: 1814
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x72E | Ordinal: 1839
        void onMouseReleased(void);

    // RVA: 0x737 | Ordinal: 1848
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x800 | Ordinal: 2049
        void removeAllWidgets(void);

    // RVA: 0x824 | Ordinal: 2085
        void removeWidget(class gui::Widget *);

    // RVA: 0x88F | Ordinal: 2192
        void setDirty(enum gui::Widget::DirtyFlag);

    // RVA: 0x898 | Ordinal: 2201
        void setDraggable(bool);

    // RVA: 0x8B0 | Ordinal: 2225
        void setGrid(class gui::Grid *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_GRIDHEADERCELL_HPP
