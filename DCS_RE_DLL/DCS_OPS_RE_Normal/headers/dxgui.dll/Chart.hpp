#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Chart
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Chart
{
public:

    // RVA: 0x3D | Ordinal: 62
        void Chart(void);

    // RVA: 0x4CA | Ordinal: 1227
        void getSkin(void) const;

    // RVA: 0x553 | Ordinal: 1364
        void getValues(void) const;

    // RVA: 0x967 | Ordinal: 2408
        void setValues(class ed::vector<float, class ed::allocator<float>> const &);

    // RVA: 0xDD | Ordinal: 222
        void _Chart(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_CHART_HPP
