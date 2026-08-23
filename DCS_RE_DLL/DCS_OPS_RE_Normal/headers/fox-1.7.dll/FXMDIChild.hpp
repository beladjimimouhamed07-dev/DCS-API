#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMDIChild
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMDIChild
{
public:

    // RVA: 0x1B9 | Ordinal: 442
        void FXMDIChild(void);

    // RVA: 0x1BA | Ordinal: 443
        void FXMDIChild(class FX::FXMDIClient *, class FX::FXString const &, class FX::FXIcon *, class FX::FXPopup *, unsigned int, int, int, int, int);

    // RVA: 0x9BA | Ordinal: 2491
        void animateRectangles(int, int, int, int, int, int, int, int);

    // RVA: 0xA8C | Ordinal: 2701
        void canFocus(void) const;

    // RVA: 0xAB5 | Ordinal: 2742
        void changeCursor(unsigned char);

    // RVA: 0xAFB | Ordinal: 2812
        void close(bool);

    // RVA: 0xB7D | Ordinal: 2942
        void contentWindow(void) const;

    // RVA: 0xBCE | Ordinal: 3023
        void create(void);

    // RVA: 0xCB1 | Ordinal: 3250
        void detach(void);

    // RVA: 0xDB4 | Ordinal: 3509
        void drawRubberBox(int, int, int, int);

    // RVA: 0x104D | Ordinal: 4174
        void getBaseColor(void) const;

    // RVA: 0x105B | Ordinal: 4188
        void getBorderColor(void) const;

    // RVA: 0x1128 | Ordinal: 4393
        void getDefaultHeight(void);

    // RVA: 0x117E | Ordinal: 4479
        void getDefaultWidth(void);

    // RVA: 0x1215 | Ordinal: 4630
        void getFont(void) const;

    // RVA: 0x1290 | Ordinal: 4753
        void getHiliteColor(void) const;

    // RVA: 0x12A8 | Ordinal: 4777
        void getIcon(void) const;

    // RVA: 0x12AD | Ordinal: 4782
        void getIconHeight(void) const;

    // RVA: 0x12B8 | Ordinal: 4793
        void getIconWidth(void) const;

    // RVA: 0x12B9 | Ordinal: 4794
        void getIconX(void) const;

    // RVA: 0x12BA | Ordinal: 4795
        void getIconY(void) const;

    // RVA: 0x136B | Ordinal: 4972
        void getMenu(void) const;

    // RVA: 0x140C | Ordinal: 5133
        void getMetaClass(void) const;

    // RVA: 0x1491 | Ordinal: 5266
        void getNormalHeight(void) const;

    // RVA: 0x1493 | Ordinal: 5268
        void getNormalWidth(void) const;

    // RVA: 0x1494 | Ordinal: 5269
        void getNormalX(void) const;

    // RVA: 0x1495 | Ordinal: 5270
        void getNormalY(void) const;

    // RVA: 0x15A5 | Ordinal: 5542
        void getShadowColor(void) const;

    // RVA: 0x1650 | Ordinal: 5713
        void getTitle(void) const;

    // RVA: 0x1654 | Ordinal: 5717
        void getTitleBackColor(void) const;

    // RVA: 0x1657 | Ordinal: 5720
        void getTitleColor(void) const;

    // RVA: 0x1665 | Ordinal: 5734
        void getTracking(void) const;

    // RVA: 0x178C | Ordinal: 6029
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x199A | Ordinal: 6555
        void isMaximized(void) const;

    // RVA: 0x19A1 | Ordinal: 6562
        void isMinimized(void) const;

    // RVA: 0x1A50 | Ordinal: 6737
        void layout(void);

    // RVA: 0x1AFE | Ordinal: 6911
        void load(class FX::FXStream &);

    // RVA: 0x1C49 | Ordinal: 7242
        void manufacture(void);

    // RVA: 0x1CC3 | Ordinal: 7364
        void maximize(bool);

    // RVA: 0x1E94 | Ordinal: 7829
        void minimize(bool);

    // RVA: 0x1EA9 | Ordinal: 7850
        void move(int, int);

    // RVA: 0x1FB9 | Ordinal: 8122
        void onCmdClose(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x204C | Ordinal: 8269
        void onCmdGetIconValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x209B | Ordinal: 8348
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E5 | Ordinal: 8422
        void onCmdMaximize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E9 | Ordinal: 8426
        void onCmdMinimize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2132 | Ordinal: 8499
        void onCmdRestore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2166 | Ordinal: 8551
        void onCmdSetIconValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B7 | Ordinal: 8632
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2270 | Ordinal: 8817
        void onDefault(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2275 | Ordinal: 8822
        void onDeselected(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2294 | Ordinal: 8853
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22BF | Ordinal: 8896
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22E3 | Ordinal: 8932
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2300 | Ordinal: 8961
        void onFocusSelf(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2398 | Ordinal: 9113
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23BC | Ordinal: 9149
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23E4 | Ordinal: 9189
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x240D | Ordinal: 9230
        void onMiddleBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2417 | Ordinal: 9240
        void onMiddleBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2431 | Ordinal: 9266
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2471 | Ordinal: 9330
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24F0 | Ordinal: 9457
        void onRightBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24FD | Ordinal: 9470
        void onRightBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2505 | Ordinal: 9478
        void onSelected(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2570 | Ordinal: 9585
        void onUpdClose(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B6 | Ordinal: 9655
        void onUpdMaximize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25B9 | Ordinal: 9658
        void onUpdMenuClose(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25BB | Ordinal: 9660
        void onUpdMenuMinimize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25BD | Ordinal: 9662
        void onUpdMenuRestore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25BF | Ordinal: 9664
        void onUpdMenuWindow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C2 | Ordinal: 9667
        void onUpdMinimize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25DB | Ordinal: 9692
        void onUpdRestore(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x261C | Ordinal: 9757
        void onUpdWindow(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2695 | Ordinal: 9878
        void position(int, int, int, int);

    // RVA: 0x2796 | Ordinal: 10135
        void resize(int, int);

    // RVA: 0x27A1 | Ordinal: 10146
        void restore(bool);

    // RVA: 0x282F | Ordinal: 10288
        void save(class FX::FXStream &) const;

    // RVA: 0x29B4 | Ordinal: 10677
        void setBaseColor(unsigned int);

    // RVA: 0x29C1 | Ordinal: 10690
        void setBorderColor(unsigned int);

    // RVA: 0x2A9D | Ordinal: 10910
        void setFocus(void);

    // RVA: 0x2ABF | Ordinal: 10944
        void setFont(class FX::FXFont *);

    // RVA: 0x2B33 | Ordinal: 11060
        void setHiliteColor(unsigned int);

    // RVA: 0x2B4A | Ordinal: 11083
        void setIcon(class FX::FXIcon *);

    // RVA: 0x2B4F | Ordinal: 11088
        void setIconHeight(int);

    // RVA: 0x2B5A | Ordinal: 11099
        void setIconWidth(int);

    // RVA: 0x2B5B | Ordinal: 11100
        void setIconX(int);

    // RVA: 0x2B5C | Ordinal: 11101
        void setIconY(int);

    // RVA: 0x2BF9 | Ordinal: 11258
        void setMenu(class FX::FXPopup *);

    // RVA: 0x2C0D | Ordinal: 11278
        void setNormalHeight(int);

    // RVA: 0x2C0F | Ordinal: 11280
        void setNormalWidth(int);

    // RVA: 0x2C10 | Ordinal: 11281
        void setNormalX(int);

    // RVA: 0x2C11 | Ordinal: 11282
        void setNormalY(int);

    // RVA: 0x2CE8 | Ordinal: 11497
        void setShadowColor(unsigned int);

    // RVA: 0x2D92 | Ordinal: 11667
        void setTitle(class FX::FXString const &);

    // RVA: 0x2D96 | Ordinal: 11671
        void setTitleBackColor(unsigned int);

    // RVA: 0x2D99 | Ordinal: 11674
        void setTitleColor(unsigned int);

    // RVA: 0x2DA3 | Ordinal: 11684
        void setTracking(bool);

    // RVA: 0x2FC5 | Ordinal: 12230
        void where(int, int) const;

    // RVA: 0x44F | Ordinal: 1104
        void _FXMDIChild(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMDICHILD_HPP
