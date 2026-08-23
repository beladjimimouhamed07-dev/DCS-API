#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QInputMethodQueryEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QInputMethodQueryEvent
{
public:

    // RVA: 0x15A | Ordinal: 347
        void QInputMethodQueryEvent(class QInputMethodQueryEvent const &);

    // RVA: 0x15B | Ordinal: 348
        void QInputMethodQueryEvent(class QFlags<enum Qt::InputMethodQuery>);

    // RVA: 0x565D | Ordinal: 22110
        void queries(void) const;

    // RVA: 0x5C91 | Ordinal: 23698
        void setValue(enum Qt::InputMethodQuery, class QVariant const &);

    // RVA: 0x60F1 | Ordinal: 24818
        void value(enum Qt::InputMethodQuery) const;

    // RVA: 0x45E | Ordinal: 1119
        void _QInputMethodQueryEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QINPUTMETHODQUERYEVENT_HPP
