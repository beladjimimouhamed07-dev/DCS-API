#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: CheckListBoxLineSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class CheckListBoxLineSkin
{
public:

    // RVA: 0x45 | Ordinal: 70
        void CheckListBoxLineSkin(class gui::CheckListBoxLine *);

    // RVA: 0x259 | Ordinal: 602
        void doRedraw(void);

    // RVA: 0x28C | Ordinal: 653
        void drawCheck_(void) const;

    // RVA: 0x2B7 | Ordinal: 696
        void draw_(void) const;

    // RVA: 0x326 | Ordinal: 807
        void getCheckImage(void) const;

    // RVA: 0x36E | Ordinal: 879
        void getFocusRectBounds_(void) const;

    // RVA: 0x637 | Ordinal: 1592
        void makeCheck_(class gui::GraphicCommands *) const;

    // RVA: 0x662 | Ordinal: 1635
        void make_(class gui::GraphicCommands *) const;

    // RVA: 0x7D9 | Ordinal: 2010
        void redrawCheck_(enum gui::skin::InteractiveState, int);

    // RVA: 0x7EB | Ordinal: 2028
        void redraw_(void);

    // RVA: 0xE0 | Ordinal: 225
        void _CheckListBoxLineSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_CHECKLISTBOXLINESKIN_HPP
