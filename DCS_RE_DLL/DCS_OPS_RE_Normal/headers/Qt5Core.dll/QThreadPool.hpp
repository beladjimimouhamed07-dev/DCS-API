#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QThreadPool
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QThreadPool
{
public:

    // RVA: 0x238 | Ordinal: 569
        void QThreadPool(class QObject *);

    // RVA: 0x7D2 | Ordinal: 2003
        void activeThreadCount(void) const;

    // RVA: 0x960 | Ordinal: 2401
        void cancel(class QRunnable *);

    // RVA: 0x9EB | Ordinal: 2540
        void clear(void);

    // RVA: 0xAE0 | Ordinal: 2785
        void contains(class QThread const *) const;

    // RVA: 0xBE4 | Ordinal: 3045
        void d_func(void);

    // RVA: 0xBE5 | Ordinal: 3046
        void d_func(void) const;

    // RVA: 0xDDF | Ordinal: 3552
        void expiryTimeout(void) const;

    // RVA: 0xF32 | Ordinal: 3891
        void globalInstance(void);

    // RVA: 0x132A | Ordinal: 4907
        void maxThreadCount(void) const;

    // RVA: 0x1375 | Ordinal: 4982
        void metaObject(void) const;

    // RVA: 0x165D | Ordinal: 5726
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x169A | Ordinal: 5787
        void qt_metacast(char const *);

    // RVA: 0x16E1 | Ordinal: 5858
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1796 | Ordinal: 6039
        void releaseThread(void);

    // RVA: 0x1853 | Ordinal: 6228
        void reserveThread(void);

    // RVA: 0x19AA | Ordinal: 6571
        void setExpiryTimeout(int);

    // RVA: 0x1A0C | Ordinal: 6669
        void setMaxThreadCount(int);

    // RVA: 0x1A9D | Ordinal: 6814
        void setStackSize(unsigned int);

    // RVA: 0x1B8B | Ordinal: 7052
        void stackSize(void) const;

    // RVA: 0x1BA0 | Ordinal: 7073
        void start(class QRunnable *, int);

    // RVA: 0x1BA1 | Ordinal: 7074
        void start(class std::function<void __cdecl(void)>, int);

    // RVA: 0x1EA6 | Ordinal: 7847
        void tr(char const *, char const *, int);

    // RVA: 0x1EE5 | Ordinal: 7910
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F2B | Ordinal: 7980
        void tryStart(class QRunnable *);

    // RVA: 0x1F2C | Ordinal: 7981
        void tryStart(class std::function<void __cdecl(void)>);

    // RVA: 0x1F2E | Ordinal: 7983
        void tryTake(class QRunnable *);

    // RVA: 0x1FE3 | Ordinal: 8164
        void waitForDone(int);

    // RVA: 0x370 | Ordinal: 881
        void _QThreadPool(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTHREADPOOL_HPP
