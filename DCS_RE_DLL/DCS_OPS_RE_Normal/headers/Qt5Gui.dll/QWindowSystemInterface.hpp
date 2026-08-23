#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QWindowSystemInterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWindowSystemInterface
{
public:

    // RVA: 0x0 | Ordinal: 1
        void AsynchronousDelivery_(enum Qt::ApplicationState, bool);

    // RVA: 0x3 | Ordinal: 4
        void AsynchronousDelivery_(void);

    // RVA: 0x6 | Ordinal: 7
        void AsynchronousDelivery_(class QWindow *);

    // RVA: 0x9 | Ordinal: 10
        void AsynchronousDelivery_(class QWindow *, class QPointF const &, class QPointF const &);

    // RVA: 0xC | Ordinal: 13
        void AsynchronousDelivery_(class QWindow *, class QRegion const &);

    // RVA: 0xF | Ordinal: 16
        void AsynchronousDelivery_(class QWindow *, class QRect const &);

    // RVA: 0x12 | Ordinal: 19
        void AsynchronousDelivery_(class QWindow *, unsigned long, enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, class QString const &, bool, unsigned short);

    // RVA: 0x13 | Ordinal: 20
        void AsynchronousDelivery_(class QWindow *, enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, class QString const &, bool, unsigned short);

    // RVA: 0x1B | Ordinal: 28
        void AsynchronousDelivery_(class QWindow *, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x1C | Ordinal: 29
        void AsynchronousDelivery_(class QWindow *, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, enum Qt::MouseButton, enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x1D | Ordinal: 30
        void AsynchronousDelivery_(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x1E | Ordinal: 31
        void AsynchronousDelivery_(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, enum Qt::MouseButton, enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x2D | Ordinal: 46
        void AsynchronousDelivery_(class QWindow *, unsigned long, class QTouchDevice *, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x2E | Ordinal: 47
        void AsynchronousDelivery_(class QWindow *, class QTouchDevice *, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x33 | Ordinal: 52
        void AsynchronousDelivery_(class QWindow *, unsigned long, class QTouchDevice *, class QList<struct QWindowSystemInterface::TouchPoint> const &, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x34 | Ordinal: 53
        void AsynchronousDelivery_(class QWindow *, class QTouchDevice *, class QList<struct QWindowSystemInterface::TouchPoint> const &, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x39 | Ordinal: 58
        void AsynchronousDelivery_(class QWindow *, enum Qt::FocusReason);

    // RVA: 0x3C | Ordinal: 61
        void AsynchronousDelivery_(class QWindow *, class QScreen *);

    // RVA: 0x3F | Ordinal: 64
        void AsynchronousDelivery_(class QWindow *, class QFlags<enum Qt::WindowState>, int);

    // RVA: 0x1 | Ordinal: 2
        void DefaultDelivery_(enum Qt::ApplicationState, bool);

    // RVA: 0x4 | Ordinal: 5
        void DefaultDelivery_(void);

    // RVA: 0x7 | Ordinal: 8
        void DefaultDelivery_(class QWindow *);

    // RVA: 0xA | Ordinal: 11
        void DefaultDelivery_(class QWindow *, class QPointF const &, class QPointF const &);

    // RVA: 0xD | Ordinal: 14
        void DefaultDelivery_(class QWindow *, class QRegion const &);

    // RVA: 0x10 | Ordinal: 17
        void DefaultDelivery_(class QWindow *, class QRect const &);

    // RVA: 0x14 | Ordinal: 21
        void DefaultDelivery_(class QWindow *, unsigned long, enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, class QString const &, bool, unsigned short);

    // RVA: 0x15 | Ordinal: 22
        void DefaultDelivery_(class QWindow *, enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, class QString const &, bool, unsigned short);

    // RVA: 0x1F | Ordinal: 32
        void DefaultDelivery_(class QWindow *, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x20 | Ordinal: 33
        void DefaultDelivery_(class QWindow *, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, enum Qt::MouseButton, enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x21 | Ordinal: 34
        void DefaultDelivery_(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x22 | Ordinal: 35
        void DefaultDelivery_(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, enum Qt::MouseButton, enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x2F | Ordinal: 48
        void DefaultDelivery_(class QWindow *, unsigned long, class QTouchDevice *, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x30 | Ordinal: 49
        void DefaultDelivery_(class QWindow *, class QTouchDevice *, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x35 | Ordinal: 54
        void DefaultDelivery_(class QWindow *, unsigned long, class QTouchDevice *, class QList<struct QWindowSystemInterface::TouchPoint> const &, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x36 | Ordinal: 55
        void DefaultDelivery_(class QWindow *, class QTouchDevice *, class QList<struct QWindowSystemInterface::TouchPoint> const &, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x3A | Ordinal: 59
        void DefaultDelivery_(class QWindow *, enum Qt::FocusReason);

    // RVA: 0x3D | Ordinal: 62
        void DefaultDelivery_(class QWindow *, class QScreen *);

    // RVA: 0x40 | Ordinal: 65
        void DefaultDelivery_(class QWindow *, class QFlags<enum Qt::WindowState>, int);

    // RVA: 0x2 | Ordinal: 3
        void SynchronousDelivery_(enum Qt::ApplicationState, bool);

    // RVA: 0x5 | Ordinal: 6
        void SynchronousDelivery_(void);

    // RVA: 0x8 | Ordinal: 9
        void SynchronousDelivery_(class QWindow *);

    // RVA: 0xB | Ordinal: 12
        void SynchronousDelivery_(class QWindow *, class QPointF const &, class QPointF const &);

    // RVA: 0xE | Ordinal: 15
        void SynchronousDelivery_(class QWindow *, class QRegion const &);

    // RVA: 0x11 | Ordinal: 18
        void SynchronousDelivery_(class QWindow *, class QRect const &);

    // RVA: 0x16 | Ordinal: 23
        void SynchronousDelivery_(class QWindow *, unsigned long, enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, class QString const &, bool, unsigned short);

    // RVA: 0x17 | Ordinal: 24
        void SynchronousDelivery_(class QWindow *, enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, class QString const &, bool, unsigned short);

    // RVA: 0x23 | Ordinal: 36
        void SynchronousDelivery_(class QWindow *, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x24 | Ordinal: 37
        void SynchronousDelivery_(class QWindow *, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, enum Qt::MouseButton, enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x25 | Ordinal: 38
        void SynchronousDelivery_(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x26 | Ordinal: 39
        void SynchronousDelivery_(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, enum Qt::MouseButton, enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x31 | Ordinal: 50
        void SynchronousDelivery_(class QWindow *, unsigned long, class QTouchDevice *, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x32 | Ordinal: 51
        void SynchronousDelivery_(class QWindow *, class QTouchDevice *, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x37 | Ordinal: 56
        void SynchronousDelivery_(class QWindow *, unsigned long, class QTouchDevice *, class QList<struct QWindowSystemInterface::TouchPoint> const &, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x38 | Ordinal: 57
        void SynchronousDelivery_(class QWindow *, class QTouchDevice *, class QList<struct QWindowSystemInterface::TouchPoint> const &, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x3B | Ordinal: 60
        void SynchronousDelivery_(class QWindow *, enum Qt::FocusReason);

    // RVA: 0x3E | Ordinal: 63
        void SynchronousDelivery_(class QWindow *, class QScreen *);

    // RVA: 0x41 | Ordinal: 66
        void SynchronousDelivery_(class QWindow *, class QFlags<enum Qt::WindowState>, int);

    // RVA: 0xDDA | Ordinal: 3547
        void deferredFlushWindowSystemEvents(class QFlags<enum QEventLoop::ProcessEventsFlag>);

    // RVA: 0x10A6 | Ordinal: 4263
        void flushWindowSystemEvents(class QFlags<enum QEventLoop::ProcessEventsFlag>);

    // RVA: 0x4E20 | Ordinal: 20001
        void handleContextMenuEvent(class QWindow *, bool, class QPoint const &, class QPoint const &, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E22 | Ordinal: 20003
        void handleDrag(class QWindow *, class QMimeData const *, class QPoint const &, class QFlags<enum Qt::DropAction>);

    // RVA: 0x4E23 | Ordinal: 20004
        void handleDrag(class QWindow *, class QMimeData const *, class QPoint const &, class QFlags<enum Qt::DropAction>, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E24 | Ordinal: 20005
        void handleDrop(class QWindow *, class QMimeData const *, class QPoint const &, class QFlags<enum Qt::DropAction>);

    // RVA: 0x4E25 | Ordinal: 20006
        void handleDrop(class QWindow *, class QMimeData const *, class QPoint const &, class QFlags<enum Qt::DropAction>, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E26 | Ordinal: 20007
        void handleEnterLeaveEvent(class QWindow *, class QWindow *, class QPointF const &, class QPointF const &);

    // RVA: 0x4E27 | Ordinal: 20008
        void handleEnterWhatsThisEvent(void);

    // RVA: 0x4E28 | Ordinal: 20009
        void handleExtendedKeyEvent(class QWindow *, unsigned long, enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, unsigned int, unsigned int, unsigned int, class QString const &, bool, unsigned short, bool);

    // RVA: 0x4E29 | Ordinal: 20010
        void handleExtendedKeyEvent(class QWindow *, enum QEvent::Type, int, class QFlags<enum Qt::KeyboardModifier>, unsigned int, unsigned int, unsigned int, class QString const &, bool, unsigned short, bool);

    // RVA: 0x4E2A | Ordinal: 20011
        void handleFileOpenEvent(class QString const &);

    // RVA: 0x4E2B | Ordinal: 20012
        void handleFileOpenEvent(class QUrl const &);

    // RVA: 0x4E2C | Ordinal: 20013
        void handleFrameStrutMouseEvent(class QWindow *, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x4E2D | Ordinal: 20014
        void handleFrameStrutMouseEvent(class QWindow *, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, enum Qt::MouseButton, enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x4E2E | Ordinal: 20015
        void handleFrameStrutMouseEvent(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x4E2F | Ordinal: 20016
        void handleFrameStrutMouseEvent(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QFlags<enum Qt::MouseButton>, enum Qt::MouseButton, enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x4E30 | Ordinal: 20017
        void handleGestureEvent(class QWindow *, class QTouchDevice *, unsigned long, enum Qt::NativeGestureType, class QPointF &, class QPointF &);

    // RVA: 0x4E31 | Ordinal: 20018
        void handleGestureEventWithRealValue(class QWindow *, class QTouchDevice *, unsigned long, enum Qt::NativeGestureType, double, class QPointF &, class QPointF &);

    // RVA: 0x4E32 | Ordinal: 20019
        void handleGestureEventWithSequenceIdAndValue(class QWindow *, class QTouchDevice *, unsigned long, enum Qt::NativeGestureType, unsigned long, unsigned __int64, class QPointF &, class QPointF &);

    // RVA: 0x4E33 | Ordinal: 20020
        void handleNativeEvent(class QWindow *, class QByteArray const &, void *, long *);

    // RVA: 0x4E35 | Ordinal: 20022
        void handlePlatformPanelEvent(class QWindow *);

    // RVA: 0x4E36 | Ordinal: 20023
        void handlePrimaryScreenChanged(class QPlatformScreen *);

    // RVA: 0x4E37 | Ordinal: 20024
        void handleScreenAdded(class QPlatformScreen *, bool);

    // RVA: 0x4E38 | Ordinal: 20025
        void handleScreenGeometryChange(class QScreen *, class QRect const &, class QRect const &);

    // RVA: 0x4E39 | Ordinal: 20026
        void handleScreenLogicalDotsPerInchChange(class QScreen *, double, double);

    // RVA: 0x4E3A | Ordinal: 20027
        void handleScreenOrientationChange(class QScreen *, enum Qt::ScreenOrientation);

    // RVA: 0x4E3B | Ordinal: 20028
        void handleScreenRefreshRateChange(class QScreen *, double);

    // RVA: 0x4E3C | Ordinal: 20029
        void handleScreenRemoved(class QPlatformScreen *);

    // RVA: 0x4E3D | Ordinal: 20030
        void handleShortcutEvent(class QWindow *, unsigned long, int, class QFlags<enum Qt::KeyboardModifier>, unsigned int, unsigned int, unsigned int, class QString const &, bool, unsigned short);

    // RVA: 0x4E3E | Ordinal: 20031
        void handleTabletEnterProximityEvent(int, int, __int64);

    // RVA: 0x4E3F | Ordinal: 20032
        void handleTabletEnterProximityEvent(unsigned long, int, int, __int64);

    // RVA: 0x4E40 | Ordinal: 20033
        void handleTabletEvent(class QWindow *, unsigned long, bool, class QPointF const &, class QPointF const &, int, int, double, int, int, double, double, int, __int64, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E41 | Ordinal: 20034
        void handleTabletEvent(class QWindow *, bool, class QPointF const &, class QPointF const &, int, int, double, int, int, double, double, int, __int64, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E42 | Ordinal: 20035
        void handleTabletEvent(class QWindow *, class QPointF const &, class QPointF const &, int, int, class QFlags<enum Qt::MouseButton>, double, int, int, double, double, int, __int64, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E43 | Ordinal: 20036
        void handleTabletEvent(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, int, int, class QFlags<enum Qt::MouseButton>, double, int, int, double, double, int, __int64, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E44 | Ordinal: 20037
        void handleTabletLeaveProximityEvent(int, int, __int64);

    // RVA: 0x4E45 | Ordinal: 20038
        void handleTabletLeaveProximityEvent(unsigned long, int, int, __int64);

    // RVA: 0x4E47 | Ordinal: 20040
        void handleWheelEvent(class QWindow *, class QPointF const &, class QPointF const &, int, enum Qt::Orientation, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E48 | Ordinal: 20041
        void handleWheelEvent(class QWindow *, class QPointF const &, class QPointF const &, class QPoint, class QPoint, class QFlags<enum Qt::KeyboardModifier>, enum Qt::ScrollPhase, enum Qt::MouseEventSource);

    // RVA: 0x4E49 | Ordinal: 20042
        void handleWheelEvent(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, int, enum Qt::Orientation, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x4E4A | Ordinal: 20043
        void handleWheelEvent(class QWindow *, unsigned long, class QPointF const &, class QPointF const &, class QPoint, class QPoint, class QFlags<enum Qt::KeyboardModifier>, enum Qt::ScrollPhase, enum Qt::MouseEventSource, bool);

    // RVA: 0x5087 | Ordinal: 20616
        void isTouchDeviceRegistered(class QTouchDevice const *);

    // RVA: 0x5356 | Ordinal: 21335
        void nonUserInputEventsQueued(void);

    // RVA: 0x56AB | Ordinal: 22188
        void registerTouchDevice(class QTouchDevice const *);

    // RVA: 0x57FD | Ordinal: 22526
        void sendWindowSystemEvents(class QFlags<enum QEventLoop::ProcessEventsFlag>);

    // RVA: 0x5BD8 | Ordinal: 23513
        void setSynchronousWindowSystemEvents(bool);

    // RVA: 0x60AA | Ordinal: 24747
        void unregisterTouchDevice(class QTouchDevice const *);

    // RVA: 0x6182 | Ordinal: 24963
        void windowSystemEventsQueued(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QWINDOWSYSTEMINTERFACE_HPP
