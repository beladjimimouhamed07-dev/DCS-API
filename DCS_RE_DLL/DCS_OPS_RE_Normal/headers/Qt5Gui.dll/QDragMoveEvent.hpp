#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QDragMoveEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDragMoveEvent
{
public:

    // RVA: 0xEC | Ordinal: 237
        void QDragMoveEvent(class QDragMoveEvent const &);

    // RVA: 0xED | Ordinal: 238
        void QDragMoveEvent(class QPoint const &, class QFlags<enum Qt::DropAction>, class QMimeData const *, class QFlags<enum Qt::MouseButton>, class QFlags<enum Qt::KeyboardModifier>, enum QEvent::Type);

    // RVA: 0x944 | Ordinal: 2373
        void accept(class QRect const &);

    // RVA: 0x945 | Ordinal: 2374
        void accept(void);

    // RVA: 0x9F2 | Ordinal: 2547
        void answerRect(void) const;

    // RVA: 0x4ED9 | Ordinal: 20186
        void ignore(class QRect const &);

    // RVA: 0x4EDA | Ordinal: 20187
        void ignore(void);

    // RVA: 0x42F | Ordinal: 1072
        void _QDragMoveEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QDRAGMOVEEVENT_HPP
