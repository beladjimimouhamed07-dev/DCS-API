#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: VertScrollBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class VertScrollBar
{
public:

    // RVA: 0xCF | Ordinal: 208
        void VertScrollBar(bool);

    // RVA: 0x152 | Ordinal: 339
        void alignWidgets_(void);

    // RVA: 0x1DC | Ordinal: 477
        void clone(void) const;

    // RVA: 0x271 | Ordinal: 626
        void dragThumb_(class osg::Vec2i const &);

    // RVA: 0x34C | Ordinal: 845
        void getDecreaseButtonSize_(void) const;

    // RVA: 0x3D7 | Ordinal: 984
        void getIncreaseButtonSize_(void) const;

    // RVA: 0x5C6 | Ordinal: 1479
        void getWidgetType(void) const;

    // RVA: 0x6E4 | Ordinal: 1765
        void onMouseDoubleClick(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x6F7 | Ordinal: 1784
        void onMouseDown(class osg::Vec2i const &, enum gui::MouseButton);

    // RVA: 0x9FD | Ordinal: 2558
        void updateThumbPosition_(void);

    // RVA: 0xA01 | Ordinal: 2562
        void updateThumbSize_(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_VERTSCROLLBAR_HPP
