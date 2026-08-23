#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: EditBoxView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class EditBoxView
{
public:

    // RVA: 0x68 | Ordinal: 105
        void EditBoxView(class gui::EditBox &);

    // RVA: 0x3DD | Ordinal: 990
        void getInnerState(void) const;

    // RVA: 0x9E7 | Ordinal: 2536
        void updateLines(class ed::vector<class gui::EditBoxItem *, class ed::allocator<class gui::EditBoxItem *>> const &, int);

    // RVA: 0x9E8 | Ordinal: 2537
        void updateLinesHorzOffset(int);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_EDITBOXVIEW_HPP
