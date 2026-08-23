#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Slider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Slider
{
public:

    // RVA: 0xBA | Ordinal: 187
        void Slider(void);

    // RVA: 0x18F | Ordinal: 400
        void changeValue_(double);

    // RVA: 0x207 | Ordinal: 520
        void copyParams(class gui::Slider *) const;

    // RVA: 0x2F0 | Ordinal: 753
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x365 | Ordinal: 870
        void getFiller(void) const;

    // RVA: 0x382 | Ordinal: 899
        void getFocusedWidget(void) const;

    // RVA: 0x3AC | Ordinal: 941
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3FB | Ordinal: 1020
        void getInteractiveState(void) const;

    // RVA: 0x46E | Ordinal: 1135
        void getPageStep(void) const;

    // RVA: 0x489 | Ordinal: 1162
        void getRange(double &, double &) const;

    // RVA: 0x4ED | Ordinal: 1262
        void getSkin(void) const;

    // RVA: 0x50D | Ordinal: 1294
        void getStep(void) const;

    // RVA: 0x536 | Ordinal: 1335
        void getThumb(void) const;

    // RVA: 0x54F | Ordinal: 1360
        void getValue(void) const;

    // RVA: 0x6C6 | Ordinal: 1735
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x74E | Ordinal: 1871
        void onPageStepChanged_(double);

    // RVA: 0x760 | Ordinal: 1889
        void onRangeChanged_(double, double);

    // RVA: 0x776 | Ordinal: 1911
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x781 | Ordinal: 1922
        void onStepChanged_(double);

    // RVA: 0x78B | Ordinal: 1932
        void onThumbPressed_(void);

    // RVA: 0x78D | Ordinal: 1934
        void onThumbReleased_(void);

    // RVA: 0x794 | Ordinal: 1941
        void onValueChanged_(double);

    // RVA: 0x8FD | Ordinal: 2302
        void setPageStep(double);

    // RVA: 0x913 | Ordinal: 2324
        void setRange(double, double);

    // RVA: 0x935 | Ordinal: 2358
        void setStep(double);

    // RVA: 0x963 | Ordinal: 2404
        void setValue(double);

    // RVA: 0xA1C | Ordinal: 2589
        void validatePageStep_(double) const;

    // RVA: 0xA21 | Ordinal: 2594
        void validateRange_(double, double) const;

    // RVA: 0xA2A | Ordinal: 2603
        void validateStep_(double) const;

    // RVA: 0xA30 | Ordinal: 2609
        void validateValue_(double) const;
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SLIDER_HPP
