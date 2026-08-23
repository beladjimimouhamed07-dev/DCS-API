#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: GridHeader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class GridHeader
{
public:

    // RVA: 0x76 | Ordinal: 119
        void GridHeader(class gui::Grid &);

    // RVA: 0x198 | Ordinal: 409
        void clear(void);

    // RVA: 0x1A2 | Ordinal: 419
        void clearColumn(int);

    // RVA: 0x28E | Ordinal: 655
        void drawChildren(void) const;

    // RVA: 0x33A | Ordinal: 827
        void getColumn(int) const;

    // RVA: 0x33C | Ordinal: 829
        void getColumnCount(void) const;

    // RVA: 0x5E3 | Ordinal: 1508
        void insertColumn(class gui::GridHeaderCell *, int);

    // RVA: 0x639 | Ordinal: 1594
        void makeChildren(class gui::GraphicCommands *) const;

    // RVA: 0x6DE | Ordinal: 1759
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6ED | Ordinal: 1774
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x714 | Ordinal: 1813
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x726 | Ordinal: 1831
        void onMouseMove(class osg::Vec2i const &);

    // RVA: 0x736 | Ordinal: 1847
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x7F8 | Ordinal: 2041
        void removeAllColumns(void);

    // RVA: 0x80B | Ordinal: 2060
        void removeColumn(int);

    // RVA: 0x87C | Ordinal: 2173
        void setColumn(int, class gui::GridHeaderCell *);

    // RVA: 0x9C5 | Ordinal: 2502
        void update(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_GRIDHEADER_HPP
