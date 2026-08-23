#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QShortcutEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QShortcutEvent
{
public:

    // RVA: 0x2FE | Ordinal: 767
        void QShortcutEvent(class QShortcutEvent const &);

    // RVA: 0x2FF | Ordinal: 768
        void QShortcutEvent(class QKeySequence const &, int, bool);

    // RVA: 0x4FC5 | Ordinal: 20422
        void isAmbiguous(void) const;

    // RVA: 0x50F0 | Ordinal: 20721
        void key(void) const;

    // RVA: 0x5D0E | Ordinal: 23823
        void shortcutId(void) const;

    // RVA: 0x517 | Ordinal: 1304
        void _QShortcutEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSHORTCUTEVENT_HPP
