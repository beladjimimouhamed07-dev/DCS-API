#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QAbstractTextDocumentLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractTextDocumentLayout
{
public:

    // RVA: 0x5A | Ordinal: 91
        void QAbstractTextDocumentLayout(class QAbstractTextDocumentLayoutPrivate &, class QTextDocument *);

    // RVA: 0x5B | Ordinal: 92
        void QAbstractTextDocumentLayout(class QTextDocument *);

    // RVA: 0x9E6 | Ordinal: 2535
        void anchorAt(class QPointF const &) const;

    // RVA: 0xAC1 | Ordinal: 2754
        void blockWithMarkerAt(class QPointF const &) const;

    // RVA: 0xD13 | Ordinal: 3348
        void d_func(void);

    // RVA: 0xD14 | Ordinal: 3349
        void d_func(void) const;

    // RVA: 0xE7C | Ordinal: 3709
        void document(void) const;

    // RVA: 0xE89 | Ordinal: 3722
        void documentSizeChanged(class QSizeF const &);

    // RVA: 0xED3 | Ordinal: 3796
        void drawInlineObject(class QPainter *, class QRectF const &, class QTextInlineObject, int, class QTextFormat const &);

    // RVA: 0x10E8 | Ordinal: 4329
        void format(int);

    // RVA: 0x1103 | Ordinal: 4356
        void formatAt(class QPointF const &) const;

    // RVA: 0x1107 | Ordinal: 4360
        void formatIndex(int);

    // RVA: 0x4E4B | Ordinal: 20044
        void handlerForObject(int) const;

    // RVA: 0x4EE0 | Ordinal: 20193
        void imageAt(class QPointF const &) const;

    // RVA: 0x525D | Ordinal: 21086
        void metaObject(void) const;

    // RVA: 0x53D6 | Ordinal: 21463
        void pageCountChanged(int);

    // RVA: 0x53E2 | Ordinal: 21475
        void paintDevice(void) const;

    // RVA: 0x54A6 | Ordinal: 21671
        void positionInlineObject(class QTextInlineObject, int, class QTextFormat const &);

    // RVA: 0x5574 | Ordinal: 21877
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55B8 | Ordinal: 21945
        void qt_metacast(char const *);

    // RVA: 0x560E | Ordinal: 22031
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x56A9 | Ordinal: 22186
        void registerHandler(int, class QObject *);

    // RVA: 0x5729 | Ordinal: 22314
        void resizeInlineObject(class QTextInlineObject, int, class QTextFormat const &);

    // RVA: 0x5ADC | Ordinal: 23261
        void setPaintDevice(class QPaintDevice *);

    // RVA: 0x5F98 | Ordinal: 24473
        void tr(char const *, char const *, int);

    // RVA: 0x5FDF | Ordinal: 24544
        void trUtf8(char const *, char const *, int);

    // RVA: 0x60A9 | Ordinal: 24746
        void unregisterHandler(int, class QObject *);

    // RVA: 0x60AE | Ordinal: 24751
        void update(class QRectF const &);

    // RVA: 0x60B8 | Ordinal: 24761
        void updateBlock(class QTextBlock const &);

    // RVA: 0x3F9 | Ordinal: 1018
        void _QAbstractTextDocumentLayout(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QABSTRACTTEXTDOCUMENTLAYOUT_HPP
