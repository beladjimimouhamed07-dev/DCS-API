#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsSceneContextMenuEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsSceneContextMenuEvent
{
public:

    // RVA: 0x91 | Ordinal: 146
        void QGraphicsSceneContextMenuEvent(enum QEvent::Type);

    // RVA: 0x927 | Ordinal: 2344
        void d_func(void);

    // RVA: 0x928 | Ordinal: 2345
        void d_func(void) const;

    // RVA: 0x11FA | Ordinal: 4603
        void modifiers(void) const;

    // RVA: 0x13B4 | Ordinal: 5045
        void pos(void) const;

    // RVA: 0x15F0 | Ordinal: 5617
        void reason(void) const;

    // RVA: 0x1733 | Ordinal: 5940
        void scenePos(void) const;

    // RVA: 0x1748 | Ordinal: 5961
        void screenPos(void) const;

    // RVA: 0x1AD8 | Ordinal: 6873
        void setModifiers(class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x1B5E | Ordinal: 7007
        void setPos(class QPointF const &);

    // RVA: 0x1B84 | Ordinal: 7045
        void setReason(enum QGraphicsSceneContextMenuEvent::Reason);

    // RVA: 0x1BBC | Ordinal: 7101
        void setScenePos(class QPointF const &);

    // RVA: 0x1BC8 | Ordinal: 7113
        void setScreenPos(class QPoint const &);

    // RVA: 0x205 | Ordinal: 518
        void _QGraphicsSceneContextMenuEvent(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSSCENECONTEXTMENUEVENT_HPP
