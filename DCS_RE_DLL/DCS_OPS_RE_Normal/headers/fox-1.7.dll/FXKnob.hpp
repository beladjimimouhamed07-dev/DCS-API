#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXKnob
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXKnob
{
public:

    // RVA: 0x1AA | Ordinal: 427
        void FXKnob(void);

    // RVA: 0x1AB | Ordinal: 428
        void FXKnob(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA75 | Ordinal: 2678
        void calcValue(int, int);

    // RVA: 0xA8A | Ordinal: 2699
        void canFocus(void) const;

    // RVA: 0xCDF | Ordinal: 3296
        void disable(void);

    // RVA: 0xE03 | Ordinal: 3588
        void enable(void);

    // RVA: 0x1124 | Ordinal: 4389
        void getDefaultHeight(void);

    // RVA: 0x117A | Ordinal: 4475
        void getDefaultWidth(void);

    // RVA: 0x127A | Ordinal: 4731
        void getHelpText(void) const;

    // RVA: 0x12C1 | Ordinal: 4802
        void getIncrement(void) const;

    // RVA: 0x132C | Ordinal: 4909
        void getKnobStyle(void) const;

    // RVA: 0x1337 | Ordinal: 4920
        void getLimits(int &, int &);

    // RVA: 0x133C | Ordinal: 4925
        void getLineColor(void) const;

    // RVA: 0x1407 | Ordinal: 5128
        void getMetaClass(void) const;

    // RVA: 0x1523 | Ordinal: 5412
        void getRange(int &, int &) const;

    // RVA: 0x1620 | Ordinal: 5665
        void getTickDelta(void) const;

    // RVA: 0x163A | Ordinal: 5691
        void getTipText(void) const;

    // RVA: 0x1688 | Ordinal: 5769
        void getValue(void) const;

    // RVA: 0x1787 | Ordinal: 6024
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A4D | Ordinal: 6734
        void layout(void);

    // RVA: 0x1AF9 | Ordinal: 6906
        void load(class FX::FXStream &);

    // RVA: 0x1C44 | Ordinal: 7237
        void manufacture(void);

    // RVA: 0x1F46 | Ordinal: 8007
        void onAutoSlide(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2041 | Ordinal: 8258
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2051 | Ordinal: 8274
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2064 | Ordinal: 8293
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x207B | Ordinal: 8316
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2086 | Ordinal: 8327
        void onCmdGetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x208E | Ordinal: 8335
        void onCmdGetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20AD | Ordinal: 8366
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x215B | Ordinal: 8540
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x216B | Ordinal: 8556
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x217E | Ordinal: 8575
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2195 | Ordinal: 8598
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A2 | Ordinal: 8611
        void onCmdSetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21AA | Ordinal: 8619
        void onCmdSetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C9 | Ordinal: 8650
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E3 | Ordinal: 8676
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22BD | Ordinal: 8894
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E1 | Ordinal: 8930
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2349 | Ordinal: 9034
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2371 | Ordinal: 9074
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23BA | Ordinal: 9147
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23E2 | Ordinal: 9187
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x240C | Ordinal: 9229
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2416 | Ordinal: 9239
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x242F | Ordinal: 9264
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2449 | Ordinal: 9290
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x246E | Ordinal: 9327
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B2 | Ordinal: 9395
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D2 | Ordinal: 9427
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2542 | Ordinal: 9539
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x282A | Ordinal: 10283
        void save(class FX::FXStream &) const;

    // RVA: 0x2B1C | Ordinal: 11037
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B63 | Ordinal: 11108
        void setIncrement(int);

    // RVA: 0x2BBC | Ordinal: 11197
        void setKnobStyle(unsigned int);

    // RVA: 0x2BC0 | Ordinal: 11201
        void setLimits(int, int, bool);

    // RVA: 0x2BC6 | Ordinal: 11207
        void setLineColor(unsigned int);

    // RVA: 0x2C80 | Ordinal: 11393
        void setRange(int, int, bool);

    // RVA: 0x2D64 | Ordinal: 11621
        void setTickDelta(int);

    // RVA: 0x2D7E | Ordinal: 11647
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DC0 | Ordinal: 11713
        void setValue(int, bool);

    // RVA: 0x448 | Ordinal: 1097
        void _FXKnob(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXKNOB_HPP
