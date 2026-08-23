#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QNativeGestureEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QNativeGestureEvent
{
public:

    // RVA: 0x189 | Ordinal: 394
        void QNativeGestureEvent(class QNativeGestureEvent const &);

    // RVA: 0x18A | Ordinal: 395
        void QNativeGestureEvent(enum Qt::NativeGestureType, class QPointF const &, class QPointF const &, class QPointF const &, double, unsigned long, unsigned __int64);

    // RVA: 0x18B | Ordinal: 396
        void QNativeGestureEvent(enum Qt::NativeGestureType, class QTouchDevice const *, class QPointF const &, class QPointF const &, class QPointF const &, double, unsigned long, unsigned __int64);

    // RVA: 0xE3C | Ordinal: 3645
        void device(void) const;

    // RVA: 0x1187 | Ordinal: 4488
        void gestureType(void) const;

    // RVA: 0x4DDC | Ordinal: 19933
        void globalPos(void) const;

    // RVA: 0x5198 | Ordinal: 20889
        void localPos(void) const;

    // RVA: 0x5491 | Ordinal: 21650
        void pos(void) const;

    // RVA: 0x57D8 | Ordinal: 22489
        void screenPos(void) const;

    // RVA: 0x60F2 | Ordinal: 24819
        void value(void) const;

    // RVA: 0x6177 | Ordinal: 24952
        void windowPos(void) const;

    // RVA: 0x469 | Ordinal: 1130
        void _QNativeGestureEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QNATIVEGESTUREEVENT_HPP
