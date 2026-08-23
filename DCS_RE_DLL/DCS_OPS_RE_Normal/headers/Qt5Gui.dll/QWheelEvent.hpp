#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QWheelEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWheelEvent
{
public:

    // RVA: 0x3C1 | Ordinal: 962
        void QWheelEvent(class QWheelEvent const &);

    // RVA: 0x3C2 | Ordinal: 963
        void QWheelEvent(class QPointF const &, class QPointF const &, int, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::Orientation);

    // RVA: 0x3C3 | Ordinal: 964
        void QWheelEvent(class QPointF const &, class QPointF const &, class QPoint, class QPoint, int, enum Qt::Orientation, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x3C4 | Ordinal: 965
        void QWheelEvent(class QPointF const &, class QPointF const &, class QPoint, class QPoint, int, enum Qt::Orientation, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::ScrollPhase);

    // RVA: 0x3C5 | Ordinal: 966
        void QWheelEvent(class QPointF const &, class QPointF const &, class QPoint, class QPoint, int, enum Qt::Orientation, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::ScrollPhase, enum Qt::MouseEventSource);

    // RVA: 0x3C6 | Ordinal: 967
        void QWheelEvent(class QPointF const &, class QPointF const &, class QPoint, class QPoint, int, enum Qt::Orientation, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::ScrollPhase, enum Qt::MouseEventSource, bool);

    // RVA: 0x3C7 | Ordinal: 968
        void QWheelEvent(class QPointF const &, int, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::Orientation);

    // RVA: 0x3C8 | Ordinal: 969
        void QWheelEvent(class QPointF, class QPointF, class QPoint, class QPoint, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::ScrollPhase, bool, enum Qt::MouseEventSource);

    // RVA: 0x9F0 | Ordinal: 2545
        void angleDelta(void) const;

    // RVA: 0xB24 | Ordinal: 2853
        void buttons(void) const;

    // RVA: 0xDE9 | Ordinal: 3562
        void delta(void) const;

    // RVA: 0x4DDE | Ordinal: 19935
        void globalPos(void) const;

    // RVA: 0x4DE0 | Ordinal: 19937
        void globalPosF(void) const;

    // RVA: 0x4DE1 | Ordinal: 19938
        void globalPosition(void) const;

    // RVA: 0x4DEA | Ordinal: 19947
        void globalX(void) const;

    // RVA: 0x4DF0 | Ordinal: 19953
        void globalY(void) const;

    // RVA: 0x4FB4 | Ordinal: 20405
        void inverted(void) const;

    // RVA: 0x53B5 | Ordinal: 21430
        void orientation(void) const;

    // RVA: 0x543D | Ordinal: 21566
        void phase(void) const;

    // RVA: 0x544F | Ordinal: 21584
        void pixelDelta(void) const;

    // RVA: 0x5494 | Ordinal: 21653
        void pos(void) const;

    // RVA: 0x549A | Ordinal: 21659
        void posF(void) const;

    // RVA: 0x54A1 | Ordinal: 21666
        void position(void) const;

    // RVA: 0x5D65 | Ordinal: 23910
        void source(void) const;

    // RVA: 0x61C0 | Ordinal: 25025
        void x(void) const;

    // RVA: 0x61D6 | Ordinal: 25047
        void y(void) const;

    // RVA: 0x553 | Ordinal: 1364
        void _QWheelEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QWHEELEVENT_HPP
