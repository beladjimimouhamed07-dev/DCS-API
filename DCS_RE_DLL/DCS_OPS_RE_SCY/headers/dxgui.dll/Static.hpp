#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Static
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Static
{
public:

    // RVA: 0xC0 | Ordinal: 193
        void Static(bool);

    // RVA: 0x1D4 | Ordinal: 469
        void clone(void) const;

    // RVA: 0x209 | Ordinal: 522
        void copyParams(class gui::Static *) const;

    // RVA: 0x2A6 | Ordinal: 679
        void drawModelView_(void) const;

    // RVA: 0x311 | Ordinal: 786
        void getAngle(void) const;

    // RVA: 0x475 | Ordinal: 1142
        void getPivotPoint(void) const;

    // RVA: 0x4EF | Ordinal: 1264
        void getSkin(void) const;

    // RVA: 0x5C0 | Ordinal: 1473
        void getWidgetType(void) const;

    // RVA: 0x651 | Ordinal: 1618
        void makeModelView_(class gui::GraphicCommands *) const;

    // RVA: 0x672 | Ordinal: 1651
        void onAngleChanged_(double);

    // RVA: 0x754 | Ordinal: 1877
        void onPivotPointChanged_(class osg::Vec2i const &);

    // RVA: 0x866 | Ordinal: 2151
        void setAngle(double);

    // RVA: 0x908 | Ordinal: 2313
        void setPivotPoint(class osg::Vec2i const &);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_STATIC_HPP
