#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuTitle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuTitle
{
public:

    // RVA: 0x21F | Ordinal: 544
        void FXMenuTitle(void);

    // RVA: 0x220 | Ordinal: 545
        void FXMenuTitle(class FX::FXComposite *, class FX::FXString const &, class FX::FXIcon *, class FX::FXPopup *, unsigned int);

    // RVA: 0xA90 | Ordinal: 2705
        void canFocus(void) const;

    // RVA: 0xB60 | Ordinal: 2913
        void contains(int, int) const;

    // RVA: 0xBD4 | Ordinal: 3029
        void create(void);

    // RVA: 0xCB5 | Ordinal: 3254
        void detach(void);

    // RVA: 0x1136 | Ordinal: 4407
        void getDefaultHeight(void);

    // RVA: 0x118C | Ordinal: 4493
        void getDefaultWidth(void);

    // RVA: 0x136E | Ordinal: 4975
        void getMenu(void) const;

    // RVA: 0x141F | Ordinal: 5152
        void getMetaClass(void) const;

    // RVA: 0x179F | Ordinal: 6048
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A23 | Ordinal: 6692
        void killFocus(void);

    // RVA: 0x1B12 | Ordinal: 6931
        void load(class FX::FXStream &);

    // RVA: 0x1C5C | Ordinal: 7261
        void manufacture(void);

    // RVA: 0x2116 | Ordinal: 8471
        void onCmdPost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2230 | Ordinal: 8753
        void onCmdUnpost(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2299 | Ordinal: 8858
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22AC | Ordinal: 8877
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C1 | Ordinal: 8898
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E5 | Ordinal: 8934
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x230B | Ordinal: 8972
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2324 | Ordinal: 8997
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2333 | Ordinal: 9012
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2350 | Ordinal: 9041
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2378 | Ordinal: 9081
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x239D | Ordinal: 9118
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23BD | Ordinal: 9150
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23E5 | Ordinal: 9190
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x247F | Ordinal: 9344
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2843 | Ordinal: 10308
        void save(class FX::FXStream &) const;

    // RVA: 0x2AA0 | Ordinal: 10913
        void setFocus(void);

    // RVA: 0x2BFC | Ordinal: 11261
        void setMenu(class FX::FXPopup *);

    // RVA: 0x46C | Ordinal: 1133
        void _FXMenuTitle(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENUTITLE_HPP
