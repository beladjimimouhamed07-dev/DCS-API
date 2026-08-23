#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: OffscreenWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class OffscreenWindow
{
public:

    // RVA: 0x9B | Ordinal: 156
        void OffscreenWindow(void);

    // RVA: 0x5D5 | Ordinal: 1494
        void getZOrder(void) const;

    // RVA: 0x7AA | Ordinal: 1963
        void onZOrderChanged_(int);

    // RVA: 0x985 | Ordinal: 2438
        void setZOrder(int);

    // RVA: 0x10A | Ordinal: 267
        void _OffscreenWindow(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_OFFSCREENWINDOW_HPP
