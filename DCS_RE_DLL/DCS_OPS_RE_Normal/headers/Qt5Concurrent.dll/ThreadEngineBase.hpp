#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Concurrent.dll
// Class: ThreadEngineBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QtConcurrent {

class ThreadEngineBase
{
public:

    // RVA: 0x2 | Ordinal: 3
        void ThreadEngineBase(void);

    // RVA: 0x6 | Ordinal: 7
        void acquireBarrierSemaphore(void);

    // RVA: 0xB | Ordinal: 12
        void finish(void);

    // RVA: 0xC | Ordinal: 13
        void handleException(class QException const &);

    // RVA: 0xD | Ordinal: 14
        void isCanceled(void);

    // RVA: 0xE | Ordinal: 15
        void isProgressReportingEnabled(void);

    // RVA: 0xF | Ordinal: 16
        void run(void);

    // RVA: 0x10 | Ordinal: 17
        void setProgressRange(int, int);

    // RVA: 0x11 | Ordinal: 18
        void setProgressValue(int);

    // RVA: 0x12 | Ordinal: 19
        void shouldStartThread(void);

    // RVA: 0x13 | Ordinal: 20
        void shouldThrottleThread(void);

    // RVA: 0x14 | Ordinal: 21
        void start(void);

    // RVA: 0x15 | Ordinal: 22
        void startBlocking(void);

    // RVA: 0x16 | Ordinal: 23
        void startSingleThreaded(void);

    // RVA: 0x17 | Ordinal: 24
        void startThread(void);

    // RVA: 0x18 | Ordinal: 25
        void startThreadInternal(void);

    // RVA: 0x19 | Ordinal: 26
        void startThreads(void);

    // RVA: 0x1A | Ordinal: 27
        void threadExit(void);

    // RVA: 0x1B | Ordinal: 28
        void threadFunction(void);

    // RVA: 0x1C | Ordinal: 29
        void threadThrottleExit(void);

    // RVA: 0x21 | Ordinal: 34
        void waitForResume(void);

    // RVA: 0x4 | Ordinal: 5
        void _ThreadEngineBase(void);
};

} // namespace QtConcurrent

// DCS_OPS_RE_QT5CONCURRENT.DLL_THREADENGINEBASE_HPP
