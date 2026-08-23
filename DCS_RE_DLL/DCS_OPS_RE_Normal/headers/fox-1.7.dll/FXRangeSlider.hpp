#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRangeSlider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRangeSlider
{
public:

    // RVA: 0x27B | Ordinal: 636
        void FXRangeSlider(void);

    // RVA: 0x27C | Ordinal: 637
        void FXRangeSlider(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA94 | Ordinal: 2709
        void canFocus(void) const;

    // RVA: 0xCE3 | Ordinal: 3300
        void disable(void);

    // RVA: 0xDB6 | Ordinal: 3511
        void drawSliderHead(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xE07 | Ordinal: 3592
        void enable(void);

    // RVA: 0x113D | Ordinal: 4414
        void getDefaultHeight(void);

    // RVA: 0x1193 | Ordinal: 4500
        void getDefaultWidth(void);

    // RVA: 0x124E | Ordinal: 4687
        void getHeadSize(void) const;

    // RVA: 0x127F | Ordinal: 4736
        void getHelpText(void) const;

    // RVA: 0x12C2 | Ordinal: 4803
        void getIncrement(void) const;

    // RVA: 0x1436 | Ordinal: 5175
        void getMetaClass(void) const;

    // RVA: 0x1524 | Ordinal: 5413
        void getRange(int &, int &) const;

    // RVA: 0x15BB | Ordinal: 5564
        void getSliderStyle(void) const;

    // RVA: 0x15BE | Ordinal: 5567
        void getSlotColor(void) const;

    // RVA: 0x15C1 | Ordinal: 5570
        void getSlotSize(void) const;

    // RVA: 0x163F | Ordinal: 5696
        void getTipText(void) const;

    // RVA: 0x1689 | Ordinal: 5770
        void getValue(int) const;

    // RVA: 0x17B6 | Ordinal: 6071
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A56 | Ordinal: 6743
        void layout(void);

    // RVA: 0x1B1A | Ordinal: 6939
        void load(class FX::FXStream &);

    // RVA: 0x1C73 | Ordinal: 7284
        void manufacture(void);

    // RVA: 0x1F47 | Ordinal: 8008
        void onAutoSlide(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2044 | Ordinal: 8261
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2054 | Ordinal: 8277
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2087 | Ordinal: 8328
        void onCmdGetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B0 | Ordinal: 8369
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x215E | Ordinal: 8543
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x216E | Ordinal: 8559
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A3 | Ordinal: 8612
        void onCmdSetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21CC | Ordinal: 8653
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2356 | Ordinal: 9047
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x237E | Ordinal: 9087
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C2 | Ordinal: 9155
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23EA | Ordinal: 9195
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x240E | Ordinal: 9231
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2418 | Ordinal: 9241
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2437 | Ordinal: 9272
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x244C | Ordinal: 9293
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2486 | Ordinal: 9351
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24B7 | Ordinal: 9400
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24D7 | Ordinal: 9432
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2547 | Ordinal: 9544
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x284B | Ordinal: 10316
        void save(class FX::FXStream &) const;

    // RVA: 0x2AF7 | Ordinal: 11000
        void setHeadSize(int);

    // RVA: 0x2B21 | Ordinal: 11042
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B64 | Ordinal: 11109
        void setIncrement(int);

    // RVA: 0x2C81 | Ordinal: 11394
        void setRange(int, int, bool);

    // RVA: 0x2CFE | Ordinal: 11519
        void setSliderStyle(unsigned int);

    // RVA: 0x2D01 | Ordinal: 11522
        void setSlotColor(unsigned int);

    // RVA: 0x2D04 | Ordinal: 11525
        void setSlotSize(int);

    // RVA: 0x2D82 | Ordinal: 11651
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DC1 | Ordinal: 11714
        void setValue(int, int, bool);

    // RVA: 0x48F | Ordinal: 1168
        void _FXRangeSlider(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRANGESLIDER_HPP
