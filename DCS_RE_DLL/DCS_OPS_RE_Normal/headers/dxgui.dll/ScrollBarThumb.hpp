#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ScrollBarThumb
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ScrollBarThumb
{
public:

    // RVA: 0xB0 | Ordinal: 177
        void ScrollBarThumb(class gui::ScrollBar &);

    // RVA: 0x3FA | Ordinal: 1019
        void getInteractiveState(void) const;

    // RVA: 0x54E | Ordinal: 1359
        void getValue(void) const;

    // RVA: 0x962 | Ordinal: 2403
        void setValue(double);

    // RVA: 0x114 | Ordinal: 277
        void _ScrollBarThumb(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SCROLLBARTHUMB_HPP
