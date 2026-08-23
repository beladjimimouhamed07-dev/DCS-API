#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsEffect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsEffect
{
public:

    // RVA: 0x68 | Ordinal: 105
        void QGraphicsEffect(class QGraphicsEffectPrivate &, class QObject *);

    // RVA: 0x69 | Ordinal: 106
        void QGraphicsEffect(class QObject *);

    // RVA: 0x641 | Ordinal: 1602
        void boundingRect(void) const;

    // RVA: 0x64F | Ordinal: 1616
        void boundingRectFor(class QRectF const &) const;

    // RVA: 0x901 | Ordinal: 2306
        void d_func(void);

    // RVA: 0x902 | Ordinal: 2307
        void d_func(void) const;

    // RVA: 0xACB | Ordinal: 2764
        void drawSource(class QPainter *);

    // RVA: 0xB0A | Ordinal: 2827
        void enabledChanged(bool);

    // RVA: 0xED8 | Ordinal: 3801
        void isEnabled(void) const;

    // RVA: 0x113B | Ordinal: 4412
        void metaObject(void) const;

    // RVA: 0x1454 | Ordinal: 5205
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14E7 | Ordinal: 5352
        void qt_metacast(char const *);

    // RVA: 0x157D | Ordinal: 5502
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1947 | Ordinal: 6472
        void setEnabled(bool);

    // RVA: 0x1E44 | Ordinal: 7749
        void source(void) const;

    // RVA: 0x1E48 | Ordinal: 7753
        void sourceBoundingRect(enum Qt::CoordinateSystem) const;

    // RVA: 0x1E49 | Ordinal: 7754
        void sourceChanged(class QFlags<enum QGraphicsEffect::ChangeFlag>);

    // RVA: 0x1E4B | Ordinal: 7756
        void sourceIsPixmap(void) const;

    // RVA: 0x1E4C | Ordinal: 7757
        void sourcePixmap(enum Qt::CoordinateSystem, class QPoint *, enum QGraphicsEffect::PixmapPadMode) const;

    // RVA: 0x20A3 | Ordinal: 8356
        void tr(char const *, char const *, int);

    // RVA: 0x2136 | Ordinal: 8503
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2201 | Ordinal: 8706
        void update(void);

    // RVA: 0x2211 | Ordinal: 8722
        void updateBoundingRect(void);

    // RVA: 0x1EE | Ordinal: 495
        void _QGraphicsEffect(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSEFFECT_HPP
