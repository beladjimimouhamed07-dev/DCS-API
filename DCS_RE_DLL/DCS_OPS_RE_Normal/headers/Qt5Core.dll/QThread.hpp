#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QThread
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QThread
{
public:

    // RVA: 0x236 | Ordinal: 567
        void QThread(class QThreadPrivate &, class QObject *);

    // RVA: 0x237 | Ordinal: 568
        void QThread(class QObject *);

    // RVA: 0xB3E | Ordinal: 2879
        void createThreadImpl(class std::future<void> &&);

    // RVA: 0xB6F | Ordinal: 2928
        void currentThread(void);

    // RVA: 0xB70 | Ordinal: 2929
        void currentThreadId(void);

    // RVA: 0xBE2 | Ordinal: 3043
        void d_func(void);

    // RVA: 0xBE3 | Ordinal: 3044
        void d_func(void) const;

    // RVA: 0xDB2 | Ordinal: 3507
        void event(class QEvent *);

    // RVA: 0xDB8 | Ordinal: 3513
        void eventDispatcher(void) const;

    // RVA: 0xDC7 | Ordinal: 3528
        void exec(void);

    // RVA: 0xDD4 | Ordinal: 3541
        void exit(int);

    // RVA: 0xE51 | Ordinal: 3666
        void finished(struct QThread::QPrivateSignal);

    // RVA: 0xFA1 | Ordinal: 4002
        void idealThreadCount(void);

    // RVA: 0x10F3 | Ordinal: 4340
        void isFinished(void) const;

    // RVA: 0x1106 | Ordinal: 4359
        void isInterruptionRequested(void) const;

    // RVA: 0x119A | Ordinal: 4507
        void isRunning(void) const;

    // RVA: 0x12DE | Ordinal: 4831
        void loopLevel(void) const;

    // RVA: 0x1374 | Ordinal: 4981
        void metaObject(void) const;

    // RVA: 0x13F7 | Ordinal: 5112
        void msleep(unsigned long);

    // RVA: 0x1531 | Ordinal: 5426
        void priority(void) const;

    // RVA: 0x165C | Ordinal: 5725
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1699 | Ordinal: 5786
        void qt_metacast(char const *);

    // RVA: 0x16E0 | Ordinal: 5857
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x16FA | Ordinal: 5883
        void quit(void);

    // RVA: 0x1849 | Ordinal: 6218
        void requestInterruption(void);

    // RVA: 0x18C3 | Ordinal: 6340
        void run(void);

    // RVA: 0x19A4 | Ordinal: 6565
        void setEventDispatcher(class QAbstractEventDispatcher *);

    // RVA: 0x1A57 | Ordinal: 6744
        void setPriority(enum QThread::Priority);

    // RVA: 0x1A9C | Ordinal: 6813
        void setStackSize(unsigned int);

    // RVA: 0x1AB4 | Ordinal: 6837
        void setTerminationEnabled(bool);

    // RVA: 0x1B51 | Ordinal: 6994
        void sleep(unsigned long);

    // RVA: 0x1B8A | Ordinal: 7051
        void stackSize(void) const;

    // RVA: 0x1B9F | Ordinal: 7072
        void start(enum QThread::Priority);

    // RVA: 0x1BC2 | Ordinal: 7107
        void started(struct QThread::QPrivateSignal);

    // RVA: 0x1CC5 | Ordinal: 7366
        void terminate(void);

    // RVA: 0x1EA5 | Ordinal: 7846
        void tr(char const *, char const *, int);

    // RVA: 0x1EE4 | Ordinal: 7909
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1FA1 | Ordinal: 8098
        void usleep(unsigned long);

    // RVA: 0x1FDB | Ordinal: 8156
        void wait(unsigned long);

    // RVA: 0x1FDC | Ordinal: 8157
        void wait(class QDeadlineTimer);

    // RVA: 0x2056 | Ordinal: 8279
        void yieldCurrentThread(void);

    // RVA: 0x36F | Ordinal: 880
        void _QThread(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTHREAD_HPP
