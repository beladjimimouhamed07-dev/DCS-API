#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFontMetrics
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFontMetrics
{
public:

    // RVA: 0x10A | Ordinal: 267
        void QFontMetrics(class QFontMetrics const &);

    // RVA: 0x10B | Ordinal: 268
        void QFontMetrics(class QFont const &);

    // RVA: 0x10C | Ordinal: 269
        void QFontMetrics(class QFont const &, class QPaintDevice *);

    // RVA: 0xA22 | Ordinal: 2595
        void ascent(void) const;

    // RVA: 0xA4E | Ordinal: 2639
        void averageCharWidth(void) const;

    // RVA: 0xAE9 | Ordinal: 2794
        void boundingRect(class QRect const &, int, class QString const &, int, int *) const;

    // RVA: 0xAEA | Ordinal: 2795
        void boundingRect(class QString const &) const;

    // RVA: 0xAEB | Ordinal: 2796
        void boundingRect(int, int, int, int, int, class QString const &, int, int *) const;

    // RVA: 0xAEC | Ordinal: 2797
        void boundingRect(class QChar) const;

    // RVA: 0xB4B | Ordinal: 2892
        void capHeight(void) const;

    // RVA: 0xB85 | Ordinal: 2950
        void charWidth(class QString const &, int) const;

    // RVA: 0xDFC | Ordinal: 3581
        void descent(void) const;

    // RVA: 0xF7D | Ordinal: 3966
        void elidedText(class QString const &, enum Qt::TextElideMode, int, int) const;

    // RVA: 0x10C4 | Ordinal: 4293
        void fontDpi(void) const;

    // RVA: 0x4E8E | Ordinal: 20111
        void height(void) const;

    // RVA: 0x4EB1 | Ordinal: 20146
        void horizontalAdvance(class QString const &, int) const;

    // RVA: 0x4EB2 | Ordinal: 20147
        void horizontalAdvance(class QChar) const;

    // RVA: 0x4EEF | Ordinal: 20208
        void inFont(class QChar) const;

    // RVA: 0x4EF1 | Ordinal: 20210
        void inFontUcs4(unsigned int) const;

    // RVA: 0x512D | Ordinal: 20782
        void leading(void) const;

    // RVA: 0x5133 | Ordinal: 20788
        void leftBearing(class QChar) const;

    // RVA: 0x516B | Ordinal: 20844
        void lineSpacing(void) const;

    // RVA: 0x5175 | Ordinal: 20854
        void lineWidth(void) const;

    // RVA: 0x5240 | Ordinal: 21057
        void maxWidth(void) const;

    // RVA: 0x52BE | Ordinal: 21183
        void minLeftBearing(void) const;

    // RVA: 0x52C4 | Ordinal: 21189
        void minRightBearing(void) const;

    // RVA: 0x53C5 | Ordinal: 21446
        void overlinePos(void) const;

    // RVA: 0x5761 | Ordinal: 22370
        void rightBearing(class QChar) const;

    // RVA: 0x5D2D | Ordinal: 23854
        void size(int, class QString const &, int, int *) const;

    // RVA: 0x5E1B | Ordinal: 24092
        void strikeOutPos(void) const;

    // RVA: 0x5E7F | Ordinal: 24192
        void swap(class QFontMetrics &);

    // RVA: 0x5F2E | Ordinal: 24367
        void tightBoundingRect(class QString const &) const;

    // RVA: 0x6080 | Ordinal: 24705
        void underlinePos(void) const;

    // RVA: 0x614A | Ordinal: 24907
        void width(class QString const &, int) const;

    // RVA: 0x614B | Ordinal: 24908
        void width(class QString const &, int, int) const;

    // RVA: 0x614C | Ordinal: 24909
        void width(class QChar) const;

    // RVA: 0x61C5 | Ordinal: 25030
        void xHeight(void) const;

    // RVA: 0x43E | Ordinal: 1087
        void _QFontMetrics(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFONTMETRICS_HPP
