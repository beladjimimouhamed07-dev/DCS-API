#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QInputMethodEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QInputMethodEvent
{
public:

    // RVA: 0x157 | Ordinal: 344
        void QInputMethodEvent(class QInputMethodEvent const &);

    // RVA: 0x158 | Ordinal: 345
        void QInputMethodEvent(class QString const &, class QList<class QInputMethodEvent::Attribute> const &);

    // RVA: 0x159 | Ordinal: 346
        void QInputMethodEvent(void);

    // RVA: 0xA37 | Ordinal: 2616
        void attributes(void) const;

    // RVA: 0xC1D | Ordinal: 3102
        void commitString(void) const;

    // RVA: 0x54B2 | Ordinal: 21683
        void preeditString(void) const;

    // RVA: 0x5702 | Ordinal: 22275
        void replacementLength(void) const;

    // RVA: 0x5703 | Ordinal: 22276
        void replacementStart(void) const;

    // RVA: 0x58CA | Ordinal: 22731
        void setCommitString(class QString const &, int, int);

    // RVA: 0x45D | Ordinal: 1118
        void _QInputMethodEvent(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QINPUTMETHODEVENT_HPP
