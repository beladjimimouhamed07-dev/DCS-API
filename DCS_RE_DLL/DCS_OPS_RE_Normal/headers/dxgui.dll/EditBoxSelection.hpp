#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: EditBoxSelection
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class EditBoxSelection
{
public:

    // RVA: 0x64 | Ordinal: 101
        void EditBoxSelection(int, int);

    // RVA: 0x65 | Ordinal: 102
        void EditBoxSelection(int, int, int, int);

    // RVA: 0x66 | Ordinal: 103
        void EditBoxSelection(void);

    // RVA: 0x2DD | Ordinal: 734
        void empty(void) const;

    // RVA: 0x460 | Ordinal: 1121
        void getNormalizedSelection(void) const;

    // RVA: 0x461 | Ordinal: 1122
        void getNormalizedSelectionBegin(void) const;

    // RVA: 0x462 | Ordinal: 1123
        void getNormalizedSelectionEnd(void) const;

    // RVA: 0x82E | Ordinal: 2095
        void reset(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_EDITBOXSELECTION_HPP
