#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSlider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSlider
{
public:

    // RVA: 0x2CF | Ordinal: 720
        void FXSlider(void);

    // RVA: 0x2D0 | Ordinal: 721
        void FXSlider(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA96 | Ordinal: 2711
        void canFocus(void) const;

    // RVA: 0xCE7 | Ordinal: 3304
        void disable(void);

    // RVA: 0xD66 | Ordinal: 3431
        void drawHorzTicks(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDB8 | Ordinal: 3513
        void drawSliderHead(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDD6 | Ordinal: 3543
        void drawVertTicks(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xE0B | Ordinal: 3596
        void enable(void);

    // RVA: 0x1147 | Ordinal: 4424
        void getDefaultHeight(void);

    // RVA: 0x119D | Ordinal: 4510
        void getDefaultWidth(void);

    // RVA: 0x1250 | Ordinal: 4689
        void getHeadSize(void) const;

    // RVA: 0x1285 | Ordinal: 4742
        void getHelpText(void) const;

    // RVA: 0x12C5 | Ordinal: 4806
        void getIncrement(void) const;

    // RVA: 0x1448 | Ordinal: 5193
        void getMetaClass(void) const;

    // RVA: 0x1528 | Ordinal: 5417
        void getRange(int &, int &) const;

    // RVA: 0x15BD | Ordinal: 5566
        void getSliderStyle(void) const;

    // RVA: 0x15C0 | Ordinal: 5569
        void getSlotColor(void) const;

    // RVA: 0x15C3 | Ordinal: 5572
        void getSlotSize(void) const;

    // RVA: 0x1622 | Ordinal: 5667
        void getTickDelta(void) const;

    // RVA: 0x1645 | Ordinal: 5702
        void getTipText(void) const;

    // RVA: 0x168D | Ordinal: 5774
        void getValue(void) const;

    // RVA: 0x17C8 | Ordinal: 6089
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A61 | Ordinal: 6754
        void layout(void);

    // RVA: 0x1B25 | Ordinal: 6950
        void load(class FX::FXStream &);

    // RVA: 0x1C85 | Ordinal: 7302
        void manufacture(void);

    // RVA: 0x1F49 | Ordinal: 8010
        void onAutoSlide(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2048 | Ordinal: 8265
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2058 | Ordinal: 8281
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2072 | Ordinal: 8307
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2081 | Ordinal: 8322
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x208A | Ordinal: 8331
        void onCmdGetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2091 | Ordinal: 8338
        void onCmdGetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B4 | Ordinal: 8373
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2162 | Ordinal: 8547
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2172 | Ordinal: 8563
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x218C | Ordinal: 8589
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x219B | Ordinal: 8604
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A6 | Ordinal: 8615
        void onCmdSetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21AD | Ordinal: 8622
        void onCmdSetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D0 | Ordinal: 8657
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F3 | Ordinal: 8692
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x235B | Ordinal: 9052
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2383 | Ordinal: 9092
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23C6 | Ordinal: 9159
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23EE | Ordinal: 9199
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2411 | Ordinal: 9234
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x241B | Ordinal: 9244
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x243C | Ordinal: 9277
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x244F | Ordinal: 9296
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x248D | Ordinal: 9358
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24BB | Ordinal: 9404
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24DB | Ordinal: 9436
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x254A | Ordinal: 9547
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2856 | Ordinal: 10327
        void save(class FX::FXStream &) const;

    // RVA: 0x2AF9 | Ordinal: 11002
        void setHeadSize(int);

    // RVA: 0x2B27 | Ordinal: 11048
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B67 | Ordinal: 11112
        void setIncrement(int);

    // RVA: 0x2C85 | Ordinal: 11398
        void setRange(int, int, bool);

    // RVA: 0x2D00 | Ordinal: 11521
        void setSliderStyle(unsigned int);

    // RVA: 0x2D03 | Ordinal: 11524
        void setSlotColor(unsigned int);

    // RVA: 0x2D06 | Ordinal: 11527
        void setSlotSize(int);

    // RVA: 0x2D66 | Ordinal: 11623
        void setTickDelta(int);

    // RVA: 0x2D88 | Ordinal: 11657
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DC5 | Ordinal: 11718
        void setValue(int, bool);

    // RVA: 0x4B2 | Ordinal: 1203
        void _FXSlider(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSLIDER_HPP
