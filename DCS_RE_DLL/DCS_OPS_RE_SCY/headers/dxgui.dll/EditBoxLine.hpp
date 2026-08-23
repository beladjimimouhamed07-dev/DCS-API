#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: EditBoxLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class EditBoxLine
{
public:

    // RVA: 0x62 | Ordinal: 99
        void EditBoxLine(class gui::EditBox const &);

    // RVA: 0x156 | Ordinal: 343
        void beginClip_(void) const;

    // RVA: 0x2E0 | Ordinal: 737
        void endClip_(void) const;

    // RVA: 0x346 | Ordinal: 839
        void getData(void) const;

    // RVA: 0x3F4 | Ordinal: 1013
        void getInteractiveState(void) const;

    // RVA: 0x46B | Ordinal: 1132
        void getOwner(void) const;

    // RVA: 0x888 | Ordinal: 2185
        void setData(class gui::EditBoxItem const *);

    // RVA: 0xEB | Ordinal: 236
        void _EditBoxLine(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_EDITBOXLINE_HPP
