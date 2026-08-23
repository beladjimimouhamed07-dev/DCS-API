#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDockHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDockHandler
{
public:

    // RVA: 0xE2 | Ordinal: 227
        void FXDockHandler(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xE3 | Ordinal: 228
        void FXDockHandler(void);

    // RVA: 0xA86 | Ordinal: 2695
        void canFocus(void) const;

    // RVA: 0x1273 | Ordinal: 4724
        void getHelpText(void) const;

    // RVA: 0x13C8 | Ordinal: 5065
        void getMetaClass(void) const;

    // RVA: 0x1632 | Ordinal: 5683
        void getTipText(void) const;

    // RVA: 0x1747 | Ordinal: 5960
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AC4 | Ordinal: 6853
        void load(class FX::FXStream &);

    // RVA: 0x203E | Ordinal: 8255
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20AA | Ordinal: 8363
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2158 | Ordinal: 8537
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C6 | Ordinal: 8647
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2345 | Ordinal: 9030
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x236D | Ordinal: 9070
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23B3 | Ordinal: 9140
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23DB | Ordinal: 9180
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2427 | Ordinal: 9256
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24AB | Ordinal: 9388
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24CA | Ordinal: 9419
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27F5 | Ordinal: 10230
        void save(class FX::FXStream &) const;

    // RVA: 0x2B15 | Ordinal: 11030
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2D78 | Ordinal: 11641
        void setTipText(class FX::FXString const &);

    // RVA: 0x3F7 | Ordinal: 1016
        void _FXDockHandler(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDOCKHANDLER_HPP
