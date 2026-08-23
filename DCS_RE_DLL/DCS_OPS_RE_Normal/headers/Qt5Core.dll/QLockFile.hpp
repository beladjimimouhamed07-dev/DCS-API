#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QLockFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QLockFile
{
public:

    // RVA: 0x170 | Ordinal: 369
        void QLockFile(class QString const &);

    // RVA: 0xBB7 | Ordinal: 3000
        void d_func(void);

    // RVA: 0xBB8 | Ordinal: 3001
        void d_func(void) const;

    // RVA: 0xD81 | Ordinal: 3458
        void error(void) const;

    // RVA: 0xF29 | Ordinal: 3882
        void getLockInfo(__int64 *, class QString *, class QString *) const;

    // RVA: 0x1121 | Ordinal: 4386
        void isLocked(void) const;

    // RVA: 0x12D1 | Ordinal: 4818
        void lock(void);

    // RVA: 0x1806 | Ordinal: 6151
        void removeStaleLockFile(void);

    // RVA: 0x1A9E | Ordinal: 6815
        void setStaleLockTime(int);

    // RVA: 0x1B8C | Ordinal: 7053
        void staleLockTime(void) const;

    // RVA: 0x1F25 | Ordinal: 7974
        void tryLock(int);

    // RVA: 0x1F64 | Ordinal: 8037
        void unlock(void);

    // RVA: 0x330 | Ordinal: 817
        void _QLockFile(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QLOCKFILE_HPP
