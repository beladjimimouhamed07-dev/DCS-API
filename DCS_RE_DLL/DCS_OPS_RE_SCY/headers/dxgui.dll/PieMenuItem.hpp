#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: PieMenuItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class PieMenuItem
{
public:

    // RVA: 0x9F | Ordinal: 160
        void PieMenuItem(bool);

    // RVA: 0x1CF | Ordinal: 464
        void clone(void) const;

    // RVA: 0x1E5 | Ordinal: 486
        void cloneItem(void) const;

    // RVA: 0x2A5 | Ordinal: 678
        void drawModelView_(void) const;

    // RVA: 0x310 | Ordinal: 785
        void getAngle(double &, double &) const;

    // RVA: 0x3F9 | Ordinal: 1018
        void getInteractiveState(void) const;

    // RVA: 0x43F | Ordinal: 1088
        void getMenu(void) const;

    // RVA: 0x445 | Ordinal: 1094
        void getMenuSkinData_(void) const;

    // RVA: 0x453 | Ordinal: 1108
        void getMouseButtonDown_(void) const;

    // RVA: 0x484 | Ordinal: 1157
        void getRadius(double &, double &) const;

    // RVA: 0x4A1 | Ordinal: 1186
        void getScreenPointInside(class osg::Vec2i const &) const;

    // RVA: 0x4E6 | Ordinal: 1255
        void getSkin(void) const;

    // RVA: 0x512 | Ordinal: 1299
        void getSubMenu(void) const;

    // RVA: 0x5BB | Ordinal: 1468
        void getWidgetType(void) const;

    // RVA: 0x610 | Ordinal: 1553
        void loadSkin_(void);

    // RVA: 0x650 | Ordinal: 1617
        void makeModelView_(class gui::GraphicCommands *) const;

    // RVA: 0x6B6 | Ordinal: 1719
        void onItemMouseUp_(void);

    // RVA: 0x6D5 | Ordinal: 1750
        void onMenuChanged_(class gui::WidgetHandler *);

    // RVA: 0x6F5 | Ordinal: 1782
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x709 | Ordinal: 1802
        void onMouseEnter(class osg::Vec2i const &);

    // RVA: 0x71B | Ordinal: 1820
        void onMouseLeave(class osg::Vec2i const &);

    // RVA: 0x73F | Ordinal: 1856
        void onMouseUp(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x865 | Ordinal: 2150
        void setAngle(double, double);

    // RVA: 0x892 | Ordinal: 2195
        void setDirty(enum gui::Widget::DirtyFlag);

    // RVA: 0x8E7 | Ordinal: 2280
        void setMenu(class gui::PieMenu *);

    // RVA: 0x90E | Ordinal: 2319
        void setRadius(double, double);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_PIEMENUITEM_HPP
