#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ProgressBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ProgressBar
{
public:

    // RVA: 0xA5 | Ordinal: 166
        void ProgressBar(void);

    // RVA: 0x14D | Ordinal: 334
        void alignFiller_(void);

    // RVA: 0x202 | Ordinal: 515
        void copyParams(class gui::ProgressBar *) const;

    // RVA: 0x2EC | Ordinal: 749
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x363 | Ordinal: 868
        void getFiller(void) const;

    // RVA: 0x486 | Ordinal: 1159
        void getRange(double &, double &) const;

    // RVA: 0x4E8 | Ordinal: 1257
        void getSkin(void) const;

    // RVA: 0x50B | Ordinal: 1292
        void getStep(void) const;

    // RVA: 0x54C | Ordinal: 1357
        void getValue(void) const;

    // RVA: 0x659 | Ordinal: 1626
        void makeStep(void);

    // RVA: 0x75C | Ordinal: 1885
        void onRangeChanged_(double, double);

    // RVA: 0x772 | Ordinal: 1907
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x77F | Ordinal: 1920
        void onStepChanged_(double);

    // RVA: 0x791 | Ordinal: 1938
        void onValueChanged_(double);

    // RVA: 0x910 | Ordinal: 2321
        void setRange(double, double);

    // RVA: 0x933 | Ordinal: 2356
        void setStep(double);

    // RVA: 0x960 | Ordinal: 2401
        void setValue(double);

    // RVA: 0x9D9 | Ordinal: 2522
        void updateFiller_(void);

    // RVA: 0xA1E | Ordinal: 2591
        void validateRange_(double, double) const;

    // RVA: 0xA28 | Ordinal: 2601
        void validateStep_(double) const;

    // RVA: 0xA2E | Ordinal: 2607
        void validateValue_(double) const;
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_PROGRESSBAR_HPP
