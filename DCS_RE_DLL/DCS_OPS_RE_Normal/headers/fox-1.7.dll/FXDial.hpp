#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDial
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDial
{
public:

    // RVA: 0xC9 | Ordinal: 202
        void FXDial(void);

    // RVA: 0xCA | Ordinal: 203
        void FXDial(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA85 | Ordinal: 2694
        void canFocus(void) const;

    // RVA: 0x1118 | Ordinal: 4377
        void getDefaultHeight(void);

    // RVA: 0x116E | Ordinal: 4463
        void getDefaultWidth(void);

    // RVA: 0x11BD | Ordinal: 4542
        void getDialStyle(void) const;

    // RVA: 0x1272 | Ordinal: 4723
        void getHelpText(void) const;

    // RVA: 0x13C0 | Ordinal: 5057
        void getMetaClass(void) const;

    // RVA: 0x1496 | Ordinal: 5271
        void getNotchColor(void) const;

    // RVA: 0x1497 | Ordinal: 5272
        void getNotchOffset(void) const;

    // RVA: 0x1498 | Ordinal: 5273
        void getNotchSpacing(void) const;

    // RVA: 0x1521 | Ordinal: 5410
        void getRange(int &, int &) const;

    // RVA: 0x1537 | Ordinal: 5432
        void getRevolutionIncrement(void) const;

    // RVA: 0x1631 | Ordinal: 5682
        void getTipText(void) const;

    // RVA: 0x1685 | Ordinal: 5766
        void getValue(void) const;

    // RVA: 0x173F | Ordinal: 5952
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1ABE | Ordinal: 6847
        void load(class FX::FXStream &);

    // RVA: 0x1C01 | Ordinal: 7170
        void manufacture(void);

    // RVA: 0x203D | Ordinal: 8254
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x204F | Ordinal: 8272
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2061 | Ordinal: 8290
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2079 | Ordinal: 8314
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2084 | Ordinal: 8325
        void onCmdGetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x208C | Ordinal: 8333
        void onCmdGetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A9 | Ordinal: 8362
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2157 | Ordinal: 8536
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2169 | Ordinal: 8554
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x217B | Ordinal: 8572
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2193 | Ordinal: 8596
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A0 | Ordinal: 8609
        void onCmdSetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A8 | Ordinal: 8617
        void onCmdSetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C5 | Ordinal: 8646
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21DA | Ordinal: 8667
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2343 | Ordinal: 9028
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x236B | Ordinal: 9068
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23B2 | Ordinal: 9139
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23DA | Ordinal: 9179
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2426 | Ordinal: 9255
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2447 | Ordinal: 9288
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2461 | Ordinal: 9314
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24AA | Ordinal: 9387
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C9 | Ordinal: 9418
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x253D | Ordinal: 9534
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27EF | Ordinal: 10224
        void save(class FX::FXStream &) const;

    // RVA: 0x2A4F | Ordinal: 10832
        void setDialStyle(unsigned int);

    // RVA: 0x2B14 | Ordinal: 11029
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2C12 | Ordinal: 11283
        void setNotchColor(unsigned int);

    // RVA: 0x2C13 | Ordinal: 11284
        void setNotchOffset(int);

    // RVA: 0x2C14 | Ordinal: 11285
        void setNotchSpacing(int);

    // RVA: 0x2C7E | Ordinal: 11391
        void setRange(int, int, bool);

    // RVA: 0x2C92 | Ordinal: 11411
        void setRevolutionIncrement(int);

    // RVA: 0x2D77 | Ordinal: 11640
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DBE | Ordinal: 11711
        void setValue(int, bool);

    // RVA: 0x3EC | Ordinal: 1005
        void _FXDial(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIAL_HPP
