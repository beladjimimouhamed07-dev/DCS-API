#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ComboListView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ComboListView
{
public:

    // RVA: 0x55 | Ordinal: 86
        void ComboListView(class gui::ComboList &);

    // RVA: 0x3F0 | Ordinal: 1009
        void getInteractiveState(void) const;

    // RVA: 0x8CF | Ordinal: 2256
        void setItem(class gui::ListBoxLine const *);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COMBOLISTVIEW_HPP
