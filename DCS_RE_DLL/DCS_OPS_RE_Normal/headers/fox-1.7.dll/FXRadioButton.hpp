#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRadioButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRadioButton
{
public:

    // RVA: 0x277 | Ordinal: 632
        void FXRadioButton(void);

    // RVA: 0x278 | Ordinal: 633
        void FXRadioButton(class FX::FXComposite *, class FX::FXString const &, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA93 | Ordinal: 2708
        void canFocus(void) const;

    // RVA: 0x1085 | Ordinal: 4230
        void getCheck(void) const;

    // RVA: 0x113C | Ordinal: 4413
        void getDefaultHeight(void);

    // RVA: 0x1192 | Ordinal: 4499
        void getDefaultWidth(void);

    // RVA: 0x11C7 | Ordinal: 4552
        void getDiskColor(void) const;

    // RVA: 0x1435 | Ordinal: 5174
        void getMetaClass(void) const;

    // RVA: 0x151B | Ordinal: 5404
        void getRadioButtonStyle(void) const;

    // RVA: 0x151D | Ordinal: 5406
        void getRadioColor(void) const;

    // RVA: 0x17B5 | Ordinal: 6070
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B19 | Ordinal: 6938
        void load(class FX::FXStream &);

    // RVA: 0x1C72 | Ordinal: 7283
        void manufacture(void);

    // RVA: 0x1F65 | Ordinal: 8038
        void onCheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x206C | Ordinal: 8301
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2186 | Ordinal: 8583
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21ED | Ordinal: 8686
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x229D | Ordinal: 8862
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22C3 | Ordinal: 8900
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E7 | Ordinal: 8936
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2327 | Ordinal: 9000
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2336 | Ordinal: 9015
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2355 | Ordinal: 9046
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x237D | Ordinal: 9086
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A1 | Ordinal: 9122
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C1 | Ordinal: 9154
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23E9 | Ordinal: 9194
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2485 | Ordinal: 9350
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2537 | Ordinal: 9528
        void onUncheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2546 | Ordinal: 9543
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2555 | Ordinal: 9558
        void onUnknown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2628 | Ordinal: 9769
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x284A | Ordinal: 10315
        void save(class FX::FXStream &) const;

    // RVA: 0x29E2 | Ordinal: 10723
        void setCheck(unsigned char, bool);

    // RVA: 0x2A59 | Ordinal: 10842
        void setDiskColor(unsigned int);

    // RVA: 0x2C78 | Ordinal: 11385
        void setRadioButtonStyle(unsigned int);

    // RVA: 0x2C7A | Ordinal: 11387
        void setRadioColor(unsigned int);

    // RVA: 0x48D | Ordinal: 1166
        void _FXRadioButton(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRADIOBUTTON_HPP
