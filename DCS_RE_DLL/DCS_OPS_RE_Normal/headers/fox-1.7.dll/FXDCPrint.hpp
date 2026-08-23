#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDCPrint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDCPrint
{
public:

    // RVA: 0xAA | Ordinal: 171
        void FXDCPrint(class FX::FXApp *);

    // RVA: 0xA54 | Ordinal: 2645
        void bbox(float, float);

    // RVA: 0xA5C | Ordinal: 2653
        void beginPage(unsigned int);

    // RVA: 0xA5D | Ordinal: 2654
        void beginPrint(struct FX::FXPrinter &);

    // RVA: 0xADE | Ordinal: 2783
        void clearClipMask(void);

    // RVA: 0xAE1 | Ordinal: 2786
        void clearClipRectangle(void);

    // RVA: 0xAEF | Ordinal: 2800
        void clipChildren(bool);

    // RVA: 0xD20 | Ordinal: 3361
        void drawArc(int, int, int, int, int, int);

    // RVA: 0xD23 | Ordinal: 3364
        void drawArcs(struct FX::FXArc const *, unsigned int);

    // RVA: 0xD27 | Ordinal: 3368
        void drawArea(class FX::FXDrawable const *, int, int, int, int, int, int);

    // RVA: 0xD28 | Ordinal: 3369
        void drawArea(class FX::FXDrawable const *, int, int, int, int, int, int, int, int);

    // RVA: 0xD2F | Ordinal: 3376
        void drawBitmap(class FX::FXBitmap const *, int, int);

    // RVA: 0xD51 | Ordinal: 3410
        void drawEllipse(int, int, int, int);

    // RVA: 0xD63 | Ordinal: 3428
        void drawHashBox(int, int, int, int, int);

    // RVA: 0xD68 | Ordinal: 3433
        void drawIcon(class FX::FXIcon const *, int, int);

    // RVA: 0xD6B | Ordinal: 3436
        void drawIconShaded(class FX::FXIcon const *, int, int);

    // RVA: 0xD6E | Ordinal: 3439
        void drawIconSunken(class FX::FXIcon const *, int, int);

    // RVA: 0xD71 | Ordinal: 3442
        void drawImage(class FX::FXImage const *, int, int);

    // RVA: 0xD75 | Ordinal: 3446
        void drawImageText(int, int, class FX::FXString const &);

    // RVA: 0xD76 | Ordinal: 3447
        void drawImageText(int, int, char const *, unsigned int);

    // RVA: 0xD82 | Ordinal: 3459
        void drawLine(int, int, int, int);

    // RVA: 0xD85 | Ordinal: 3462
        void drawLineSegments(struct FX::FXSegment const *, unsigned int);

    // RVA: 0xD88 | Ordinal: 3465
        void drawLines(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD8B | Ordinal: 3468
        void drawLinesRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD93 | Ordinal: 3476
        void drawPoint(int, int);

    // RVA: 0xD97 | Ordinal: 3480
        void drawPoints(class FX::FXPoint const *, unsigned int);

    // RVA: 0xD9A | Ordinal: 3483
        void drawPointsRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xDA2 | Ordinal: 3491
        void drawRectangle(int, int, int, int);

    // RVA: 0xDA5 | Ordinal: 3494
        void drawRectangles(class FX::FXRectangle const *, unsigned int);

    // RVA: 0xDB1 | Ordinal: 3506
        void drawRoundRectangle(int, int, int, int, int, int);

    // RVA: 0xDC1 | Ordinal: 3522
        void drawText(int, int, class FX::FXString const &);

    // RVA: 0xDC2 | Ordinal: 3523
        void drawText(int, int, char const *, unsigned int);

    // RVA: 0xE21 | Ordinal: 3618
        void endPage(void);

    // RVA: 0xE22 | Ordinal: 3619
        void endPrint(void);

    // RVA: 0xEBD | Ordinal: 3774
        void fillArc(int, int, int, int, int, int);

    // RVA: 0xEC0 | Ordinal: 3777
        void fillArcs(struct FX::FXArc const *, unsigned int);

    // RVA: 0xEC4 | Ordinal: 3781
        void fillChord(int, int, int, int, int, int);

    // RVA: 0xEC7 | Ordinal: 3784
        void fillChords(struct FX::FXArc const *, unsigned int);

    // RVA: 0xECA | Ordinal: 3787
        void fillComplexPolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xECD | Ordinal: 3790
        void fillComplexPolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xED0 | Ordinal: 3793
        void fillConcavePolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xED3 | Ordinal: 3796
        void fillConcavePolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xED6 | Ordinal: 3799
        void fillEllipse(int, int, int, int);

    // RVA: 0xEF4 | Ordinal: 3829
        void fillPolygon(class FX::FXPoint const *, unsigned int);

    // RVA: 0xEF7 | Ordinal: 3832
        void fillPolygonRel(class FX::FXPoint const *, unsigned int);

    // RVA: 0xEFA | Ordinal: 3835
        void fillRectangle(int, int, int, int);

    // RVA: 0xEFD | Ordinal: 3838
        void fillRectangles(class FX::FXRectangle const *, unsigned int);

    // RVA: 0xF00 | Ordinal: 3841
        void fillRoundRectangle(int, int, int, int, int, int);

    // RVA: 0x264C | Ordinal: 9805
        void outf(char const *, ...);

    // RVA: 0x264D | Ordinal: 9806
        void outhex(unsigned int);

    // RVA: 0x29A1 | Ordinal: 10658
        void setBackground(unsigned int);

    // RVA: 0x29E7 | Ordinal: 10728
        void setClipMask(class FX::FXBitmap *, int, int);

    // RVA: 0x29EB | Ordinal: 10732
        void setClipRectangle(class FX::FXRectangle const &);

    // RVA: 0x29EC | Ordinal: 10733
        void setClipRectangle(int, int, int, int);

    // RVA: 0x2A02 | Ordinal: 10755
        void setContentRange(int, int, int, int);

    // RVA: 0x2A2F | Ordinal: 10800
        void setDashes(unsigned int, char const *, unsigned int);

    // RVA: 0x2A8C | Ordinal: 10893
        void setFillRule(enum FX::FXFillRule);

    // RVA: 0x2A8F | Ordinal: 10896
        void setFillStyle(enum FX::FXFillStyle);

    // RVA: 0x2AB2 | Ordinal: 10931
        void setFont(class FX::FXFont *);

    // RVA: 0x2AD1 | Ordinal: 10962
        void setForeground(unsigned int);

    // RVA: 0x2ADD | Ordinal: 10974
        void setFunction(enum FX::FXFunction);

    // RVA: 0x2BC3 | Ordinal: 11204
        void setLineCap(enum FX::FXCapStyle);

    // RVA: 0x2BC9 | Ordinal: 11210
        void setLineJoin(enum FX::FXJoinStyle);

    // RVA: 0x2BCC | Ordinal: 11213
        void setLineStyle(enum FX::FXLineStyle);

    // RVA: 0x2BCF | Ordinal: 11216
        void setLineWidth(unsigned int);

    // RVA: 0x2D20 | Ordinal: 11553
        void setStipple(class FX::FXBitmap *, int, int);

    // RVA: 0x2D21 | Ordinal: 11554
        void setStipple(enum FX::FXStipplePattern, int, int);

    // RVA: 0x2D68 | Ordinal: 11625
        void setTile(class FX::FXImage *, int, int);

    // RVA: 0x2E98 | Ordinal: 11929
        void tfm(float &, float &, float, float);

    // RVA: 0x3E4 | Ordinal: 997
        void _FXDCPrint(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDCPRINT_HPP
