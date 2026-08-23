#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontEngineQPF2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontEngineQPF2
{
public:

    // RVA: 0x107 | Ordinal: 264
        void QFontEngineQPF2(struct QFontDef const &, class QByteArray const &);

    // RVA: 0x984 | Ordinal: 2437
        void addOutlineToPath(double, double, struct QGlyphLayout const &, class QPainterPath *, class QFlags<enum QTextItem::RenderFlag>);

    // RVA: 0x9DE | Ordinal: 2527
        void alphaMapForGlyph(unsigned int);

    // RVA: 0xA21 | Ordinal: 2594
        void ascent(void) const;

    // RVA: 0xAE6 | Ordinal: 2791
        void boundingBox(struct QGlyphLayout const &);

    // RVA: 0xAE7 | Ordinal: 2792
        void boundingBox(unsigned int);

    // RVA: 0xB4A | Ordinal: 2891
        void capHeight(void) const;

    // RVA: 0xDFB | Ordinal: 3580
        void descent(void) const;

    // RVA: 0x1010 | Ordinal: 4113
        void extractHeaderField(unsigned char const *, enum QFontEngineQPF2::HeaderTag);

    // RVA: 0x1018 | Ordinal: 4121
        void faceId(void) const;

    // RVA: 0x1078 | Ordinal: 4217
        void findGlyph(unsigned int) const;

    // RVA: 0x11B2 | Ordinal: 4531
        void getSfntTableData(unsigned int, unsigned char *, unsigned int *) const;

    // RVA: 0x4DF4 | Ordinal: 19957
        void glyphCount(void) const;

    // RVA: 0x4DF8 | Ordinal: 19961
        void glyphIndex(unsigned int) const;

    // RVA: 0x5095 | Ordinal: 20630
        void isValid(void) const;

    // RVA: 0x512C | Ordinal: 20781
        void leading(void) const;

    // RVA: 0x516F | Ordinal: 20848
        void lineThickness(void) const;

    // RVA: 0x5237 | Ordinal: 21048
        void maxCharWidth(void) const;

    // RVA: 0x52BD | Ordinal: 21182
        void minLeftBearing(void) const;

    // RVA: 0x52C3 | Ordinal: 21188
        void minRightBearing(void) const;

    // RVA: 0x5680 | Ordinal: 22145
        void recalcAdvances(struct QGlyphLayout *, class QFlags<enum QFontEngine::ShaperFlag>) const;

    // RVA: 0x5E1F | Ordinal: 24096
        void stringToCMap(class QChar const *, int, struct QGlyphLayout *, int *, class QFlags<enum QFontEngine::ShaperFlag>) const;

    // RVA: 0x6084 | Ordinal: 24709
        void underlinePosition(void) const;

    // RVA: 0x60FA | Ordinal: 24827
        void verifyHeader(unsigned char const *, int);

    // RVA: 0x43C | Ordinal: 1085
        void _QFontEngineQPF2(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTENGINEQPF2_HPP
