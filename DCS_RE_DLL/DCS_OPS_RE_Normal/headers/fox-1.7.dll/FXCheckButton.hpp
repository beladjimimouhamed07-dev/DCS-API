#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCheckButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCheckButton
{
public:

    // RVA: 0x75 | Ordinal: 118
        void FXCheckButton(void);

    // RVA: 0x76 | Ordinal: 119
        void FXCheckButton(class FX::FXComposite *, class FX::FXString const &, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA82 | Ordinal: 2691
        void canFocus(void) const;

    // RVA: 0x106A | Ordinal: 4203
        void getBoxColor(void) const;

    // RVA: 0x1082 | Ordinal: 4227
        void getCheck(void) const;

    // RVA: 0x1086 | Ordinal: 4231
        void getCheckButtonStyle(void) const;

    // RVA: 0x1087 | Ordinal: 4232
        void getCheckColor(void) const;

    // RVA: 0x1110 | Ordinal: 4369
        void getDefaultHeight(void);

    // RVA: 0x1166 | Ordinal: 4455
        void getDefaultWidth(void);

    // RVA: 0x13A9 | Ordinal: 5034
        void getMetaClass(void) const;

    // RVA: 0x1727 | Ordinal: 5928
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AB2 | Ordinal: 6835
        void load(class FX::FXStream &);

    // RVA: 0x1BEB | Ordinal: 7148
        void manufacture(void);

    // RVA: 0x1F62 | Ordinal: 8035
        void onCheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x205D | Ordinal: 8286
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2177 | Ordinal: 8568
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D7 | Ordinal: 8664
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x228F | Ordinal: 8848
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B8 | Ordinal: 8889
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22DC | Ordinal: 8925
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x231D | Ordinal: 8990
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x232C | Ordinal: 9005
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2340 | Ordinal: 9025
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2368 | Ordinal: 9065
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2393 | Ordinal: 9108
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23AD | Ordinal: 9134
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D5 | Ordinal: 9174
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x245B | Ordinal: 9308
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2534 | Ordinal: 9525
        void onUncheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x253B | Ordinal: 9532
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2552 | Ordinal: 9555
        void onUnknown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2625 | Ordinal: 9766
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27E4 | Ordinal: 10213
        void save(class FX::FXStream &) const;

    // RVA: 0x29CA | Ordinal: 10699
        void setBoxColor(unsigned int);

    // RVA: 0x29DF | Ordinal: 10720
        void setCheck(unsigned char, bool);

    // RVA: 0x29E3 | Ordinal: 10724
        void setCheckButtonStyle(unsigned int);

    // RVA: 0x29E4 | Ordinal: 10725
        void setCheckColor(unsigned int);

    // RVA: 0x3CD | Ordinal: 974
        void _FXCheckButton(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCHECKBUTTON_HPP
