#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDCWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDCWindow
{
public:

    // RVA: 0xAB | Ordinal: 172
        void FXDCWindow(class FX::FXDrawable *);

    // RVA: 0xAC | Ordinal: 173
        void FXDCWindow(class FX::FXDrawable *, struct FX::FXEvent *);

    // RVA: 0xA58 | Ordinal: 2649
        void begin(class FX::FXDrawable *);

    // RVA: 0xADF | Ordinal: 2784
        void clearClipMask(void);

    // RVA: 0xAE2 | Ordinal: 2787
        void clearClipRectangle(void);

    // RVA: 0xAF0 | Ordinal: 2801
        void clipChildren(bool);

    // RVA: 0xD21 | Ordinal: 3362
        void drawArc(int, int, int, int, int, int);

    // RVA: 0xD24 | Ordinal: 3365
        void drawArcs(struct FX::FXArc const *, unsigned int);

    // RVA: 0xD29 | Ordinal: 3370
        void drawArea(class FX::FXDrawable const *, int, int, int, int, int, int);

    // RVA: 0xD2A | Ordinal: 3371
        void drawArea(class FX::FXDrawable const *, int, int, int, int, int, int, int, int);

    // RVA: 0xD30 | Ordinal: 3377
        void drawBitmap(class FX::FXBitmap const *, int, int);

    // RVA: 0xD52 | Ordinal: 3411
        void drawEllipse(int, int, int, int);

    // RVA: 0xD55 | Ordinal: 3414
        void drawFocusRectangle(int, int, int, int);

    // RVA: 0xD64 | Ordinal: 3429
        void drawHashBox(int, int, int, int, int);

    // RVA: 0xD69 | Ordinal: 3434
        void drawIcon(class FX::FXIcon const *, int, int);

    // RVA: 0xD6C | Ordinal: 3437
        void drawIconShaded(class FX::FXIcon const *, int, int);

    // RVA: 0xD6F | Ordinal: 3440
        void drawIconSunken(class FX::FXIcon const *, int, int);

    // RVA: 0xD72 | Ordinal: 3443
        void drawImage(class FX::FXImage const *, int, int);

    // RVA: 0xD77 | Ordinal: 3448
        void drawImageText(int, int, class FX::FXString const &);

    // RVA: 0xD78 | Ordinal: 3449
        void drawImageText(int, int, char const *, unsigned int);

    // RVA: 0xD83 | Ordinal: 3460
        void drawLine(int, int, int, int);

    // RVA: 0xD86 | Ordinal: 3463
        void drawLineSegments(struct FX::FXSegment const *, unsigned int);

    // RVA: 0xD89 | Ordinal: 3466
        void drawLines(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD8C | Ordinal: 3469
        void drawLinesRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD94 | Ordinal: 3477
        void drawPoint(int, int);

    // RVA: 0xD98 | Ordinal: 3481
        void drawPoints(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD9B | Ordinal: 3484
        void drawPointsRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xDA3 | Ordinal: 3492
        void drawRectangle(int, int, int, int);

    // RVA: 0xDA6 | Ordinal: 3495
        void drawRectangles(class FX::FXRectangle const *, unsigned int);

    // RVA: 0xDB2 | Ordinal: 3507
        void drawRoundRectangle(int, int, int, int, int, int);

    // RVA: 0xDC3 | Ordinal: 3524
        void drawText(int, int, class FX::FXString const &);

    // RVA: 0xDC4 | Ordinal: 3525
        void drawText(int, int, char const *, unsigned int);

    // RVA: 0xDD8 | Ordinal: 3545
        void drawable(void) const;

    // RVA: 0xE1C | Ordinal: 3613
        void end(void);

    // RVA: 0xEBE | Ordinal: 3775
        void fillArc(int, int, int, int, int, int);

    // RVA: 0xEC1 | Ordinal: 3778
        void fillArcs(struct FX::FXArc const *, unsigned int);

    // RVA: 0xEC5 | Ordinal: 3782
        void fillChord(int, int, int, int, int, int);

    // RVA: 0xEC8 | Ordinal: 3785
        void fillChords(struct FX::FXArc const *, unsigned int);

    // RVA: 0xECB | Ordinal: 3788
        void fillComplexPolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xECE | Ordinal: 3791
        void fillComplexPolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xED1 | Ordinal: 3794
        void fillConcavePolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xED4 | Ordinal: 3797
        void fillConcavePolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xED7 | Ordinal: 3800
        void fillEllipse(int, int, int, int);

    // RVA: 0xED9 | Ordinal: 3802
        void fillHorizontalGradient(int, int, int, int, unsigned int, unsigned int);

    // RVA: 0xEF5 | Ordinal: 3830
        void fillPolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xEF8 | Ordinal: 3833
        void fillPolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xEFB | Ordinal: 3836
        void fillRectangle(int, int, int, int);

    // RVA: 0xEFE | Ordinal: 3839
        void fillRectangles(class FX::FXRectangle const *, unsigned int);

    // RVA: 0xF01 | Ordinal: 3842
        void fillRoundRectangle(int, int, int, int, int, int);

    // RVA: 0xF03 | Ordinal: 3844
        void fillVerticalGradient(int, int, int, int, unsigned int, unsigned int);

    // RVA: 0x26FF | Ordinal: 9984
        void readPixel(int, int);

    // RVA: 0x29A2 | Ordinal: 10659
        void setBackground(unsigned int);

    // RVA: 0x29E8 | Ordinal: 10729
        void setClipMask(class FX::FXBitmap *, int, int);

    // RVA: 0x29ED | Ordinal: 10734
        void setClipRectangle(class FX::FXRectangle const &);

    // RVA: 0x29EE | Ordinal: 10735
        void setClipRectangle(int, int, int, int);

    // RVA: 0x29F0 | Ordinal: 10737
        void setClipRegion(class FX::FXRegion const &);

    // RVA: 0x2A30 | Ordinal: 10801
        void setDashes(unsigned int, char const *, unsigned int);

    // RVA: 0x2A8D | Ordinal: 10894
        void setFillRule(enum FX::FXFillRule);

    // RVA: 0x2A90 | Ordinal: 10897
        void setFillStyle(enum FX::FXFillStyle);

    // RVA: 0x2AB3 | Ordinal: 10932
        void setFont(class FX::FXFont *);

    // RVA: 0x2AD2 | Ordinal: 10963
        void setForeground(unsigned int);

    // RVA: 0x2ADE | Ordinal: 10975
        void setFunction(enum FX::FXFunction);

    // RVA: 0x2BC4 | Ordinal: 11205
        void setLineCap(enum FX::FXCapStyle);

    // RVA: 0x2BCA | Ordinal: 11211
        void setLineJoin(enum FX::FXJoinStyle);

    // RVA: 0x2BCD | Ordinal: 11214
        void setLineStyle(enum FX::FXLineStyle);

    // RVA: 0x2BD0 | Ordinal: 11217
        void setLineWidth(unsigned int);

    // RVA: 0x2D22 | Ordinal: 11555
        void setStipple(class FX::FXBitmap *, int, int);

    // RVA: 0x2D23 | Ordinal: 11556
        void setStipple(enum FX::FXStipplePattern, int, int);

    // RVA: 0x2D69 | Ordinal: 11626
        void setTile(class FX::FXImage *, int, int);

    // RVA: 0x2F0F | Ordinal: 12048
        void updateBrush(void);

    // RVA: 0x2F17 | Ordinal: 12056
        void updatePen(void);

    // RVA: 0x3E5 | Ordinal: 998
        void _FXDCWindow(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDCWINDOW_HPP
