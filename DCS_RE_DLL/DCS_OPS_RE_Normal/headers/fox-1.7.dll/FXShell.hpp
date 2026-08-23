#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXShell
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXShell
{
public:

    // RVA: 0x2C5 | Ordinal: 710
        void FXShell(class FX::FXApp *, unsigned int, int, int, int, int);

    // RVA: 0x2C6 | Ordinal: 711
        void FXShell(class FX::FXWindow *, unsigned int, int, int, int, int);

    // RVA: 0x2C7 | Ordinal: 712
        void FXShell(void);

    // RVA: 0xBDB | Ordinal: 3036
        void create(void);

    // RVA: 0x1445 | Ordinal: 5190
        void getMetaClass(void) const;

    // RVA: 0x17C5 | Ordinal: 6086
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A28 | Ordinal: 6697
        void killFocus(void);

    // RVA: 0x1C82 | Ordinal: 7299
        void manufacture(void);

    // RVA: 0x2249 | Ordinal: 8778
        void onConfigure(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D6 | Ordinal: 8919
        void onFocusNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22F1 | Ordinal: 8946
        void onFocusPrev(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x235A | Ordinal: 9051
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2382 | Ordinal: 9091
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x238F | Ordinal: 9104
        void onLayout(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2718 | Ordinal: 10009
        void recalc(void);

    // RVA: 0x2AA4 | Ordinal: 10917
        void setFocus(void);

    // RVA: 0x4AF | Ordinal: 1200
        void _FXShell(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSHELL_HPP
