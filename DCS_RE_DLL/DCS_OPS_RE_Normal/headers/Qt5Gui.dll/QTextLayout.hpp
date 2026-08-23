#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextLayout
{
public:

    // RVA: 0x366 | Ordinal: 871
        void QTextLayout(class QTextEngine *);

    // RVA: 0x367 | Ordinal: 872
        void QTextLayout(class QString const &);

    // RVA: 0x368 | Ordinal: 873
        void QTextLayout(class QString const &, class QFont const &, class QPaintDevice *);

    // RVA: 0x369 | Ordinal: 874
        void QTextLayout(class QTextBlock const &);

    // RVA: 0x36A | Ordinal: 875
        void QTextLayout(void);

    // RVA: 0x9AA | Ordinal: 2475
        void additionalFormats(void) const;

    // RVA: 0xA79 | Ordinal: 2682
        void beginLayout(void);

    // RVA: 0xAFB | Ordinal: 2812
        void boundingRect(void) const;

    // RVA: 0xB29 | Ordinal: 2858
        void cacheEnabled(void) const;

    // RVA: 0xBAB | Ordinal: 2988
        void clearAdditionalFormats(void);

    // RVA: 0xBB4 | Ordinal: 2997
        void clearFormats(void);

    // RVA: 0xBB9 | Ordinal: 3002
        void clearLayout(void);

    // RVA: 0xCA9 | Ordinal: 3242
        void createLine(void);

    // RVA: 0xCFE | Ordinal: 3327
        void cursorMoveStyle(void) const;

    // RVA: 0xE9F | Ordinal: 3744
        void draw(class QPainter *, class QPointF const &, class QVector<struct QTextLayout::FormatRange> const &, class QRectF const &) const;

    // RVA: 0xEB1 | Ordinal: 3762
        void drawCursor(class QPainter *, class QPointF const &, int) const;

    // RVA: 0xEB2 | Ordinal: 3763
        void drawCursor(class QPainter *, class QPointF const &, int, int) const;

    // RVA: 0xFB8 | Ordinal: 4025
        void endLayout(void);

    // RVA: 0xFC5 | Ordinal: 4038
        void engine(void) const;

    // RVA: 0x10BE | Ordinal: 4287
        void font(void) const;

    // RVA: 0x110E | Ordinal: 4367
        void formats(void) const;

    // RVA: 0x4E00 | Ordinal: 19969
        void glyphRuns(int, int) const;

    // RVA: 0x50B9 | Ordinal: 20666
        void isValidCursorPosition(int) const;

    // RVA: 0x513A | Ordinal: 20795
        void leftCursorPosition(int) const;

    // RVA: 0x5161 | Ordinal: 20834
        void lineAt(int) const;

    // RVA: 0x5164 | Ordinal: 20837
        void lineCount(void) const;

    // RVA: 0x5165 | Ordinal: 20838
        void lineForTextPosition(int) const;

    // RVA: 0x524C | Ordinal: 21069
        void maximumWidth(void) const;

    // RVA: 0x52CD | Ordinal: 21198
        void minimumWidth(void) const;

    // RVA: 0x5348 | Ordinal: 21321
        void nextCursorPosition(int, enum QTextLayout::CursorMode) const;

    // RVA: 0x549F | Ordinal: 21664
        void position(void) const;

    // RVA: 0x54AF | Ordinal: 21680
        void preeditAreaPosition(void) const;

    // RVA: 0x54B1 | Ordinal: 21682
        void preeditAreaText(void) const;

    // RVA: 0x54BD | Ordinal: 21694
        void previousCursorPosition(int, enum QTextLayout::CursorMode) const;

    // RVA: 0x5768 | Ordinal: 22377
        void rightCursorPosition(int) const;

    // RVA: 0x5818 | Ordinal: 22553
        void setAdditionalFormats(class QList<struct QTextLayout::FormatRange> const &);

    // RVA: 0x588F | Ordinal: 22672
        void setCacheEnabled(bool);

    // RVA: 0x58ED | Ordinal: 22766
        void setCursorMoveStyle(enum Qt::CursorMoveStyle);

    // RVA: 0x5987 | Ordinal: 22920
        void setFlags(int);

    // RVA: 0x5997 | Ordinal: 22936
        void setFont(class QFont const &);

    // RVA: 0x59C4 | Ordinal: 22981
        void setFormats(class QVector<struct QTextLayout::FormatRange> const &);

    // RVA: 0x5B0C | Ordinal: 23309
        void setPosition(class QPointF const &);

    // RVA: 0x5B13 | Ordinal: 23316
        void setPreeditArea(int, class QString const &);

    // RVA: 0x5B28 | Ordinal: 23337
        void setRawFont(class QRawFont const &);

    // RVA: 0x5BF2 | Ordinal: 23539
        void setText(class QString const &);

    // RVA: 0x5BF8 | Ordinal: 23545
        void setTextOption(class QTextOption const &);

    // RVA: 0x5EF8 | Ordinal: 24313
        void text(void) const;

    // RVA: 0x5F0D | Ordinal: 24334
        void textOption(void) const;

    // RVA: 0x53D | Ordinal: 1342
        void _QTextLayout(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTLAYOUT_HPP
