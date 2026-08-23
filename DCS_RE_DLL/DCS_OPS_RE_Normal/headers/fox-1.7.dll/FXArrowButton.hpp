#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXArrowButton
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXArrowButton
{
public:

    // RVA: 0x2D | Ordinal: 46
        void FXArrowButton(void);

    // RVA: 0x2E | Ordinal: 47
        void FXArrowButton(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA7D | Ordinal: 2686
        void canFocus(void) const;

    // RVA: 0xCDA | Ordinal: 3291
        void disable(void);

    // RVA: 0xDFE | Ordinal: 3583
        void enable(void);

    // RVA: 0x101A | Ordinal: 4123
        void getArrowColor(void) const;

    // RVA: 0x1020 | Ordinal: 4129
        void getArrowSize(void) const;

    // RVA: 0x1021 | Ordinal: 4130
        void getArrowStyle(void) const;

    // RVA: 0x110D | Ordinal: 4366
        void getDefaultHeight(void);

    // RVA: 0x1163 | Ordinal: 4452
        void getDefaultWidth(void);

    // RVA: 0x126B | Ordinal: 4716
        void getHelpText(void) const;

    // RVA: 0x131F | Ordinal: 4896
        void getJustify(void) const;

    // RVA: 0x1386 | Ordinal: 4999
        void getMetaClass(void) const;

    // RVA: 0x15D5 | Ordinal: 5590
        void getState(void) const;

    // RVA: 0x162A | Ordinal: 5675
        void getTipText(void) const;

    // RVA: 0x1704 | Ordinal: 5893
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AAE | Ordinal: 6831
        void load(class FX::FXStream &);

    // RVA: 0x1BC8 | Ordinal: 7113
        void manufacture(void);

    // RVA: 0x1F3C | Ordinal: 7997
        void onAuto(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2038 | Ordinal: 8249
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A4 | Ordinal: 8357
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2152 | Ordinal: 8531
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C0 | Ordinal: 8641
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x228D | Ordinal: 8846
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x231B | Ordinal: 8988
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x232A | Ordinal: 9003
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x233D | Ordinal: 9022
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2366 | Ordinal: 9063
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2391 | Ordinal: 9106
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23AA | Ordinal: 9131
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D2 | Ordinal: 9171
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2455 | Ordinal: 9302
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A5 | Ordinal: 9382
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C4 | Ordinal: 9413
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24E6 | Ordinal: 9447
        void onRepeat(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2539 | Ordinal: 9530
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2623 | Ordinal: 9764
        void onUpdate(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27E0 | Ordinal: 10209
        void save(class FX::FXStream &) const;

    // RVA: 0x2980 | Ordinal: 10625
        void setArrowColor(unsigned int);

    // RVA: 0x2986 | Ordinal: 10631
        void setArrowSize(int);

    // RVA: 0x2987 | Ordinal: 10632
        void setArrowStyle(unsigned int);

    // RVA: 0x2B0D | Ordinal: 11022
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2BB0 | Ordinal: 11185
        void setJustify(unsigned int);

    // RVA: 0x2D1A | Ordinal: 11547
        void setState(bool);

    // RVA: 0x2D70 | Ordinal: 11633
        void setTipText(class FX::FXString const &);

    // RVA: 0x3A8 | Ordinal: 937
        void _FXArrowButton(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXARROWBUTTON_HPP
