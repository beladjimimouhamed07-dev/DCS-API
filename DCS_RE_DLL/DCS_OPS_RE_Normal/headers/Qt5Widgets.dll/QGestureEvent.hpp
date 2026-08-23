#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGestureEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGestureEvent
{
public:

    // RVA: 0x5F | Ordinal: 96
        void QGestureEvent(class QGestureEvent const &);

    // RVA: 0x60 | Ordinal: 97
        void QGestureEvent(class QList<class QGesture *> const &);

    // RVA: 0x4E1 | Ordinal: 1250
        void accept(class QGesture *);

    // RVA: 0x4E2 | Ordinal: 1251
        void accept(enum Qt::GestureType);

    // RVA: 0x520 | Ordinal: 1313
        void activeGestures(void) const;

    // RVA: 0x699 | Ordinal: 1690
        void canceledGestures(void) const;

    // RVA: 0xC85 | Ordinal: 3206
        void gesture(enum Qt::GestureType) const;

    // RVA: 0xC88 | Ordinal: 3209
        void gestures(void) const;

    // RVA: 0xDA3 | Ordinal: 3492
        void ignore(class QGesture *);

    // RVA: 0xDA4 | Ordinal: 3493
        void ignore(enum Qt::GestureType);

    // RVA: 0xE9E | Ordinal: 3743
        void isAccepted(class QGesture *) const;

    // RVA: 0xE9F | Ordinal: 3744
        void isAccepted(enum Qt::GestureType) const;

    // RVA: 0x10A8 | Ordinal: 4265
        void mapToGraphicsScene(class QPointF const &) const;

    // RVA: 0x17EC | Ordinal: 6125
        void setAccepted(class QGesture *, bool);

    // RVA: 0x17ED | Ordinal: 6126
        void setAccepted(enum Qt::GestureType, bool);

    // RVA: 0x1D32 | Ordinal: 7475
        void setWidget(class QWidget *);

    // RVA: 0x22F5 | Ordinal: 8950
        void widget(void) const;

    // RVA: 0x1E7 | Ordinal: 488
        void _QGestureEvent(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGESTUREEVENT_HPP
