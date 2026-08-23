#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: SpinBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class SpinBox
{
public:

    // RVA: 0xBE | Ordinal: 191
        void SpinBox(void);

    // RVA: 0x190 | Ordinal: 401
        void changeValue_(double);

    // RVA: 0x1D3 | Ordinal: 468
        void clone(void) const;

    // RVA: 0x208 | Ordinal: 521
        void copyParams(class gui::SpinBox *) const;

    // RVA: 0x2F1 | Ordinal: 754
        void findWidgetAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x302 | Ordinal: 771
        void getAcceptDecimalPoint(void) const;

    // RVA: 0x31E | Ordinal: 799
        void getButtonsVisible(void) const;

    // RVA: 0x328 | Ordinal: 809
        void getCheckRange(void) const;

    // RVA: 0x34A | Ordinal: 843
        void getDecreaseButton(void) const;

    // RVA: 0x35C | Ordinal: 861
        void getEditBox(void) const;

    // RVA: 0x383 | Ordinal: 900
        void getFocusedWidget(void) const;

    // RVA: 0x389 | Ordinal: 906
        void getFormatString(void) const;

    // RVA: 0x3AD | Ordinal: 942
        void getHasMouseInputAtScreenPoint(class osg::Vec2i const &) const;

    // RVA: 0x3D5 | Ordinal: 982
        void getIncreaseButton(void) const;

    // RVA: 0x46F | Ordinal: 1136
        void getPageStep(void) const;

    // RVA: 0x48A | Ordinal: 1163
        void getRange(double &, double &) const;

    // RVA: 0x4EE | Ordinal: 1263
        void getSkin(void) const;

    // RVA: 0x50E | Ordinal: 1295
        void getStep(void) const;

    // RVA: 0x551 | Ordinal: 1362
        void getValue(void) const;

    // RVA: 0x5BF | Ordinal: 1472
        void getWidgetType(void) const;

    // RVA: 0x677 | Ordinal: 1656
        void onChange_(void);

    // RVA: 0x683 | Ordinal: 1668
        void onCheckRangeChanged_(bool);

    // RVA: 0x689 | Ordinal: 1674
        void onDecreaseButtonChange_(void);

    // RVA: 0x68B | Ordinal: 1676
        void onEditBoxChange_(void);

    // RVA: 0x694 | Ordinal: 1685
        void onFocusChanged_(bool);

    // RVA: 0x6A2 | Ordinal: 1699
        void onIncreaseButtonChange_(void);

    // RVA: 0x6C7 | Ordinal: 1736
        void onKeyDown(enum gui::KeyboardButton, int);

    // RVA: 0x74F | Ordinal: 1872
        void onPageStepChanged_(double);

    // RVA: 0x761 | Ordinal: 1890
        void onRangeChanged_(double, double);

    // RVA: 0x777 | Ordinal: 1912
        void onSizeChanged_(class osg::Vec2i const &);

    // RVA: 0x782 | Ordinal: 1923
        void onStepChanged_(double);

    // RVA: 0x795 | Ordinal: 1942
        void onValueChanged_(double);

    // RVA: 0x85A | Ordinal: 2139
        void setAcceptDecimalPoint(bool);

    // RVA: 0x86F | Ordinal: 2160
        void setButtonsVisible(bool);

    // RVA: 0x874 | Ordinal: 2165
        void setCheckRange(bool);

    // RVA: 0x8AC | Ordinal: 2221
        void setFormatString(class ed::basic_string<wchar_t> const &);

    // RVA: 0x8FE | Ordinal: 2303
        void setPageStep(double);

    // RVA: 0x914 | Ordinal: 2325
        void setRange(double, double);

    // RVA: 0x936 | Ordinal: 2359
        void setStep(double);

    // RVA: 0x93F | Ordinal: 2368
        void setTabFocused(void);

    // RVA: 0x965 | Ordinal: 2406
        void setValue(double);

    // RVA: 0x9D3 | Ordinal: 2516
        void updateEditBox_(void);

    // RVA: 0xA22 | Ordinal: 2595
        void validateRange_(double, double) const;

    // RVA: 0xA31 | Ordinal: 2610
        void validateValue_(double) const;

    // RVA: 0x117 | Ordinal: 280
        void _SpinBox(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SPINBOX_HPP
