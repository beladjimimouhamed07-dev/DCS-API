#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontEngine
{
public:

    // RVA: 0x103 | Ordinal: 260
        void QFontEngine(enum QFontEngine::Type);

    // RVA: 0x960 | Ordinal: 2401
        void addBitmapFontToPath(double, double, struct QGlyphLayout const &, class QPainterPath *, class QFlags<enum QTextItem::RenderFlag>);

    // RVA: 0x97B | Ordinal: 2428
        void addGlyphsToPath(unsigned int *, struct QFixedPoint *, int, class QPainterPath *, class QFlags<enum QTextItem::RenderFlag>);

    // RVA: 0x982 | Ordinal: 2435
        void addOutlineToPath(double, double, struct QGlyphLayout const &, class QPainterPath *, class QFlags<enum QTextItem::RenderFlag>);

    // RVA: 0x9D5 | Ordinal: 2518
        void alphaMapBoundingBox(unsigned int, struct QFixed, class QTransform const &, enum QFontEngine::GlyphFormat);

    // RVA: 0x9D6 | Ordinal: 2519
        void alphaMapForGlyph(unsigned int);

    // RVA: 0x9D7 | Ordinal: 2520
        void alphaMapForGlyph(unsigned int, class QTransform const &);

    // RVA: 0x9D8 | Ordinal: 2521
        void alphaMapForGlyph(unsigned int, struct QFixed);

    // RVA: 0x9D9 | Ordinal: 2522
        void alphaMapForGlyph(unsigned int, struct QFixed, class QTransform const &);

    // RVA: 0x9E1 | Ordinal: 2530
        void alphaRGBMapForGlyph(unsigned int, struct QFixed, class QTransform const &);

    // RVA: 0xA4C | Ordinal: 2637
        void averageCharWidth(void) const;

    // RVA: 0xA9B | Ordinal: 2716
        void bitmapForGlyph(unsigned int, struct QFixed, class QTransform const &, class QColor const &);

    // RVA: 0xAE3 | Ordinal: 2788
        void boundingBox(unsigned int, class QTransform const &);

    // RVA: 0xB37 | Ordinal: 2872
        void calculatedCapHeight(void) const;

    // RVA: 0xB3D | Ordinal: 2878
        void canRender(unsigned int) const;

    // RVA: 0xB3E | Ordinal: 2879
        void canRender(class QChar const *, int) const;

    // RVA: 0xBB6 | Ordinal: 2999
        void clearGlyphCache(void const *);

    // RVA: 0xBE7 | Ordinal: 3048
        void cloneWithSize(double) const;

    // RVA: 0xC67 | Ordinal: 3176
        void convertToPostscriptFontFamilyName(class QByteArray const &);

    // RVA: 0xE75 | Ordinal: 3702
        void doKerning(struct QGlyphLayout *, class QFlags<enum QFontEngine::ShaperFlag>) const;

    // RVA: 0xF81 | Ordinal: 3970
        void emSquareSize(void) const;

    // RVA: 0x1002 | Ordinal: 4099
        void expectsGammaCorrectedBlending(void) const;

    // RVA: 0x1017 | Ordinal: 4120
        void faceId(void) const;

    // RVA: 0x1199 | Ordinal: 4506
        void getCMap(unsigned char const *, unsigned int, bool *, int *);

    // RVA: 0x11A1 | Ordinal: 4514
        void getGlyphBearings(unsigned int, double *, double *);

    // RVA: 0x11A3 | Ordinal: 4516
        void getGlyphPositions(struct QGlyphLayout const &, class QTransform const &, class QFlags<enum QTextItem::RenderFlag>, class QVarLengthArray<unsigned int, 256> &, class QVarLengthArray<struct QFixedPoint, 256> &);

    // RVA: 0x11AA | Ordinal: 4523
        void getPointInOutline(unsigned int, int, unsigned int, struct QFixed *, struct QFixed *, unsigned int *);

    // RVA: 0x11B0 | Ordinal: 4529
        void getSfntTable(unsigned int) const;

    // RVA: 0x11B1 | Ordinal: 4530
        void getSfntTableData(unsigned int, unsigned char *, unsigned int *) const;

    // RVA: 0x11B4 | Ordinal: 4533
        void getTrueTypeGlyphIndex(unsigned char const *, int, unsigned int);

    // RVA: 0x11B6 | Ordinal: 4535
        void getUnscaledGlyph(unsigned int, class QPainterPath *, struct glyph_metrics_t *);

    // RVA: 0x4DF2 | Ordinal: 19955
        void glyphCache(void const *, enum QFontEngine::GlyphFormat, class QTransform const &, class QColor const &) const;

    // RVA: 0x4DF3 | Ordinal: 19956
        void glyphCount(void) const;

    // RVA: 0x4DF5 | Ordinal: 19958
        void glyphData(unsigned int, struct QFixed, enum QFontEngine::GlyphFormat, class QTransform const &);

    // RVA: 0x4DFC | Ordinal: 19965
        void glyphMargin(enum QFontEngine::GlyphFormat);

    // RVA: 0x4E18 | Ordinal: 19993
        void handle(void) const;

    // RVA: 0x4E4C | Ordinal: 20045
        void harfbuzzFace(void) const;

    // RVA: 0x4E4D | Ordinal: 20046
        void harfbuzzFont(void) const;

    // RVA: 0x4E6D | Ordinal: 20078
        void hasInternalCaching(void) const;

    // RVA: 0x4E7E | Ordinal: 20095
        void hasUnreliableGlyphOutline(void) const;

    // RVA: 0x5114 | Ordinal: 20757
        void lastRightBearing(struct QGlyphLayout const &, bool);

    // RVA: 0x516D | Ordinal: 20846
        void lineThickness(void) const;

    // RVA: 0x5193 | Ordinal: 20884
        void loadKerningPairs(struct QFixed);

    // RVA: 0x52BB | Ordinal: 21180
        void minLeftBearing(void) const;

    // RVA: 0x52C1 | Ordinal: 21186
        void minRightBearing(void) const;

    // RVA: 0x54F2 | Ordinal: 21747
        void properties(void) const;

    // RVA: 0x567E | Ordinal: 22143
        void recalcAdvances(struct QGlyphLayout *, class QFlags<enum QFontEngine::ShaperFlag>) const;

    // RVA: 0x56D9 | Ordinal: 22234
        void removeGlyphFromCache(unsigned int);

    // RVA: 0x57DF | Ordinal: 22496
        void scriptRequiresOpenType(enum QChar::Script);

    // RVA: 0x591B | Ordinal: 22812
        void setDefaultHintStyle(enum QFontEngine::HintStyle);

    // RVA: 0x59D8 | Ordinal: 23001
        void setGlyphCache(void const *, class QFontEngineGlyphCache *);

    // RVA: 0x5C8A | Ordinal: 23691
        void setUserData(class QVariant const &);

    // RVA: 0x5E42 | Ordinal: 24131
        void subPixelPositionForX(struct QFixed) const;

    // RVA: 0x5E6A | Ordinal: 24171
        void supportsScript(enum QChar::Script) const;

    // RVA: 0x5E6C | Ordinal: 24173
        void supportsSubPixelPositions(void) const;

    // RVA: 0x5E6F | Ordinal: 24176
        void supportsTransformation(class QTransform const &) const;

    // RVA: 0x5EA0 | Ordinal: 24225
        void synthesized(void) const;

    // RVA: 0x5F2C | Ordinal: 24365
        void tightBoundingBox(struct QGlyphLayout const &);

    // RVA: 0x6065 | Ordinal: 24678
        void type(void) const;

    // RVA: 0x6082 | Ordinal: 24707
        void underlinePosition(void) const;

    // RVA: 0x60E2 | Ordinal: 24803
        void userData(void) const;

    // RVA: 0x61C3 | Ordinal: 25028
        void xHeight(void) const;

    // RVA: 0x439 | Ordinal: 1082
        void _QFontEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTENGINE_HPP
