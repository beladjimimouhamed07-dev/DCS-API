#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontMetricsF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontMetricsF
{
public:

    // RVA: 0x10D | Ordinal: 270
        void QFontMetricsF(class QFontMetricsF const &);

    // RVA: 0x10E | Ordinal: 271
        void QFontMetricsF(class QFont const &);

    // RVA: 0x10F | Ordinal: 272
        void QFontMetricsF(class QFont const &, class QPaintDevice *);

    // RVA: 0x110 | Ordinal: 273
        void QFontMetricsF(class QFontMetrics const &);

    // RVA: 0xA23 | Ordinal: 2596
        void ascent(void) const;

    // RVA: 0xA4F | Ordinal: 2640
        void averageCharWidth(void) const;

    // RVA: 0xAED | Ordinal: 2798
        void boundingRect(class QRectF const &, int, class QString const &, int, int *) const;

    // RVA: 0xAEE | Ordinal: 2799
        void boundingRect(class QString const &) const;

    // RVA: 0xAEF | Ordinal: 2800
        void boundingRect(class QChar) const;

    // RVA: 0xB4C | Ordinal: 2893
        void capHeight(void) const;

    // RVA: 0xDFD | Ordinal: 3582
        void descent(void) const;

    // RVA: 0xF7E | Ordinal: 3967
        void elidedText(class QString const &, enum Qt::TextElideMode, double, int) const;

    // RVA: 0x10C5 | Ordinal: 4294
        void fontDpi(void) const;

    // RVA: 0x4E8F | Ordinal: 20112
        void height(void) const;

    // RVA: 0x4EB3 | Ordinal: 20148
        void horizontalAdvance(class QString const &, int) const;

    // RVA: 0x4EB4 | Ordinal: 20149
        void horizontalAdvance(class QChar) const;

    // RVA: 0x4EF0 | Ordinal: 20209
        void inFont(class QChar) const;

    // RVA: 0x4EF2 | Ordinal: 20211
        void inFontUcs4(unsigned int) const;

    // RVA: 0x512E | Ordinal: 20783
        void leading(void) const;

    // RVA: 0x5134 | Ordinal: 20789
        void leftBearing(class QChar) const;

    // RVA: 0x516C | Ordinal: 20845
        void lineSpacing(void) const;

    // RVA: 0x5176 | Ordinal: 20855
        void lineWidth(void) const;

    // RVA: 0x5241 | Ordinal: 21058
        void maxWidth(void) const;

    // RVA: 0x52BF | Ordinal: 21184
        void minLeftBearing(void) const;

    // RVA: 0x52C5 | Ordinal: 21190
        void minRightBearing(void) const;

    // RVA: 0x53C6 | Ordinal: 21447
        void overlinePos(void) const;

    // RVA: 0x5762 | Ordinal: 22371
        void rightBearing(class QChar) const;

    // RVA: 0x5D2E | Ordinal: 23855
        void size(int, class QString const &, int, int *) const;

    // RVA: 0x5E1C | Ordinal: 24093
        void strikeOutPos(void) const;

    // RVA: 0x5E80 | Ordinal: 24193
        void swap(class QFontMetricsF &);

    // RVA: 0x5F2F | Ordinal: 24368
        void tightBoundingRect(class QString const &) const;

    // RVA: 0x6081 | Ordinal: 24706
        void underlinePos(void) const;

    // RVA: 0x614D | Ordinal: 24910
        void width(class QString const &) const;

    // RVA: 0x614E | Ordinal: 24911
        void width(class QChar) const;

    // RVA: 0x61C6 | Ordinal: 25031
        void xHeight(void) const;

    // RVA: 0x43F | Ordinal: 1088
        void _QFontMetricsF(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTMETRICSF_HPP
