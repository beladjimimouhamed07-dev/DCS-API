#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QThreadPoolPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QThreadPoolPrivate
{
public:

    // RVA: 0x239 | Ordinal: 570
        void QThreadPoolPrivate(void);

    // RVA: 0x7D3 | Ordinal: 2004
        void activeThreadCount(void) const;

    // RVA: 0x9EC | Ordinal: 2541
        void clear(void);

    // RVA: 0xD56 | Ordinal: 3415
        void enqueueTask(class QRunnable *, int);

    // RVA: 0x1602 | Ordinal: 5635
        void q_func(void);

    // RVA: 0x1603 | Ordinal: 5636
        void q_func(void) const;

    // RVA: 0x185E | Ordinal: 6239
        void reset(void);

    // RVA: 0x1BB5 | Ordinal: 7094
        void startThread(class QRunnable *);

    // RVA: 0x1C39 | Ordinal: 7226
        void stealAndRunRunnable(class QRunnable *);

    // RVA: 0x1E65 | Ordinal: 7782
        void tooManyThreadsActive(void) const;

    // RVA: 0x1F2D | Ordinal: 7982
        void tryStart(class QRunnable *);

    // RVA: 0x1F2F | Ordinal: 7984
        void tryToStartMoreThreads(void);

    // RVA: 0x1FE4 | Ordinal: 8165
        void waitForDone(class QDeadlineTimer const &);

    // RVA: 0x1FE5 | Ordinal: 8166
        void waitForDone(int);

    // RVA: 0x371 | Ordinal: 882
        void _QThreadPoolPrivate(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTHREADPOOLPRIVATE_HPP
