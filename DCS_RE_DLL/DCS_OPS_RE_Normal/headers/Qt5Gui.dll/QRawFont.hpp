#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QRawFont
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRawFont
{
public:

    // RVA: 0x283 | Ordinal: 644
        void QRawFont(class QRawFont const &);

    // RVA: 0x284 | Ordinal: 645
        void QRawFont(class QByteArray const &, double, enum QFont::HintingPreference);

    // RVA: 0x285 | Ordinal: 646
        void QRawFont(class QString const &, double, enum QFont::HintingPreference);

    // RVA: 0x286 | Ordinal: 647
        void QRawFont(void);

    // RVA: 0x9B6 | Ordinal: 2487
        void advancesForGlyphIndexes(class QVector<unsigned int> const &) const;

    // RVA: 0x9B7 | Ordinal: 2488
        void advancesForGlyphIndexes(class QVector<unsigned int> const &, class QFlags<enum QRawFont::LayoutFlag>) const;

    // RVA: 0x9B8 | Ordinal: 2489
        void advancesForGlyphIndexes(unsigned int const *, class QPointF *, int) const;

    // RVA: 0x9B9 | Ordinal: 2490
        void advancesForGlyphIndexes(unsigned int const *, class QPointF *, int, class QFlags<enum QRawFont::LayoutFlag>) const;

    // RVA: 0x9DF | Ordinal: 2528
        void alphaMapForGlyph(unsigned int, enum QRawFont::AntialiasingType, class QTransform const &) const;

    // RVA: 0xA24 | Ordinal: 2597
        void ascent(void) const;

    // RVA: 0xA50 | Ordinal: 2641
        void averageCharWidth(void) const;

    // RVA: 0xAF9 | Ordinal: 2810
        void boundingRect(unsigned int) const;

    // RVA: 0xB4D | Ordinal: 2894
        void capHeight(void) const;

    // RVA: 0xDFE | Ordinal: 3583
        void descent(void) const;

    // RVA: 0x1025 | Ordinal: 4134
        void familyName(void) const;

    // RVA: 0x10DE | Ordinal: 4319
        void fontTable(char const *) const;

    // RVA: 0x113A | Ordinal: 4411
        void fromFont(class QFont const &, enum QFontDatabase::WritingSystem);

    // RVA: 0x4DFA | Ordinal: 19963
        void glyphIndexesForChars(class QChar const *, int, unsigned int *, int *) const;

    // RVA: 0x4DFB | Ordinal: 19964
        void glyphIndexesForString(class QString const &) const;

    // RVA: 0x4EAD | Ordinal: 20142
        void hintingPreference(void) const;

    // RVA: 0x50A2 | Ordinal: 20643
        void isValid(void) const;

    // RVA: 0x512F | Ordinal: 20784
        void leading(void) const;

    // RVA: 0x5170 | Ordinal: 20849
        void lineThickness(void) const;

    // RVA: 0x518E | Ordinal: 20879
        void loadFromData(class QByteArray const &, double, enum QFont::HintingPreference);

    // RVA: 0x5190 | Ordinal: 20881
        void loadFromFile(class QString const &, double, enum QFont::HintingPreference);

    // RVA: 0x5238 | Ordinal: 21049
        void maxCharWidth(void) const;

    // RVA: 0x542D | Ordinal: 21550
        void pathForGlyph(unsigned int) const;

    // RVA: 0x5456 | Ordinal: 21591
        void pixelSize(void) const;

    // RVA: 0x5AF5 | Ordinal: 23286
        void setPixelSize(double);

    // RVA: 0x5E2E | Ordinal: 24111
        void style(void) const;

    // RVA: 0x5E39 | Ordinal: 24122
        void styleName(void) const;

    // RVA: 0x5E5D | Ordinal: 24158
        void supportedWritingSystems(void) const;

    // RVA: 0x5E60 | Ordinal: 24161
        void supportsCharacter(unsigned int) const;

    // RVA: 0x5E61 | Ordinal: 24162
        void supportsCharacter(class QChar) const;

    // RVA: 0x5E90 | Ordinal: 24209
        void swap(class QRawFont &);

    // RVA: 0x6085 | Ordinal: 24710
        void underlinePosition(void) const;

    // RVA: 0x60A1 | Ordinal: 24738
        void unitsPerEm(void) const;

    // RVA: 0x6143 | Ordinal: 24900
        void weight(void) const;

    // RVA: 0x61C7 | Ordinal: 25032
        void xHeight(void) const;

    // RVA: 0x4EE | Ordinal: 1263
        void _QRawFont(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QRAWFONT_HPP
