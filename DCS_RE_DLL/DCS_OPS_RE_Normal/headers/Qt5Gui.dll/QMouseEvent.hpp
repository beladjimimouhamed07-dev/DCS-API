#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QMouseEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMouseEvent
{
public:

    // RVA: 0x17F | Ordinal: 384
        void QMouseEvent(class QMouseEvent const &);

    // RVA: 0x180 | Ordinal: 385
        void QMouseEvent(enum QEvent::Type, class QPointF const &, class QPointF const &, class QPointF const &, enum Qt::MouseButton, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x181 | Ordinal: 386
        void QMouseEvent(enum QEvent::Type, class QPointF const &, class QPointF const &, class QPointF const &, enum Qt::MouseButton, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum Qt::MouseEventSource);

    // RVA: 0x182 | Ordinal: 387
        void QMouseEvent(enum QEvent::Type, class QPointF const &, class QPointF const &, enum Qt::MouseButton, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x183 | Ordinal: 388
        void QMouseEvent(enum QEvent::Type, class QPointF const &, enum Qt::MouseButton, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0xB1C | Ordinal: 2845
        void button(void) const;

    // RVA: 0xB22 | Ordinal: 2851
        void buttons(void) const;

    // RVA: 0x1092 | Ordinal: 4243
        void flags(void) const;

    // RVA: 0x4DDB | Ordinal: 19932
        void globalPos(void) const;

    // RVA: 0x4DE8 | Ordinal: 19945
        void globalX(void) const;

    // RVA: 0x4DEE | Ordinal: 19951
        void globalY(void) const;

    // RVA: 0x5197 | Ordinal: 20888
        void localPos(void) const;

    // RVA: 0x548F | Ordinal: 21648
        void pos(void) const;

    // RVA: 0x5498 | Ordinal: 21657
        void posF(void) const;

    // RVA: 0x57D7 | Ordinal: 22488
        void screenPos(void) const;

    // RVA: 0x5A44 | Ordinal: 23109
        void setLocalPos(class QPointF const &);

    // RVA: 0x5D60 | Ordinal: 23905
        void source(void) const;

    // RVA: 0x6176 | Ordinal: 24951
        void windowPos(void) const;

    // RVA: 0x61B9 | Ordinal: 25018
        void x(void) const;

    // RVA: 0x61CF | Ordinal: 25040
        void y(void) const;

    // RVA: 0x466 | Ordinal: 1127
        void _QMouseEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QMOUSEEVENT_HPP
