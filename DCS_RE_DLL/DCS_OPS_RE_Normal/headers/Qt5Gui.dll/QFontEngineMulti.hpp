#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontEngineMulti
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontEngineMulti
{
public:

    // RVA: 0x106 | Ordinal: 263
        void QFontEngineMulti(class QFontEngine *, int, class QStringList const &);

    // RVA: 0x983 | Ordinal: 2436
        void addOutlineToPath(double, double, struct QGlyphLayout const &, class QPainterPath *, class QFlags<enum QTextItem::RenderFlag>);

    // RVA: 0x9DA | Ordinal: 2523
        void alphaMapForGlyph(unsigned int);

    // RVA: 0x9DB | Ordinal: 2524
        void alphaMapForGlyph(unsigned int, class QTransform const &);

    // RVA: 0x9DC | Ordinal: 2525
        void alphaMapForGlyph(unsigned int, struct QFixed);

    // RVA: 0x9DD | Ordinal: 2526
        void alphaMapForGlyph(unsigned int, struct QFixed, class QTransform const &);

    // RVA: 0x9E2 | Ordinal: 2531
        void alphaRGBMapForGlyph(unsigned int, struct QFixed, class QTransform const &);

    // RVA: 0xA20 | Ordinal: 2593
        void ascent(void) const;

    // RVA: 0xA4D | Ordinal: 2638
        void averageCharWidth(void) const;

    // RVA: 0xAE4 | Ordinal: 2789
        void boundingBox(struct QGlyphLayout const &);

    // RVA: 0xAE5 | Ordinal: 2790
        void boundingBox(unsigned int);

    // RVA: 0xB3F | Ordinal: 2880
        void canRender(class QChar const *, int) const;

    // RVA: 0xB49 | Ordinal: 2890
        void capHeight(void) const;

    // RVA: 0xCB1 | Ordinal: 3250
        void createMultiFontEngine(class QFontEngine *, int);

    // RVA: 0xDFA | Ordinal: 3579
        void descent(void) const;

    // RVA: 0xE76 | Ordinal: 3703
        void doKerning(struct QGlyphLayout *, class QFlags<enum QFontEngine::ShaperFlag>) const;

    // RVA: 0xFC4 | Ordinal: 4037
        void engine(int) const;

    // RVA: 0xFD0 | Ordinal: 4049
        void ensureEngineAt(int);

    // RVA: 0xFD1 | Ordinal: 4050
        void ensureFallbackFamiliesQueried(void);

    // RVA: 0x101A | Ordinal: 4123
        void fallbackFamilyAt(int) const;

    // RVA: 0x101B | Ordinal: 4124
        void fallbackFamilyCount(void) const;

    // RVA: 0x11A2 | Ordinal: 4515
        void getGlyphBearings(unsigned int, double *, double *);

    // RVA: 0x4DF7 | Ordinal: 19960
        void glyphIndex(unsigned int) const;

    // RVA: 0x4EA6 | Ordinal: 20135
        void highByte(unsigned int);

    // RVA: 0x512B | Ordinal: 20780
        void leading(void) const;

    // RVA: 0x516E | Ordinal: 20847
        void lineThickness(void) const;

    // RVA: 0x5189 | Ordinal: 20874
        void loadEngine(int);

    // RVA: 0x5236 | Ordinal: 21047
        void maxCharWidth(void) const;

    // RVA: 0x52BC | Ordinal: 21181
        void minLeftBearing(void) const;

    // RVA: 0x52C2 | Ordinal: 21187
        void minRightBearing(void) const;

    // RVA: 0x567F | Ordinal: 22144
        void recalcAdvances(struct QGlyphLayout *, class QFlags<enum QFontEngine::ShaperFlag>) const;

    // RVA: 0x5963 | Ordinal: 22884
        void setFallbackFamiliesList(class QStringList const &);

    // RVA: 0x5D12 | Ordinal: 23827
        void shouldLoadFontEngineForCharacter(int, unsigned int) const;

    // RVA: 0x5E1E | Ordinal: 24095
        void stringToCMap(class QChar const *, int, struct QGlyphLayout *, int *, class QFlags<enum QFontEngine::ShaperFlag>) const;

    // RVA: 0x6083 | Ordinal: 24708
        void underlinePosition(void) const;

    // RVA: 0x61C4 | Ordinal: 25029
        void xHeight(void) const;

    // RVA: 0x43B | Ordinal: 1084
        void _QFontEngineMulti(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTENGINEMULTI_HPP
