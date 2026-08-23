#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: CheckBaseSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class CheckBaseSkin
{
public:

    // RVA: 0x40 | Ordinal: 65
        void CheckBaseSkin(class gui::ButtonBase *);

    // RVA: 0x165 | Ordinal: 358
        void calcPictureSize_(enum gui::skin::InteractiveState, int) const;

    // RVA: 0x258 | Ordinal: 601
        void doRedraw(void);

    // RVA: 0x28B | Ordinal: 652
        void drawCheck_(void) const;

    // RVA: 0x2B6 | Ordinal: 695
        void draw_(void) const;

    // RVA: 0x36D | Ordinal: 878
        void getFocusRectBounds_(void) const;

    // RVA: 0x4F7 | Ordinal: 1272
        void getSkinData(void) const;

    // RVA: 0x636 | Ordinal: 1591
        void makeCheck_(class gui::GraphicCommands *) const;

    // RVA: 0x661 | Ordinal: 1634
        void make_(class gui::GraphicCommands *) const;

    // RVA: 0x7D8 | Ordinal: 2009
        void redrawCheck_(enum gui::skin::InteractiveState, int);

    // RVA: 0x7EA | Ordinal: 2027
        void redraw_(void);

    // RVA: 0xDF | Ordinal: 224
        void _CheckBaseSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_CHECKBASESKIN_HPP
