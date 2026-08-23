#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: HorzLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class HorzLayout
{
public:

    // RVA: 0x7C | Ordinal: 125
        void HorzLayout(int);

    // RVA: 0x161 | Ordinal: 354
        void calcMaxSize(void) const;

    // RVA: 0x1BB | Ordinal: 444
        void clone(void) const;

    // RVA: 0x38C | Ordinal: 909
        void getGap(void) const;

    // RVA: 0x3B7 | Ordinal: 952
        void getHorzAlign(void) const;

    // RVA: 0x439 | Ordinal: 1082
        void getMaxSize(void) const;

    // RVA: 0x44B | Ordinal: 1100
        void getMinSize(void) const;

    // RVA: 0x47E | Ordinal: 1151
        void getPrefSize(void) const;

    // RVA: 0x547 | Ordinal: 1352
        void getType(void) const;

    // RVA: 0x555 | Ordinal: 1366
        void getVertAlign(void) const;

    // RVA: 0x8AE | Ordinal: 2223
        void setGap(int);

    // RVA: 0x8BA | Ordinal: 2235
        void setHorzAlign(class gui::Align const &);

    // RVA: 0x969 | Ordinal: 2410
        void setVertAlign(class gui::Align const &);

    // RVA: 0x9F3 | Ordinal: 2548
        void updateSize(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_HORZLAYOUT_HPP
