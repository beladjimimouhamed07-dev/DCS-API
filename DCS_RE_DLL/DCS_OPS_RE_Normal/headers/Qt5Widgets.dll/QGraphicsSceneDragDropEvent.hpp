#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsSceneDragDropEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsSceneDragDropEvent
{
public:

    // RVA: 0x92 | Ordinal: 147
        void QGraphicsSceneDragDropEvent(enum QEvent::Type);

    // RVA: 0x4E7 | Ordinal: 1256
        void acceptProposedAction(void);

    // RVA: 0x673 | Ordinal: 1652
        void buttons(void) const;

    // RVA: 0x929 | Ordinal: 2346
        void d_func(void);

    // RVA: 0x92A | Ordinal: 2347
        void d_func(void) const;

    // RVA: 0xACF | Ordinal: 2768
        void dropAction(void) const;

    // RVA: 0x11A5 | Ordinal: 4518
        void mimeData(void) const;

    // RVA: 0x11FB | Ordinal: 4604
        void modifiers(void) const;

    // RVA: 0x13B5 | Ordinal: 5046
        void pos(void) const;

    // RVA: 0x13BE | Ordinal: 5055
        void possibleActions(void) const;

    // RVA: 0x13E1 | Ordinal: 5090
        void proposedAction(void) const;

    // RVA: 0x1734 | Ordinal: 5941
        void scenePos(void) const;

    // RVA: 0x1749 | Ordinal: 5962
        void screenPos(void) const;

    // RVA: 0x1856 | Ordinal: 6231
        void setButtons(class QFlags<enum Qt::MouseButton>);

    // RVA: 0x1935 | Ordinal: 6454
        void setDropAction(enum Qt::DropAction);

    // RVA: 0x1AA8 | Ordinal: 6825
        void setMimeData(class QMimeData const *);

    // RVA: 0x1AD9 | Ordinal: 6874
        void setModifiers(class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x1B5F | Ordinal: 7008
        void setPos(class QPointF const &);

    // RVA: 0x1B68 | Ordinal: 7017
        void setPossibleActions(class QFlags<enum Qt::DropAction>);

    // RVA: 0x1B72 | Ordinal: 7027
        void setProposedAction(enum Qt::DropAction);

    // RVA: 0x1BBD | Ordinal: 7102
        void setScenePos(class QPointF const &);

    // RVA: 0x1BC9 | Ordinal: 7114
        void setScreenPos(class QPoint const &);

    // RVA: 0x1C2B | Ordinal: 7212
        void setSource(class QWidget *);

    // RVA: 0x1E45 | Ordinal: 7750
        void source(void) const;

    // RVA: 0x206 | Ordinal: 519
        void _QGraphicsSceneDragDropEvent(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSSCENEDRAGDROPEVENT_HPP
