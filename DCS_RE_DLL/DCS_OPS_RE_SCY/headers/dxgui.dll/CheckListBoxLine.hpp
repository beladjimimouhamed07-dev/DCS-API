#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: CheckListBoxLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class CheckListBoxLine
{
public:

    // RVA: 0x44 | Ordinal: 69
        void CheckListBoxLine(void);

    // RVA: 0x1B2 | Ordinal: 435
        void clone(void) const;

    // RVA: 0x1EF | Ordinal: 496
        void copyParams(class gui::CheckListBoxLine *) const;

    // RVA: 0x32A | Ordinal: 811
        void getCheckVisible(void) const;

    // RVA: 0x32B | Ordinal: 812
        void getChecked(void) const;

    // RVA: 0x3DB | Ordinal: 988
        void getInnerState(void) const;

    // RVA: 0x4CD | Ordinal: 1230
        void getSkin(void) const;

    // RVA: 0x5A1 | Ordinal: 1442
        void getWidgetType(void) const;

    // RVA: 0x684 | Ordinal: 1669
        void onCheckVisibleChanged_(bool);

    // RVA: 0x685 | Ordinal: 1670
        void onCheckedChanged_(bool);

    // RVA: 0x875 | Ordinal: 2166
        void setCheckVisible(bool);

    // RVA: 0x876 | Ordinal: 2167
        void setChecked(bool);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_CHECKLISTBOXLINE_HPP
