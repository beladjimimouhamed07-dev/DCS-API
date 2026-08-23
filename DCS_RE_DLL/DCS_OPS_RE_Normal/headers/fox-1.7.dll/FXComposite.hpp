#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXComposite
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXComposite
{
public:

    // RVA: 0x9E | Ordinal: 159
        void FXComposite(class FX::FXApp *, class FX::FXVisual *);

    // RVA: 0x9F | Ordinal: 160
        void FXComposite(class FX::FXApp *, class FX::FXWindow *, unsigned int, int, int, int, int);

    // RVA: 0xA0 | Ordinal: 161
        void FXComposite(void);

    // RVA: 0xA1 | Ordinal: 162
        void FXComposite(class FX::FXComposite *, unsigned int, int, int, int, int);

    // RVA: 0xBAC | Ordinal: 2989
        void create(void);

    // RVA: 0xC69 | Ordinal: 3178
        void destroy(void);

    // RVA: 0xC94 | Ordinal: 3221
        void detach(void);

    // RVA: 0x1116 | Ordinal: 4375
        void getDefaultHeight(void);

    // RVA: 0x116C | Ordinal: 4461
        void getDefaultWidth(void);

    // RVA: 0x13B8 | Ordinal: 5049
        void getMetaClass(void) const;

    // RVA: 0x1736 | Ordinal: 5943
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x190D | Ordinal: 6414
        void isComposite(void) const;

    // RVA: 0x1A42 | Ordinal: 6723
        void layout(void);

    // RVA: 0x1BF9 | Ordinal: 7162
        void manufacture(void);

    // RVA: 0x1CC1 | Ordinal: 7362
        void maxChildHeight(void) const;

    // RVA: 0x1CC2 | Ordinal: 7363
        void maxChildWidth(void) const;

    // RVA: 0x2233 | Ordinal: 8756
        void onCmdUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22D4 | Ordinal: 8917
        void onFocusNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22EF | Ordinal: 8944
        void onFocusPrev(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2342 | Ordinal: 9027
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x236A | Ordinal: 9067
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x3DF | Ordinal: 992
        void _FXComposite(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOMPOSITE_HPP
