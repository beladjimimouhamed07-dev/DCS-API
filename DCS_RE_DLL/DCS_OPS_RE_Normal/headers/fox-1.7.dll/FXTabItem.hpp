#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXTabItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXTabItem
{
public:

    // RVA: 0x307 | Ordinal: 776
        void FXTabItem(void);

    // RVA: 0x308 | Ordinal: 777
        void FXTabItem(class FX::FXTabBar *, class FX::FXString const &, class FX::FXIcon *, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA97 | Ordinal: 2712
        void canFocus(void) const;

    // RVA: 0x1456 | Ordinal: 5207
        void getMetaClass(void) const;

    // RVA: 0x15E6 | Ordinal: 5607
        void getTabOrientation(void) const;

    // RVA: 0x17D6 | Ordinal: 6103
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1C93 | Ordinal: 7316
        void manufacture(void);

    // RVA: 0x22C4 | Ordinal: 8901
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E8 | Ordinal: 8937
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2328 | Ordinal: 9001
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2337 | Ordinal: 9016
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x235D | Ordinal: 9054
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2385 | Ordinal: 9094
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C8 | Ordinal: 9161
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F0 | Ordinal: 9201
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2493 | Ordinal: 9364
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x254B | Ordinal: 9548
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2D2E | Ordinal: 11567
        void setTabOrientation(unsigned int);

    // RVA: 0x4C7 | Ordinal: 1224
        void _FXTabItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTABITEM_HPP
