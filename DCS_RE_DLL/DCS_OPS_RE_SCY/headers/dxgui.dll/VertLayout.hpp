#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: VertLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class VertLayout
{
public:

    // RVA: 0xCA | Ordinal: 203
        void VertLayout(int);

    // RVA: 0x163 | Ordinal: 356
        void calcMaxSize(void) const;

    // RVA: 0x1D9 | Ordinal: 474
        void clone(void) const;

    // RVA: 0x38E | Ordinal: 911
        void getGap(void) const;

    // RVA: 0x3B8 | Ordinal: 953
        void getHorzAlign(void) const;

    // RVA: 0x43B | Ordinal: 1084
        void getMaxSize(void) const;

    // RVA: 0x44D | Ordinal: 1102
        void getMinSize(void) const;

    // RVA: 0x480 | Ordinal: 1153
        void getPrefSize(void) const;

    // RVA: 0x548 | Ordinal: 1353
        void getType(void) const;

    // RVA: 0x556 | Ordinal: 1367
        void getVertAlign(void) const;

    // RVA: 0x8AF | Ordinal: 2224
        void setGap(int);

    // RVA: 0x8BB | Ordinal: 2236
        void setHorzAlign(class gui::Align const &);

    // RVA: 0x96A | Ordinal: 2411
        void setVertAlign(class gui::Align const &);

    // RVA: 0x9F5 | Ordinal: 2550
        void updateSize(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_VERTLAYOUT_HPP
