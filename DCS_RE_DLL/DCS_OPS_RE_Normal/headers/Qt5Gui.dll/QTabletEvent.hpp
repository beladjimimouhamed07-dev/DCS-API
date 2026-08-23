#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTabletEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTabletEvent
{
public:

    // RVA: 0x326 | Ordinal: 807
        void QTabletEvent(class QTabletEvent const &);

    // RVA: 0x327 | Ordinal: 808
        void QTabletEvent(enum QEvent::Type, class QPointF const &, class QPointF const &, int, int, double, int, int, double, double, int, class QFlags<enum Qt::KeyboardModifier>, __int64);

    // RVA: 0x328 | Ordinal: 809
        void QTabletEvent(enum QEvent::Type, class QPointF const &, class QPointF const &, int, int, double, int, int, double, double, int, class QFlags<enum Qt::KeyboardModifier>, __int64, enum Qt::MouseButton, class QFlags<enum Qt::MouseButton>);

    // RVA: 0xB1E | Ordinal: 2847
        void button(void) const;

    // RVA: 0xB23 | Ordinal: 2852
        void buttons(void) const;

    // RVA: 0xE40 | Ordinal: 3649
        void device(void) const;

    // RVA: 0xE59 | Ordinal: 3674
        void deviceType(void) const;

    // RVA: 0x4DDD | Ordinal: 19934
        void globalPos(void) const;

    // RVA: 0x4DDF | Ordinal: 19936
        void globalPosF(void) const;

    // RVA: 0x4DE9 | Ordinal: 19946
        void globalX(void) const;

    // RVA: 0x4DEF | Ordinal: 19952
        void globalY(void) const;

    // RVA: 0x4E9E | Ordinal: 20127
        void hiResGlobalPos(void) const;

    // RVA: 0x4E9F | Ordinal: 20128
        void hiResGlobalX(void) const;

    // RVA: 0x4EA0 | Ordinal: 20129
        void hiResGlobalY(void) const;

    // RVA: 0x547C | Ordinal: 21629
        void pointerType(void) const;

    // RVA: 0x5493 | Ordinal: 21652
        void pos(void) const;

    // RVA: 0x5499 | Ordinal: 21658
        void posF(void) const;

    // RVA: 0x54B7 | Ordinal: 21688
        void pressure(void) const;

    // RVA: 0x5778 | Ordinal: 22393
        void rotation(void) const;

    // RVA: 0x5EC6 | Ordinal: 24263
        void tangentialPressure(void) const;

    // RVA: 0x6096 | Ordinal: 24727
        void uniqueId(void) const;

    // RVA: 0x61BB | Ordinal: 25020
        void x(void) const;

    // RVA: 0x61C8 | Ordinal: 25033
        void xTilt(void) const;

    // RVA: 0x61D1 | Ordinal: 25042
        void y(void) const;

    // RVA: 0x61D9 | Ordinal: 25050
        void yTilt(void) const;

    // RVA: 0x61DD | Ordinal: 25054
        void z(void) const;

    // RVA: 0x529 | Ordinal: 1322
        void _QTabletEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTABLETEVENT_HPP
