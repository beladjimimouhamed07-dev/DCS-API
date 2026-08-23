#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXScrollWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXScrollWindow
{
public:

    // RVA: 0x2BB | Ordinal: 700
        void FXScrollWindow(void);

    // RVA: 0x2BC | Ordinal: 701
        void FXScrollWindow(class FX::FXComposite *, unsigned int, int, int, int, int);

    // RVA: 0xB7E | Ordinal: 2943
        void contentWindow(void) const;

    // RVA: 0x10B3 | Ordinal: 4276
        void getContentHeight(void);

    // RVA: 0x10C0 | Ordinal: 4289
        void getContentWidth(void);

    // RVA: 0x1442 | Ordinal: 5187
        void getMetaClass(void) const;

    // RVA: 0x17C2 | Ordinal: 6083
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A5F | Ordinal: 6752
        void layout(void);

    // RVA: 0x1C7F | Ordinal: 7296
        void manufacture(void);

    // RVA: 0x1EB5 | Ordinal: 7862
        void moveContents(int, int);

    // RVA: 0x2302 | Ordinal: 8963
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2359 | Ordinal: 9050
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2381 | Ordinal: 9090
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x4A9 | Ordinal: 1194
        void _FXScrollWindow(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSCROLLWINDOW_HPP
