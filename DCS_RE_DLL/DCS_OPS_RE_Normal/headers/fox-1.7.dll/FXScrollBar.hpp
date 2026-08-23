#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXScrollBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXScrollBar
{
public:

    // RVA: 0x2B5 | Ordinal: 694
        void FXScrollBar(void);

    // RVA: 0x2B6 | Ordinal: 695
        void FXScrollBar(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0xD38 | Ordinal: 3385
        void drawButton(class FX::FXDCWindow &, int, int, int, int, bool);

    // RVA: 0xD4D | Ordinal: 3406
        void drawDownArrow(class FX::FXDCWindow &, int, int, int, int, bool);

    // RVA: 0xD7D | Ordinal: 3454
        void drawLeftArrow(class FX::FXDCWindow &, int, int, int, int, bool);

    // RVA: 0xDAC | Ordinal: 3501
        void drawRightArrow(class FX::FXDCWindow &, int, int, int, int, bool);

    // RVA: 0xDCA | Ordinal: 3531
        void drawThumb(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDCF | Ordinal: 3536
        void drawUpArrow(class FX::FXDCWindow &, int, int, int, int, bool);

    // RVA: 0x101B | Ordinal: 4124
        void getArrowColor(void) const;

    // RVA: 0x1044 | Ordinal: 4165
        void getBarSize(void) const;

    // RVA: 0x105E | Ordinal: 4191
        void getBorderColor(void) const;

    // RVA: 0x1144 | Ordinal: 4421
        void getDefaultHeight(void);

    // RVA: 0x119A | Ordinal: 4507
        void getDefaultWidth(void);

    // RVA: 0x1295 | Ordinal: 4758
        void getHiliteColor(void) const;

    // RVA: 0x1339 | Ordinal: 4922
        void getLine(void) const;

    // RVA: 0x143F | Ordinal: 5184
        void getMetaClass(void) const;

    // RVA: 0x14EC | Ordinal: 5357
        void getPage(void) const;

    // RVA: 0x150B | Ordinal: 5388
        void getPosition(void) const;

    // RVA: 0x1527 | Ordinal: 5416
        void getRange(void) const;

    // RVA: 0x1558 | Ordinal: 5465
        void getScrollBarStyle(void) const;

    // RVA: 0x15AA | Ordinal: 5547
        void getShadowColor(void) const;

    // RVA: 0x17BF | Ordinal: 6080
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A5D | Ordinal: 6750
        void layout(void);

    // RVA: 0x1B22 | Ordinal: 6947
        void load(class FX::FXStream &);

    // RVA: 0x1C7C | Ordinal: 7293
        void manufacture(void);

    // RVA: 0x1F41 | Ordinal: 8002
        void onAutoScroll(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2057 | Ordinal: 8280
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2070 | Ordinal: 8305
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2080 | Ordinal: 8321
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2171 | Ordinal: 8562
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x218A | Ordinal: 8587
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x219A | Ordinal: 8603
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F1 | Ordinal: 8690
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C5 | Ordinal: 9158
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23ED | Ordinal: 9198
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2410 | Ordinal: 9233
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x241A | Ordinal: 9243
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x243B | Ordinal: 9276
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x244E | Ordinal: 9295
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x248A | Ordinal: 9355
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F1 | Ordinal: 9458
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24FE | Ordinal: 9471
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x251B | Ordinal: 9500
        void onTimeWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2549 | Ordinal: 9546
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2853 | Ordinal: 10324
        void save(class FX::FXStream &) const;

    // RVA: 0x2981 | Ordinal: 10626
        void setArrowColor(unsigned int);

    // RVA: 0x29AC | Ordinal: 10669
        void setBarSize(int);

    // RVA: 0x29C4 | Ordinal: 10693
        void setBorderColor(unsigned int);

    // RVA: 0x2B38 | Ordinal: 11065
        void setHiliteColor(unsigned int);

    // RVA: 0x2BC1 | Ordinal: 11202
        void setLine(int);

    // RVA: 0x2C55 | Ordinal: 11350
        void setPage(int, bool);

    // RVA: 0x2C6B | Ordinal: 11372
        void setPosition(int, bool);

    // RVA: 0x2C84 | Ordinal: 11397
        void setRange(int, bool);

    // RVA: 0x2CAC | Ordinal: 11437
        void setScrollBarStyle(unsigned int);

    // RVA: 0x2CED | Ordinal: 11502
        void setShadowColor(unsigned int);

    // RVA: 0x4A6 | Ordinal: 1191
        void _FXScrollBar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSCROLLBAR_HPP
