#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDC
{
public:

    // RVA: 0xA9 | Ordinal: 170
        void FXDC(class FX::FXApp *);

    // RVA: 0xADD | Ordinal: 2782
        void clearClipMask(void);

    // RVA: 0xAE0 | Ordinal: 2785
        void clearClipRectangle(void);

    // RVA: 0xAEE | Ordinal: 2799
        void clipChildren(bool);

    // RVA: 0xB7F | Ordinal: 2944
        void context(void) const;

    // RVA: 0xD1F | Ordinal: 3360
        void drawArc(int, int, int, int, int, int);

    // RVA: 0xD22 | Ordinal: 3363
        void drawArcs(struct FX::FXArc const *, unsigned int);

    // RVA: 0xD25 | Ordinal: 3366
        void drawArea(class FX::FXDrawable const *, int, int, int, int, int, int);

    // RVA: 0xD26 | Ordinal: 3367
        void drawArea(class FX::FXDrawable const *, int, int, int, int, int, int, int, int);

    // RVA: 0xD2E | Ordinal: 3375
        void drawBitmap(class FX::FXBitmap const *, int, int);

    // RVA: 0xD50 | Ordinal: 3409
        void drawEllipse(int, int, int, int);

    // RVA: 0xD54 | Ordinal: 3413
        void drawFocusRectangle(int, int, int, int);

    // RVA: 0xD62 | Ordinal: 3427
        void drawHashBox(int, int, int, int, int);

    // RVA: 0xD67 | Ordinal: 3432
        void drawIcon(class FX::FXIcon const *, int, int);

    // RVA: 0xD6A | Ordinal: 3435
        void drawIconShaded(class FX::FXIcon const *, int, int);

    // RVA: 0xD6D | Ordinal: 3438
        void drawIconSunken(class FX::FXIcon const *, int, int);

    // RVA: 0xD70 | Ordinal: 3441
        void drawImage(class FX::FXImage const *, int, int);

    // RVA: 0xD73 | Ordinal: 3444
        void drawImageText(int, int, class FX::FXString const &);

    // RVA: 0xD74 | Ordinal: 3445
        void drawImageText(int, int, char const *, unsigned int);

    // RVA: 0xD81 | Ordinal: 3458
        void drawLine(int, int, int, int);

    // RVA: 0xD84 | Ordinal: 3461
        void drawLineSegments(struct FX::FXSegment const *, unsigned int);

    // RVA: 0xD87 | Ordinal: 3464
        void drawLines(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD8A | Ordinal: 3467
        void drawLinesRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD92 | Ordinal: 3475
        void drawPoint(int, int);

    // RVA: 0xD96 | Ordinal: 3479
        void drawPoints(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD99 | Ordinal: 3482
        void drawPointsRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xDA1 | Ordinal: 3490
        void drawRectangle(int, int, int, int);

    // RVA: 0xDA4 | Ordinal: 3493
        void drawRectangles(class FX::FXRectangle const *, unsigned int);

    // RVA: 0xDB0 | Ordinal: 3505
        void drawRoundRectangle(int, int, int, int, int, int);

    // RVA: 0xDBF | Ordinal: 3520
        void drawText(int, int, class FX::FXString const &);

    // RVA: 0xDC0 | Ordinal: 3521
        void drawText(int, int, char const *, unsigned int);

    // RVA: 0xEBC | Ordinal: 3773
        void fillArc(int, int, int, int, int, int);

    // RVA: 0xEBF | Ordinal: 3776
        void fillArcs(struct FX::FXArc const *, unsigned int);

    // RVA: 0xEC3 | Ordinal: 3780
        void fillChord(int, int, int, int, int, int);

    // RVA: 0xEC6 | Ordinal: 3783
        void fillChords(struct FX::FXArc const *, unsigned int);

    // RVA: 0xEC9 | Ordinal: 3786
        void fillComplexPolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xECC | Ordinal: 3789
        void fillComplexPolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xECF | Ordinal: 3792
        void fillConcavePolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xED2 | Ordinal: 3795
        void fillConcavePolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xED5 | Ordinal: 3798
        void fillEllipse(int, int, int, int);

    // RVA: 0xED8 | Ordinal: 3801
        void fillHorizontalGradient(int, int, int, int, unsigned int, unsigned int);

    // RVA: 0xEF3 | Ordinal: 3828
        void fillPolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xEF6 | Ordinal: 3831
        void fillPolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xEF9 | Ordinal: 3834
        void fillRectangle(int, int, int, int);

    // RVA: 0xEFC | Ordinal: 3837
        void fillRectangles(class FX::FXRectangle const *, unsigned int);

    // RVA: 0xEFF | Ordinal: 3840
        void fillRoundRectangle(int, int, int, int, int, int);

    // RVA: 0xF02 | Ordinal: 3843
        void fillVerticalGradient(int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x1012 | Ordinal: 4115
        void getApp(void) const;

    // RVA: 0x103B | Ordinal: 4156
        void getBackground(void) const;

    // RVA: 0x108D | Ordinal: 4238
        void getClipHeight(void) const;

    // RVA: 0x108E | Ordinal: 4239
        void getClipRectangle(void) const;

    // RVA: 0x108F | Ordinal: 4240
        void getClipWidth(void) const;

    // RVA: 0x1090 | Ordinal: 4241
        void getClipX(void) const;

    // RVA: 0x1091 | Ordinal: 4242
        void getClipY(void) const;

    // RVA: 0x10F3 | Ordinal: 4340
        void getDashLength(void) const;

    // RVA: 0x10F4 | Ordinal: 4341
        void getDashOffset(void) const;

    // RVA: 0x10F5 | Ordinal: 4342
        void getDashPattern(void) const;

    // RVA: 0x11F8 | Ordinal: 4601
        void getFillRule(void) const;

    // RVA: 0x11F9 | Ordinal: 4602
        void getFillStyle(void) const;

    // RVA: 0x1209 | Ordinal: 4618
        void getFont(void) const;

    // RVA: 0x122C | Ordinal: 4653
        void getForeground(void) const;

    // RVA: 0x1235 | Ordinal: 4662
        void getFunction(void) const;

    // RVA: 0x133A | Ordinal: 4923
        void getLineCap(void) const;

    // RVA: 0x133E | Ordinal: 4927
        void getLineJoin(void) const;

    // RVA: 0x133F | Ordinal: 4928
        void getLineStyle(void) const;

    // RVA: 0x1340 | Ordinal: 4929
        void getLineWidth(void) const;

    // RVA: 0x15DB | Ordinal: 5596
        void getStippleBitmap(void) const;

    // RVA: 0x15DD | Ordinal: 5598
        void getStipplePattern(void) const;

    // RVA: 0x1623 | Ordinal: 5668
        void getTile(void) const;

    // RVA: 0x26FE | Ordinal: 9983
        void readPixel(int, int);

    // RVA: 0x29A0 | Ordinal: 10657
        void setBackground(unsigned int);

    // RVA: 0x29E6 | Ordinal: 10727
        void setClipMask(class FX::FXBitmap *, int, int);

    // RVA: 0x29E9 | Ordinal: 10730
        void setClipRectangle(class FX::FXRectangle const &);

    // RVA: 0x29EA | Ordinal: 10731
        void setClipRectangle(int, int, int, int);

    // RVA: 0x29EF | Ordinal: 10736
        void setClipRegion(class FX::FXRegion const &);

    // RVA: 0x2A2E | Ordinal: 10799
        void setDashes(unsigned int, char const *, unsigned int);

    // RVA: 0x2A8B | Ordinal: 10892
        void setFillRule(enum FX::FXFillRule);

    // RVA: 0x2A8E | Ordinal: 10895
        void setFillStyle(enum FX::FXFillStyle);

    // RVA: 0x2AB1 | Ordinal: 10930
        void setFont(class FX::FXFont *);

    // RVA: 0x2AD0 | Ordinal: 10961
        void setForeground(unsigned int);

    // RVA: 0x2ADC | Ordinal: 10973
        void setFunction(enum FX::FXFunction);

    // RVA: 0x2BC2 | Ordinal: 11203
        void setLineCap(enum FX::FXCapStyle);

    // RVA: 0x2BC8 | Ordinal: 11209
        void setLineJoin(enum FX::FXJoinStyle);

    // RVA: 0x2BCB | Ordinal: 11212
        void setLineStyle(enum FX::FXLineStyle);

    // RVA: 0x2BCE | Ordinal: 11215
        void setLineWidth(unsigned int);

    // RVA: 0x2D1E | Ordinal: 11551
        void setStipple(class FX::FXBitmap *, int, int);

    // RVA: 0x2D1F | Ordinal: 11552
        void setStipple(enum FX::FXStipplePattern, int, int);

    // RVA: 0x2D67 | Ordinal: 11624
        void setTile(class FX::FXImage *, int, int);

    // RVA: 0x3E3 | Ordinal: 996
        void _FXDC(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDC_HPP
