#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: BorderLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class BorderLayout
{
public:

    // RVA: 0x38 | Ordinal: 57
        void BorderLayout(int, int);

    // RVA: 0x1AE | Ordinal: 431
        void clone(void) const;

    // RVA: 0x3B9 | Ordinal: 954
        void getHorzGap(void) const;

    // RVA: 0x436 | Ordinal: 1079
        void getMaxSize(void) const;

    // RVA: 0x448 | Ordinal: 1097
        void getMinSize(void) const;

    // RVA: 0x47B | Ordinal: 1148
        void getPrefSize(void) const;

    // RVA: 0x545 | Ordinal: 1350
        void getType(void) const;

    // RVA: 0x557 | Ordinal: 1368
        void getVertGap(void) const;

    // RVA: 0x8BC | Ordinal: 2237
        void setHorzGap(int);

    // RVA: 0x96B | Ordinal: 2412
        void setVertGap(int);

    // RVA: 0x9F0 | Ordinal: 2545
        void updateSize(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_BORDERLAYOUT_HPP
