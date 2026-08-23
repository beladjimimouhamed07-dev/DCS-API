#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QDropEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDropEvent
{
public:

    // RVA: 0xEE | Ordinal: 239
        void QDropEvent(class QDropEvent const &);

    // RVA: 0xEF | Ordinal: 240
        void QDropEvent(class QPointF const &, class QFlags<enum Qt::DropAction>, class QMimeData const *, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum QEvent::Type);

    // RVA: 0x948 | Ordinal: 2377
        void acceptProposedAction(void);

    // RVA: 0xF66 | Ordinal: 3943
        void dropAction(void) const;

    // RVA: 0x50FA | Ordinal: 20731
        void keyboardModifiers(void) const;

    // RVA: 0x52B4 | Ordinal: 21173
        void mimeData(void) const;

    // RVA: 0x52EE | Ordinal: 21231
        void mouseButtons(void) const;

    // RVA: 0x548B | Ordinal: 21644
        void pos(void) const;

    // RVA: 0x5496 | Ordinal: 21655
        void posF(void) const;

    // RVA: 0x54AA | Ordinal: 21675
        void possibleActions(void) const;

    // RVA: 0x54F6 | Ordinal: 21751
        void proposedAction(void) const;

    // RVA: 0x5959 | Ordinal: 22874
        void setDropAction(enum Qt::DropAction);

    // RVA: 0x5D5F | Ordinal: 23904
        void source(void) const;

    // RVA: 0x430 | Ordinal: 1073
        void _QDropEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QDROPEVENT_HPP
