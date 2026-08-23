#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTouchEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTouchEvent
{
public:

    // RVA: 0x397 | Ordinal: 920
        void QTouchEvent(class QTouchEvent const &);

    // RVA: 0x398 | Ordinal: 921
        void QTouchEvent(enum QEvent::Type, class QTouchDevice *, class QFlags<enum Qt::KeyboardModifier>, class QFlags<enum Qt::TouchPointState>, class QList<class QTouchEvent::TouchPoint> const &);

    // RVA: 0xE42 | Ordinal: 3651
        void device(void) const;

    // RVA: 0xE5A | Ordinal: 3675
        void deviceType(void) const;

    // RVA: 0x5941 | Ordinal: 22850
        void setDevice(class QTouchDevice *);

    // RVA: 0x5BE8 | Ordinal: 23529
        void setTarget(class QObject *);

    // RVA: 0x5C18 | Ordinal: 23577
        void setTouchPointStates(class QFlags<enum Qt::TouchPointState>);

    // RVA: 0x5C19 | Ordinal: 23578
        void setTouchPoints(class QList<class QTouchEvent::TouchPoint> const &);

    // RVA: 0x5CC2 | Ordinal: 23747
        void setWindow(class QWindow *);

    // RVA: 0x5EC9 | Ordinal: 24266
        void target(void) const;

    // RVA: 0x5F96 | Ordinal: 24471
        void touchPointStates(void) const;

    // RVA: 0x5F97 | Ordinal: 24472
        void touchPoints(void) const;

    // RVA: 0x616C | Ordinal: 24941
        void window(void) const;

    // RVA: 0x54E | Ordinal: 1359
        void _QTouchEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTOUCHEVENT_HPP
