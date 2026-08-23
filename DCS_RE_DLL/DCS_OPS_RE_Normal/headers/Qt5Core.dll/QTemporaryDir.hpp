#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTemporaryDir
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTemporaryDir
{
public:

    // RVA: 0x21F | Ordinal: 544
        void QTemporaryDir(class QString const &);

    // RVA: 0x220 | Ordinal: 545
        void QTemporaryDir(void);

    // RVA: 0x8CB | Ordinal: 2252
        void autoRemove(void) const;

    // RVA: 0xD96 | Ordinal: 3479
        void errorString(void) const;

    // RVA: 0xE0D | Ordinal: 3598
        void filePath(class QString const &) const;

    // RVA: 0x1211 | Ordinal: 4626
        void isValid(void) const;

    // RVA: 0x14C5 | Ordinal: 5318
        void path(void) const;

    // RVA: 0x17BF | Ordinal: 6080
        void remove(void);

    // RVA: 0x1939 | Ordinal: 6458
        void setAutoRemove(bool);

    // RVA: 0x368 | Ordinal: 873
        void _QTemporaryDir(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTEMPORARYDIR_HPP
