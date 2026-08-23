#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGradientBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGradientBar
{
public:

    // RVA: 0x167 | Ordinal: 360
        void FXGradientBar(void);

    // RVA: 0x168 | Ordinal: 361
        void FXGradientBar(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA65 | Ordinal: 2662
        void blendSegments(int, int, unsigned int, bool);

    // RVA: 0xA66 | Ordinal: 2663
        void blenddecreasing(double, double);

    // RVA: 0xA67 | Ordinal: 2664
        void blendincreasing(double, double);

    // RVA: 0xA68 | Ordinal: 2665
        void blendlinear(double, double);

    // RVA: 0xA69 | Ordinal: 2666
        void blendpower(double, double);

    // RVA: 0xA6A | Ordinal: 2667
        void blendsine(double, double);

    // RVA: 0xBBF | Ordinal: 3008
        void create(void);

    // RVA: 0xC63 | Ordinal: 3172
        void deselectSegments(bool);

    // RVA: 0xD36 | Ordinal: 3383
        void drawBottomArrows(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD43 | Ordinal: 3396
        void drawDnArrow(class FX::FXDCWindow &, int, int, unsigned int);

    // RVA: 0xD7F | Ordinal: 3456
        void drawLeftArrows(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xD8D | Ordinal: 3470
        void drawLtArrow(class FX::FXDCWindow &, int, int, unsigned int);

    // RVA: 0xDAE | Ordinal: 3503
        void drawRightArrows(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDB3 | Ordinal: 3508
        void drawRtArrow(class FX::FXDCWindow &, int, int, unsigned int);

    // RVA: 0xDCB | Ordinal: 3532
        void drawTopArrows(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDCD | Ordinal: 3534
        void drawUpArrow(class FX::FXDCWindow &, int, int, unsigned int);

    // RVA: 0x100F | Ordinal: 4112
        void getAnchorSegment(void) const;

    // RVA: 0x1042 | Ordinal: 4163
        void getBarSize(void) const;

    // RVA: 0x1047 | Ordinal: 4168
        void getBarStyle(void) const;

    // RVA: 0x10CA | Ordinal: 4299
        void getControlSize(void) const;

    // RVA: 0x10E6 | Ordinal: 4327
        void getCurrentSegment(void) const;

    // RVA: 0x111F | Ordinal: 4384
        void getDefaultHeight(void);

    // RVA: 0x1175 | Ordinal: 4470
        void getDefaultWidth(void);

    // RVA: 0x1238 | Ordinal: 4665
        void getGradients(struct FX::FXGradient *&, int &) const;

    // RVA: 0x123D | Ordinal: 4670
        void getGrip(int, int, int) const;

    // RVA: 0x1277 | Ordinal: 4728
        void getHelpText(void) const;

    // RVA: 0x13EE | Ordinal: 5103
        void getMetaClass(void) const;

    // RVA: 0x14B9 | Ordinal: 5306
        void getNumSegments(void) const;

    // RVA: 0x1560 | Ordinal: 5473
        void getSegment(int, int) const;

    // RVA: 0x1561 | Ordinal: 5474
        void getSegmentBlend(int) const;

    // RVA: 0x1562 | Ordinal: 5475
        void getSegmentLower(int) const;

    // RVA: 0x1563 | Ordinal: 5476
        void getSegmentLowerColor(int) const;

    // RVA: 0x1564 | Ordinal: 5477
        void getSegmentLowerPos(int) const;

    // RVA: 0x1565 | Ordinal: 5478
        void getSegmentMiddle(int) const;

    // RVA: 0x1566 | Ordinal: 5479
        void getSegmentMiddlePos(int) const;

    // RVA: 0x1567 | Ordinal: 5480
        void getSegmentUpper(int) const;

    // RVA: 0x1568 | Ordinal: 5481
        void getSegmentUpperColor(int) const;

    // RVA: 0x1569 | Ordinal: 5482
        void getSegmentUpperPos(int) const;

    // RVA: 0x158D | Ordinal: 5518
        void getSelectColor(void) const;

    // RVA: 0x1637 | Ordinal: 5688
        void getTipText(void) const;

    // RVA: 0x1687 | Ordinal: 5768
        void getValue(int, int) const;

    // RVA: 0x16E4 | Ordinal: 5861
        void gradient(unsigned int *, int);

    // RVA: 0x176D | Ordinal: 5998
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x19DB | Ordinal: 6620
        void isSegmentSelected(int) const;

    // RVA: 0x1A47 | Ordinal: 6728
        void layout(void);

    // RVA: 0x1AED | Ordinal: 6894
        void load(class FX::FXStream &);

    // RVA: 0x1C2C | Ordinal: 7213
        void manufacture(void);

    // RVA: 0x1D03 | Ordinal: 7428
        void mergeSegments(int, int, bool);

    // RVA: 0x1EC7 | Ordinal: 7880
        void moveSegmentLower(int, double, bool);

    // RVA: 0x1EC8 | Ordinal: 7881
        void moveSegmentMiddle(int, double, bool);

    // RVA: 0x1EC9 | Ordinal: 7882
        void moveSegmentUpper(int, double, bool);

    // RVA: 0x1ECA | Ordinal: 7883
        void moveSegments(int, int, double, bool);

    // RVA: 0x1FA2 | Ordinal: 8099
        void onCmdBlending(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2040 | Ordinal: 8257
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20AC | Ordinal: 8365
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E8 | Ordinal: 8425
        void onCmdMerge(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2122 | Ordinal: 8483
        void onCmdRecenter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2130 | Ordinal: 8497
        void onCmdReset(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x213F | Ordinal: 8512
        void onCmdSegColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x215A | Ordinal: 8539
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C8 | Ordinal: 8649
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2211 | Ordinal: 8722
        void onCmdSplit(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x222C | Ordinal: 8749
        void onCmdUniform(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2250 | Ordinal: 8785
        void onDNDDrop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2257 | Ordinal: 8792
        void onDNDEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x225E | Ordinal: 8799
        void onDNDLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2266 | Ordinal: 8807
        void onDNDMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23B7 | Ordinal: 9144
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23DF | Ordinal: 9184
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x242B | Ordinal: 9260
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2468 | Ordinal: 9321
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24AF | Ordinal: 9392
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24CF | Ordinal: 9424
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24EC | Ordinal: 9453
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F9 | Ordinal: 9466
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2568 | Ordinal: 9577
        void onUpdBlending(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C1 | Ordinal: 9666
        void onUpdMerge(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D8 | Ordinal: 9689
        void onUpdRecenter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E2 | Ordinal: 9699
        void onUpdSegColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2600 | Ordinal: 9729
        void onUpdSplit(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2618 | Ordinal: 9753
        void onUpdUniform(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x278C | Ordinal: 10125
        void resetGradients(void);

    // RVA: 0x281E | Ordinal: 10271
        void save(class FX::FXStream &) const;

    // RVA: 0x28E6 | Ordinal: 10471
        void selectSegments(int, int, bool);

    // RVA: 0x297A | Ordinal: 10619
        void setAnchorSegment(int);

    // RVA: 0x29AA | Ordinal: 10667
        void setBarSize(int);

    // RVA: 0x29AF | Ordinal: 10672
        void setBarStyle(unsigned int);

    // RVA: 0x2A05 | Ordinal: 10758
        void setControlSize(int);

    // RVA: 0x2A20 | Ordinal: 10785
        void setCurrentSegment(int, bool);

    // RVA: 0x2AE0 | Ordinal: 10977
        void setGradients(struct FX::FXGradient const *, int);

    // RVA: 0x2B19 | Ordinal: 11034
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2CB3 | Ordinal: 11444
        void setSegmentLowerColor(int, unsigned int, bool);

    // RVA: 0x2CB4 | Ordinal: 11445
        void setSegmentUpperColor(int, unsigned int, bool);

    // RVA: 0x2CD2 | Ordinal: 11475
        void setSelectColor(unsigned int);

    // RVA: 0x2D7C | Ordinal: 11645
        void setTipText(class FX::FXString const &);

    // RVA: 0x2E4F | Ordinal: 11856
        void splitSegments(int, int, bool);

    // RVA: 0x2EF3 | Ordinal: 12020
        void uniformSegments(int, int, bool);

    // RVA: 0x2F1E | Ordinal: 12063
        void updatebar(void);

    // RVA: 0x428 | Ordinal: 1065
        void _FXGradientBar(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGRADIENTBAR_HPP
