#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: HorzScrollBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class HorzScrollBar
{
public:

    // RVA: 0x81 | Ordinal: 130
        void HorzScrollBar(bool);

    // RVA: 0x151 | Ordinal: 338
        void alignWidgets_(void);

    // RVA: 0x1BE | Ordinal: 447
        void clone(void) const;

    // RVA: 0x26F | Ordinal: 624
        void dragThumb_(class osg::Vec2i const &);

    // RVA: 0x34B | Ordinal: 844
        void getDecreaseButtonSize_(void) const;

    // RVA: 0x3D6 | Ordinal: 983
        void getIncreaseButtonSize_(void) const;

    // RVA: 0x5AB | Ordinal: 1452
        void getWidgetType(void) const;

    // RVA: 0x6E0 | Ordinal: 1761
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6EF | Ordinal: 1776
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x9FB | Ordinal: 2556
        void updateThumbPosition_(void);

    // RVA: 0x9FF | Ordinal: 2560
        void updateThumbSize_(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_HORZSCROLLBAR_HPP
