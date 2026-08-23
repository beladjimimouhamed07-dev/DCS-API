#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSharedMemory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSharedMemory
{
public:

    // RVA: 0x1EB | Ordinal: 492
        void QSharedMemory(class QString const &, class QObject *);

    // RVA: 0x1EC | Ordinal: 493
        void QSharedMemory(class QObject *);

    // RVA: 0x8C0 | Ordinal: 2241
        void attach(enum QSharedMemory::AccessMode);

    // RVA: 0xA8F | Ordinal: 2704
        void constData(void) const;

    // RVA: 0xB28 | Ordinal: 2857
        void create(int, enum QSharedMemory::AccessMode);

    // RVA: 0xBD0 | Ordinal: 3025
        void d_func(void);

    // RVA: 0xBD1 | Ordinal: 3026
        void d_func(void) const;

    // RVA: 0xC06 | Ordinal: 3079
        void data(void);

    // RVA: 0xC07 | Ordinal: 3080
        void data(void) const;

    // RVA: 0xC89 | Ordinal: 3210
        void detach(void);

    // RVA: 0xD84 | Ordinal: 3461
        void error(void) const;

    // RVA: 0xD93 | Ordinal: 3476
        void errorString(void) const;

    // RVA: 0x107F | Ordinal: 4224
        void isAttached(void) const;

    // RVA: 0x1244 | Ordinal: 4677
        void key(void) const;

    // RVA: 0x12D3 | Ordinal: 4820
        void lock(void);

    // RVA: 0x136B | Ordinal: 4972
        void metaObject(void) const;

    // RVA: 0x1421 | Ordinal: 5154
        void nativeKey(void) const;

    // RVA: 0x1653 | Ordinal: 5716
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1690 | Ordinal: 5777
        void qt_metacast(char const *);

    // RVA: 0x16D7 | Ordinal: 5848
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x19F5 | Ordinal: 6646
        void setKey(class QString const &);

    // RVA: 0x1A12 | Ordinal: 6675
        void setNativeKey(class QString const &);

    // RVA: 0x1B42 | Ordinal: 6979
        void size(void) const;

    // RVA: 0x1E9C | Ordinal: 7837
        void tr(char const *, char const *, int);

    // RVA: 0x1EDB | Ordinal: 7900
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F69 | Ordinal: 8042
        void unlock(void);

    // RVA: 0x358 | Ordinal: 857
        void _QSharedMemory(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSHAREDMEMORY_HPP
