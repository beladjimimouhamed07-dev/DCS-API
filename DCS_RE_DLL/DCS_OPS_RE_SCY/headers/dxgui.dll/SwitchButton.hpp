#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: SwitchButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class SwitchButton
{
public:

    // RVA: 0xC2 | Ordinal: 195
        void SwitchButton(bool);

    // RVA: 0x18A | Ordinal: 395
        void changeState_(void);

    // RVA: 0x1D5 | Ordinal: 470
        void clone(void) const;

    // RVA: 0x20A | Ordinal: 523
        void copyParams(class gui::SwitchButton *) const;

    // RVA: 0x4F0 | Ordinal: 1265
        void getSkin(void) const;

    // RVA: 0x5C1 | Ordinal: 1474
        void getWidgetType(void) const;

    // RVA: 0x678 | Ordinal: 1657
        void onChange_(void);

    // RVA: 0x750 | Ordinal: 1873
        void onParentChanged_(class gui::WidgetHandler *);

    // RVA: 0x77B | Ordinal: 1916
        void onStateChanged_(int);

    // RVA: 0x831 | Ordinal: 2098
        void resetParent(void);

    // RVA: 0x118 | Ordinal: 281
        void _SwitchButton(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_SWITCHBUTTON_HPP
