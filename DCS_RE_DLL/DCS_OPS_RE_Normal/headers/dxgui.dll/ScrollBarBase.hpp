#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ScrollBarBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ScrollBarBase
{
public:

    // RVA: 0xAE | Ordinal: 175
        void ScrollBarBase(void);

    // RVA: 0x18E | Ordinal: 399
        void changeValue_(double);

    // RVA: 0x23A | Ordinal: 571
        void decreaseValue_(void);

    // RVA: 0x46D | Ordinal: 1134
        void getPageStep(void) const;

    // RVA: 0x488 | Ordinal: 1161
        void getRange(double &, double &) const;

    // RVA: 0x50C | Ordinal: 1293
        void getStep(void) const;

    // RVA: 0x539 | Ordinal: 1338
        void getThumbValue(void) const;

    // RVA: 0x54D | Ordinal: 1358
        void getValue(void) const;

    // RVA: 0x5DF | Ordinal: 1504
        void increaseValue_(void);

    // RVA: 0x74D | Ordinal: 1870
        void onPageStepChanged_(double);

    // RVA: 0x75F | Ordinal: 1888
        void onRangeChanged_(double, double);

    // RVA: 0x780 | Ordinal: 1921
        void onStepChanged_(double);

    // RVA: 0x78F | Ordinal: 1936
        void onThumbValueChanged_(double);

    // RVA: 0x793 | Ordinal: 1940
        void onValueChanged_(double);

    // RVA: 0x8FC | Ordinal: 2301
        void setPageStep(double);

    // RVA: 0x912 | Ordinal: 2323
        void setRange(double, double);

    // RVA: 0x934 | Ordinal: 2357
        void setStep(double);

    // RVA: 0x955 | Ordinal: 2390
        void setThumbValue(double);

    // RVA: 0x961 | Ordinal: 2402
        void setValue(double);

    // RVA: 0xA1B | Ordinal: 2588
        void validatePageStep_(double) const;

    // RVA: 0xA20 | Ordinal: 2593
        void validateRange_(double, double) const;

    // RVA: 0xA29 | Ordinal: 2602
        void validateStep_(double) const;

    // RVA: 0xA2B | Ordinal: 2604
        void validateThumbValue_(double) const;

    // RVA: 0xA2F | Ordinal: 2608
        void validateValue_(double) const;
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SCROLLBARBASE_HPP
