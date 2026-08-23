#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QFileOpenEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFileOpenEvent
{
public:

    // RVA: 0xF5 | Ordinal: 246
        void QFileOpenEvent(class QFileOpenEvent const &);

    // RVA: 0xF6 | Ordinal: 247
        void QFileOpenEvent(class QString const &);

    // RVA: 0xF7 | Ordinal: 248
        void QFileOpenEvent(class QUrl const &);

    // RVA: 0x1026 | Ordinal: 4135
        void file(void) const;

    // RVA: 0x539D | Ordinal: 21406
        void openFile(class QFile &, class QFlags<enum QIODevice::OpenModeFlag>) const;

    // RVA: 0x60D4 | Ordinal: 24789
        void url(void) const;

    // RVA: 0x434 | Ordinal: 1077
        void _QFileOpenEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QFILEOPENEVENT_HPP
