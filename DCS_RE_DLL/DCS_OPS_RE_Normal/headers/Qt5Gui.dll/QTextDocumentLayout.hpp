#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextDocumentLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextDocumentLayout
{
public:

    // RVA: 0x348 | Ordinal: 841
        void QTextDocumentLayout(class QTextDocument *);

    // RVA: 0xAAE | Ordinal: 2735
        void blockBoundingRect(class QTextBlock const &) const;

    // RVA: 0xC47 | Ordinal: 3144
        void contentHasAlignment(void) const;

    // RVA: 0xD06 | Ordinal: 3335
        void cursorWidth(void) const;

    // RVA: 0xD8A | Ordinal: 3467
        void d_func(void);

    // RVA: 0xD8B | Ordinal: 3468
        void d_func(void) const;

    // RVA: 0xE77 | Ordinal: 3704
        void doLayout(int, int, int);

    // RVA: 0xE84 | Ordinal: 3717
        void documentChanged(int, int, int);

    // RVA: 0xE88 | Ordinal: 3721
        void documentSize(void) const;

    // RVA: 0xE9E | Ordinal: 3743
        void draw(class QPainter *, struct QAbstractTextDocumentLayout::PaintContext const &);

    // RVA: 0xED4 | Ordinal: 3797
        void drawInlineObject(class QPainter *, class QRectF const &, class QTextInlineObject, int, class QTextFormat const &);

    // RVA: 0xF6D | Ordinal: 3950
        void dynamicDocumentSize(void) const;

    // RVA: 0xF6E | Ordinal: 3951
        void dynamicPageCount(void) const;

    // RVA: 0xFD4 | Ordinal: 4053
        void ensureLayouted(double);

    // RVA: 0x1116 | Ordinal: 4375
        void frameBoundingRect(class QTextFrame *) const;

    // RVA: 0x4EB0 | Ordinal: 20145
        void hitTest(class QPointF const &, enum Qt::HitTestAccuracy) const;

    // RVA: 0x4ED8 | Ordinal: 20185
        void idealWidth(void) const;

    // RVA: 0x5127 | Ordinal: 20776
        void layoutFinished(void);

    // RVA: 0x5128 | Ordinal: 20777
        void layoutStatus(void) const;

    // RVA: 0x5299 | Ordinal: 21146
        void metaObject(void) const;

    // RVA: 0x53D5 | Ordinal: 21462
        void pageCount(void) const;

    // RVA: 0x54A7 | Ordinal: 21672
        void positionInlineObject(class QTextInlineObject, int, class QTextFormat const &);

    // RVA: 0x55B0 | Ordinal: 21937
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55F4 | Ordinal: 22005
        void qt_metacast(char const *);

    // RVA: 0x564B | Ordinal: 22092
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x572A | Ordinal: 22315
        void resizeInlineObject(class QTextInlineObject, int, class QTextFormat const &);

    // RVA: 0x58F0 | Ordinal: 22769
        void setCursorWidth(int);

    // RVA: 0x597A | Ordinal: 22907
        void setFixedColumnWidth(int);

    // RVA: 0x5CA8 | Ordinal: 23721
        void setViewport(class QRectF const &);

    // RVA: 0x5EAE | Ordinal: 24239
        void tableBoundingRect(class QTextTable *) const;

    // RVA: 0x5EAF | Ordinal: 24240
        void tableCellBoundingRect(class QTextTable *, class QTextTableCell const &) const;

    // RVA: 0x5F31 | Ordinal: 24370
        void timerEvent(class QTimerEvent *);

    // RVA: 0x5FD7 | Ordinal: 24536
        void tr(char const *, char const *, int);

    // RVA: 0x601E | Ordinal: 24607
        void trUtf8(char const *, char const *, int);

    // RVA: 0x532 | Ordinal: 1331
        void _QTextDocumentLayout(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTDOCUMENTLAYOUT_HPP
