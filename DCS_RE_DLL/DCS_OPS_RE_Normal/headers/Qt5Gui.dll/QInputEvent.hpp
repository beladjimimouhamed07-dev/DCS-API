#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QInputEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QInputEvent
{
public:

    // RVA: 0x154 | Ordinal: 341
        void QInputEvent(class QInputEvent const &);

    // RVA: 0x155 | Ordinal: 342
        void QInputEvent(enum QEvent::Type, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x52EC | Ordinal: 21229
        void modifiers(void) const;

    // RVA: 0x5A87 | Ordinal: 23176
        void setModifiers(class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x5C07 | Ordinal: 23560
        void setTimestamp(unsigned long);

    // RVA: 0x5F32 | Ordinal: 24371
        void timestamp(void) const;

    // RVA: 0x45B | Ordinal: 1116
        void _QInputEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QINPUTEVENT_HPP
