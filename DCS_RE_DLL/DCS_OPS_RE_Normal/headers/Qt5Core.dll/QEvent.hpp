#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QEvent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QEvent
{
public:

    // RVA: 0xEB | Ordinal: 236
        void QEvent(class QEvent const &);

    // RVA: 0xEC | Ordinal: 237
        void QEvent(enum QEvent::Type);

    // RVA: 0x7C2 | Ordinal: 1987
        void accept(void);

    // RVA: 0xFA3 | Ordinal: 4004
        void ignore(void);

    // RVA: 0x106F | Ordinal: 4208
        void isAccepted(void) const;

    // RVA: 0x176E | Ordinal: 5999
        void registerEventType(int);

    // RVA: 0x1924 | Ordinal: 6437
        void setAccepted(bool);

    // RVA: 0x1A9B | Ordinal: 6812
        void setSpontaneous(void);

    // RVA: 0x1B83 | Ordinal: 7044
        void spontaneous(void) const;

    // RVA: 0x1F37 | Ordinal: 7992
        void type(void) const;

    // RVA: 0x309 | Ordinal: 778
        void _QEvent(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QEVENT_HPP
