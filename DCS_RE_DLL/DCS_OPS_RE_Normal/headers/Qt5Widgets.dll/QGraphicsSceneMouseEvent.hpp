#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsSceneMouseEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsSceneMouseEvent
{
public:

    // RVA: 0x97 | Ordinal: 152
        void QGraphicsSceneMouseEvent(enum QEvent::Type);

    // RVA: 0x65B | Ordinal: 1628
        void button(void) const;

    // RVA: 0x662 | Ordinal: 1635
        void buttonDownPos(enum Qt::MouseButton) const;

    // RVA: 0x663 | Ordinal: 1636
        void buttonDownScenePos(enum Qt::MouseButton) const;

    // RVA: 0x664 | Ordinal: 1637
        void buttonDownScreenPos(enum Qt::MouseButton) const;

    // RVA: 0x674 | Ordinal: 1653
        void buttons(void) const;

    // RVA: 0x931 | Ordinal: 2354
        void d_func(void);

    // RVA: 0x932 | Ordinal: 2355
        void d_func(void) const;

    // RVA: 0xBF8 | Ordinal: 3065
        void flags(void) const;

    // RVA: 0x1034 | Ordinal: 4149
        void lastPos(void) const;

    // RVA: 0x1038 | Ordinal: 4153
        void lastScenePos(void) const;

    // RVA: 0x103A | Ordinal: 4155
        void lastScreenPos(void) const;

    // RVA: 0x11FD | Ordinal: 4606
        void modifiers(void) const;

    // RVA: 0x13B7 | Ordinal: 5048
        void pos(void) const;

    // RVA: 0x1737 | Ordinal: 5944
        void scenePos(void) const;

    // RVA: 0x174C | Ordinal: 5965
        void screenPos(void) const;

    // RVA: 0x184B | Ordinal: 6220
        void setButton(enum Qt::MouseButton);

    // RVA: 0x184E | Ordinal: 6223
        void setButtonDownPos(enum Qt::MouseButton, class QPointF const &);

    // RVA: 0x184F | Ordinal: 6224
        void setButtonDownScenePos(enum Qt::MouseButton, class QPointF const &);

    // RVA: 0x1850 | Ordinal: 6225
        void setButtonDownScreenPos(enum Qt::MouseButton, class QPoint const &);

    // RVA: 0x1857 | Ordinal: 6232
        void setButtons(class QFlags<enum Qt::MouseButton>);

    // RVA: 0x1980 | Ordinal: 6529
        void setFlags(class QFlags<enum Qt::MouseEventFlag>);

    // RVA: 0x1A60 | Ordinal: 6753
        void setLastPos(class QPointF const &);

    // RVA: 0x1A64 | Ordinal: 6757
        void setLastScenePos(class QPointF const &);

    // RVA: 0x1A66 | Ordinal: 6759
        void setLastScreenPos(class QPoint const &);

    // RVA: 0x1ADB | Ordinal: 6876
        void setModifiers(class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x1B61 | Ordinal: 7010
        void setPos(class QPointF const &);

    // RVA: 0x1BC0 | Ordinal: 7105
        void setScenePos(class QPointF const &);

    // RVA: 0x1BCC | Ordinal: 7117
        void setScreenPos(class QPoint const &);

    // RVA: 0x1C2C | Ordinal: 7213
        void setSource(enum Qt::MouseEventSource);

    // RVA: 0x1E46 | Ordinal: 7751
        void source(void) const;

    // RVA: 0x20A | Ordinal: 523
        void _QGraphicsSceneMouseEvent(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSSCENEMOUSEEVENT_HPP
