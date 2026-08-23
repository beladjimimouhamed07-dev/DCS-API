#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QAccessibleTextSelectionEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAccessibleTextSelectionEvent
{
public:

    // RVA: 0x7F | Ordinal: 128
        void QAccessibleTextSelectionEvent(class QAccessibleInterface *, int, int);

    // RVA: 0x80 | Ordinal: 129
        void QAccessibleTextSelectionEvent(class QObject *, int, int);

    // RVA: 0x57F4 | Ordinal: 22517
        void selectionEnd(void) const;

    // RVA: 0x57F6 | Ordinal: 22519
        void selectionStart(void) const;

    // RVA: 0x5B78 | Ordinal: 23417
        void setSelection(int, int);

    // RVA: 0x40E | Ordinal: 1039
        void _QAccessibleTextSelectionEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QACCESSIBLETEXTSELECTIONEVENT_HPP
