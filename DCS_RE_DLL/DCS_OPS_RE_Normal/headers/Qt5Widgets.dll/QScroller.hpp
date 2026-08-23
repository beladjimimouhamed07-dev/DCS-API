#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QScroller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QScroller
{
public:

    // RVA: 0xFC | Ordinal: 253
        void QScroller(class QObject *);

    // RVA: 0x524 | Ordinal: 1317
        void activeScrollers(void);

    // RVA: 0x98F | Ordinal: 2448
        void d_func(void);

    // RVA: 0x990 | Ordinal: 2449
        void d_func(void) const;

    // RVA: 0xB24 | Ordinal: 2853
        void ensureVisible(class QRectF const &, double, double);

    // RVA: 0xB25 | Ordinal: 2854
        void ensureVisible(class QRectF const &, double, double, int);

    // RVA: 0xBD0 | Ordinal: 3025
        void finalPosition(void) const;

    // RVA: 0xCBB | Ordinal: 3260
        void grabGesture(class QObject *, enum QScroller::ScrollerGestureType);

    // RVA: 0xCC7 | Ordinal: 3272
        void grabbedGesture(class QObject *);

    // RVA: 0xCD3 | Ordinal: 3284
        void handleInput(enum QScroller::Input, class QPointF const &, __int64);

    // RVA: 0xCF4 | Ordinal: 3317
        void hasScroller(class QObject *);

    // RVA: 0x1173 | Ordinal: 4468
        void metaObject(void) const;

    // RVA: 0x1387 | Ordinal: 5000
        void pixelPerMeter(void) const;

    // RVA: 0x148C | Ordinal: 5261
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x151F | Ordinal: 5408
        void qt_metacast(char const *);

    // RVA: 0x15B5 | Ordinal: 5558
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1669 | Ordinal: 5738
        void resendPrepareEvent(void);

    // RVA: 0x1767 | Ordinal: 5992
        void scrollTo(class QPointF const &);

    // RVA: 0x1768 | Ordinal: 5993
        void scrollTo(class QPointF const &, int);

    // RVA: 0x1773 | Ordinal: 6004
        void scroller(class QObject *);

    // RVA: 0x1774 | Ordinal: 6005
        void scroller(class QObject const *);

    // RVA: 0x1775 | Ordinal: 6006
        void scrollerProperties(void) const;

    // RVA: 0x1776 | Ordinal: 6007
        void scrollerPropertiesChanged(class QScrollerProperties const &);

    // RVA: 0x1BD0 | Ordinal: 7121
        void setScrollerProperties(class QScrollerProperties const &);

    // RVA: 0x1C1F | Ordinal: 7200
        void setSnapPositionsX(class QList<double> const &);

    // RVA: 0x1C20 | Ordinal: 7201
        void setSnapPositionsX(double, double);

    // RVA: 0x1C21 | Ordinal: 7202
        void setSnapPositionsY(class QList<double> const &);

    // RVA: 0x1C22 | Ordinal: 7203
        void setSnapPositionsY(double, double);

    // RVA: 0x1E8A | Ordinal: 7819
        void state(void) const;

    // RVA: 0x1E8C | Ordinal: 7821
        void stateChanged(enum QScroller::State);

    // RVA: 0x1F33 | Ordinal: 7988
        void stop(void);

    // RVA: 0x1FC3 | Ordinal: 8132
        void target(void) const;

    // RVA: 0x20DB | Ordinal: 8412
        void tr(char const *, char const *, int);

    // RVA: 0x216E | Ordinal: 8559
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21DE | Ordinal: 8671
        void ungrabGesture(class QObject *);

    // RVA: 0x227A | Ordinal: 8827
        void velocity(void) const;

    // RVA: 0x245 | Ordinal: 582
        void _QScroller(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSCROLLER_HPP
