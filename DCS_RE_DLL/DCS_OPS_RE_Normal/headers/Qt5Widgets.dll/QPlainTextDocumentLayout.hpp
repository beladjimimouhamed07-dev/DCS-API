#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QPlainTextDocumentLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPlainTextDocumentLayout
{
public:

    // RVA: 0xE6 | Ordinal: 231
        void QPlainTextDocumentLayout(class QTextDocument *);

    // RVA: 0x62E | Ordinal: 1583
        void blockBoundingRect(class QTextBlock const &) const;

    // RVA: 0x635 | Ordinal: 1590
        void blockWidth(class QTextBlock const &);

    // RVA: 0x894 | Ordinal: 2197
        void cursorWidth(void) const;

    // RVA: 0x97B | Ordinal: 2428
        void d_func(void);

    // RVA: 0x97C | Ordinal: 2429
        void d_func(void) const;

    // RVA: 0xA43 | Ordinal: 2628
        void documentChanged(int, int, int);

    // RVA: 0xA48 | Ordinal: 2633
        void documentSize(void) const;

    // RVA: 0xA94 | Ordinal: 2709
        void draw(class QPainter *, struct QAbstractTextDocumentLayout::PaintContext const &);

    // RVA: 0xB15 | Ordinal: 2838
        void ensureBlockLayout(class QTextBlock const &) const;

    // RVA: 0xC6C | Ordinal: 3181
        void frameBoundingRect(class QTextFrame *) const;

    // RVA: 0xD4D | Ordinal: 3406
        void hitTest(class QPointF const &, enum Qt::HitTestAccuracy) const;

    // RVA: 0x1041 | Ordinal: 4162
        void layoutBlock(class QTextBlock const &);

    // RVA: 0x1167 | Ordinal: 4456
        void metaObject(void) const;

    // RVA: 0x1309 | Ordinal: 4874
        void pageCount(void) const;

    // RVA: 0x13D5 | Ordinal: 5078
        void priv(void) const;

    // RVA: 0x1480 | Ordinal: 5249
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1513 | Ordinal: 5396
        void qt_metacast(char const *);

    // RVA: 0x15A9 | Ordinal: 5546
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1667 | Ordinal: 5736
        void requestUpdate(void);

    // RVA: 0x18DF | Ordinal: 6368
        void setCursorWidth(int);

    // RVA: 0x1CBE | Ordinal: 7359
        void setTextWidth(double);

    // RVA: 0x200E | Ordinal: 8207
        void textWidth(void) const;

    // RVA: 0x20CF | Ordinal: 8400
        void tr(char const *, char const *, int);

    // RVA: 0x2162 | Ordinal: 8547
        void trUtf8(char const *, char const *, int);

    // RVA: 0x239 | Ordinal: 570
        void _QPlainTextDocumentLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QPLAINTEXTDOCUMENTLAYOUT_HPP
