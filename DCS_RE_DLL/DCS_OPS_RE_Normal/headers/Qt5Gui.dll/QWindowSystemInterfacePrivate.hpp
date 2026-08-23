#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QWindowSystemInterfacePrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWindowSystemInterfacePrivate
{
public:

    // RVA: 0xBBE | Ordinal: 3007
        void clearPointIdMap(void);

    // RVA: 0x1155 | Ordinal: 4438
        void fromNativeTouchPoints(class QList<struct QWindowSystemInterface::TouchPoint> const &, class QWindow const *, unsigned char, enum QEvent::Type *);

    // RVA: 0x11A8 | Ordinal: 4521
        void getNonUserInputWindowSystemEvent(void);

    // RVA: 0x11B7 | Ordinal: 4536
        void getWindowSystemEvent(void);

    // RVA: 0x4F83 | Ordinal: 20356
        void installWindowSystemEventHandler(class QWindowSystemEventHandler *);

    // RVA: 0x5357 | Ordinal: 21336
        void nonUserInputEventsQueued(void);

    // RVA: 0x5431 | Ordinal: 21554
        void peekWindowSystemEvent(enum QWindowSystemInterfacePrivate::EventType);

    // RVA: 0x56EF | Ordinal: 22256
        void removeWindowSystemEvent(class QWindowSystemInterfacePrivate::WindowSystemEvent *);

    // RVA: 0x56F0 | Ordinal: 22257
        void removeWindowSystemEventhandler(class QWindowSystemEventHandler *);

    // RVA: 0x5F5A | Ordinal: 24411
        void toNativeTouchPoints(class QList<class QTouchEvent::TouchPoint> const &, class QWindow const *);

    // RVA: 0x6183 | Ordinal: 24964
        void windowSystemEventsQueued(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QWINDOWSYSTEMINTERFACEPRIVATE_HPP
