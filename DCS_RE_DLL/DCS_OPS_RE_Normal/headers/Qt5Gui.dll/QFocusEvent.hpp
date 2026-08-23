#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFocusEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFocusEvent
{
public:

    // RVA: 0xF8 | Ordinal: 249
        void QFocusEvent(class QFocusEvent const &);

    // RVA: 0xF9 | Ordinal: 250
        void QFocusEvent(enum QEvent::Type, enum Qt::FocusReason);

    // RVA: 0x4E02 | Ordinal: 19971
        void gotFocus(void) const;

    // RVA: 0x51BC | Ordinal: 20925
        void lostFocus(void) const;

    // RVA: 0x567C | Ordinal: 22141
        void reason(void) const;

    // RVA: 0x435 | Ordinal: 1078
        void _QFocusEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFOCUSEVENT_HPP
