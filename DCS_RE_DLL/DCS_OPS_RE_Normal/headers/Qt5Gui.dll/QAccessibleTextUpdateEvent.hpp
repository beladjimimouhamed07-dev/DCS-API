#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QAccessibleTextUpdateEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAccessibleTextUpdateEvent
{
public:

    // RVA: 0x81 | Ordinal: 130
        void QAccessibleTextUpdateEvent(class QAccessibleInterface *, int, class QString const &, class QString const &);

    // RVA: 0x82 | Ordinal: 131
        void QAccessibleTextUpdateEvent(class QObject *, int, class QString const &, class QString const &);

    // RVA: 0xB7B | Ordinal: 2940
        void changePosition(void) const;

    // RVA: 0x5F04 | Ordinal: 24325
        void textInserted(void) const;

    // RVA: 0x5F11 | Ordinal: 24338
        void textRemoved(void) const;

    // RVA: 0x40F | Ordinal: 1040
        void _QAccessibleTextUpdateEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QACCESSIBLETEXTUPDATEEVENT_HPP
