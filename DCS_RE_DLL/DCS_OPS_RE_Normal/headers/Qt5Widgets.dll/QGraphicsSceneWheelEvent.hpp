#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsSceneWheelEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsSceneWheelEvent
{
public:

    // RVA: 0x9A | Ordinal: 155
        void QGraphicsSceneWheelEvent(enum QEvent::Type);

    // RVA: 0x675 | Ordinal: 1654
        void buttons(void) const;

    // RVA: 0x937 | Ordinal: 2360
        void d_func(void);

    // RVA: 0x938 | Ordinal: 2361
        void d_func(void) const;

    // RVA: 0xA07 | Ordinal: 2568
        void delta(void) const;

    // RVA: 0x11FE | Ordinal: 4607
        void modifiers(void) const;

    // RVA: 0x12F3 | Ordinal: 4852
        void orientation(void) const;

    // RVA: 0x13B8 | Ordinal: 5049
        void pos(void) const;

    // RVA: 0x1738 | Ordinal: 5945
        void scenePos(void) const;

    // RVA: 0x174D | Ordinal: 5966
        void screenPos(void) const;

    // RVA: 0x1858 | Ordinal: 6233
        void setButtons(class QFlags<enum Qt::MouseButton>);

    // RVA: 0x1909 | Ordinal: 6410
        void setDelta(int);

    // RVA: 0x1ADC | Ordinal: 6877
        void setModifiers(class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x1B28 | Ordinal: 6953
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1B62 | Ordinal: 7011
        void setPos(class QPointF const &);

    // RVA: 0x1BC1 | Ordinal: 7106
        void setScenePos(class QPointF const &);

    // RVA: 0x1BCD | Ordinal: 7118
        void setScreenPos(class QPoint const &);

    // RVA: 0x20D | Ordinal: 526
        void _QGraphicsSceneWheelEvent(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSSCENEWHEELEVENT_HPP
