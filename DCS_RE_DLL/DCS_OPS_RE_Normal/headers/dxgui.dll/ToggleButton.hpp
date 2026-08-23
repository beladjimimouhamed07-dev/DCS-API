#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ToggleButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ToggleButton
{
public:

    // RVA: 0xC6 | Ordinal: 199
        void ToggleButton(int, bool);

    // RVA: 0x18B | Ordinal: 396
        void changeState_(void);

    // RVA: 0x1D8 | Ordinal: 473
        void clone(void) const;

    // RVA: 0x20C | Ordinal: 525
        void copyParams(class gui::ToggleButton *) const;

    // RVA: 0x378 | Ordinal: 889
        void getFocusable(void) const;

    // RVA: 0x3E2 | Ordinal: 995
        void getInnerState(void) const;

    // RVA: 0x4F2 | Ordinal: 1267
        void getSkin(void) const;

    // RVA: 0x509 | Ordinal: 1290
        void getState(void) const;

    // RVA: 0x5C3 | Ordinal: 1476
        void getWidgetType(void) const;

    // RVA: 0x679 | Ordinal: 1658
        void onChange_(void);

    // RVA: 0x77D | Ordinal: 1918
        void onStateChanged_(int);

    // RVA: 0x931 | Ordinal: 2354
        void setState(int);

    // RVA: 0xA26 | Ordinal: 2599
        void validateState_(int) const;
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_TOGGLEBUTTON_HPP
