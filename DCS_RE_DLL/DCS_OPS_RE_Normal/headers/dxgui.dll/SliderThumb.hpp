#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: SliderThumb
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class SliderThumb
{
public:

    // RVA: 0xBD | Ordinal: 190
        void SliderThumb(class gui::Slider &);

    // RVA: 0x3FD | Ordinal: 1022
        void getInteractiveState(void) const;

    // RVA: 0x550 | Ordinal: 1361
        void getValue(void) const;

    // RVA: 0x964 | Ordinal: 2405
        void setValue(double);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SLIDERTHUMB_HPP
