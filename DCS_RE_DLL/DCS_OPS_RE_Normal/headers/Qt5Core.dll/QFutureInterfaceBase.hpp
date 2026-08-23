#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QFutureInterfaceBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFutureInterfaceBase
{
public:

    // RVA: 0x116 | Ordinal: 279
        void QFutureInterfaceBase(class QFutureInterfaceBase const &);

    // RVA: 0x117 | Ordinal: 280
        void QFutureInterfaceBase(enum QFutureInterfaceBase::State);

    // RVA: 0x95E | Ordinal: 2399
        void cancel(void);

    // RVA: 0xC69 | Ordinal: 3178
        void derefT(void) const;

    // RVA: 0xDC3 | Ordinal: 3524
        void exceptionStore(void);

    // RVA: 0xDDE | Ordinal: 3551
        void expectedResultCount(void);

    // RVA: 0x108D | Ordinal: 4238
        void isCanceled(void) const;

    // RVA: 0x10F1 | Ordinal: 4338
        void isFinished(void) const;

    // RVA: 0x1163 | Ordinal: 4452
        void isPaused(void) const;

    // RVA: 0x116B | Ordinal: 4460
        void isProgressUpdateNeeded(void) const;

    // RVA: 0x118C | Ordinal: 4493
        void isResultReadyAt(int) const;

    // RVA: 0x1197 | Ordinal: 4504
        void isRunning(void) const;

    // RVA: 0x11C8 | Ordinal: 4553
        void isStarted(void) const;

    // RVA: 0x11DD | Ordinal: 4574
        void isThrottled(void) const;

    // RVA: 0x13F9 | Ordinal: 5114
        void mutex(int) const;

    // RVA: 0x13FA | Ordinal: 5115
        void mutex(void) const;

    // RVA: 0x1546 | Ordinal: 5447
        void progressMaximum(void) const;

    // RVA: 0x1548 | Ordinal: 5449
        void progressMinimum(void) const;

    // RVA: 0x154B | Ordinal: 5452
        void progressText(void) const;

    // RVA: 0x154E | Ordinal: 5455
        void progressValue(void) const;

    // RVA: 0x16F6 | Ordinal: 5879
        void queryState(enum QFutureInterfaceBase::State) const;

    // RVA: 0x1762 | Ordinal: 5987
        void refT(void) const;

    // RVA: 0x1844 | Ordinal: 6213
        void reportCanceled(void);

    // RVA: 0x1845 | Ordinal: 6214
        void reportException(class QException const &);

    // RVA: 0x1846 | Ordinal: 6215
        void reportFinished(void);

    // RVA: 0x1847 | Ordinal: 6216
        void reportResultsReady(int, int);

    // RVA: 0x1848 | Ordinal: 6217
        void reportStarted(void);

    // RVA: 0x187E | Ordinal: 6271
        void resultCount(void) const;

    // RVA: 0x1881 | Ordinal: 6274
        void resultStoreBase(void);

    // RVA: 0x1882 | Ordinal: 6275
        void resultStoreBase(void) const;

    // RVA: 0x19A9 | Ordinal: 6570
        void setExpectedResultCount(int);

    // RVA: 0x19C3 | Ordinal: 6596
        void setFilterMode(bool);

    // RVA: 0x1A47 | Ordinal: 6728
        void setPaused(bool);

    // RVA: 0x1A5C | Ordinal: 6749
        void setProgressRange(int, int);

    // RVA: 0x1A5D | Ordinal: 6750
        void setProgressValue(int);

    // RVA: 0x1A5E | Ordinal: 6751
        void setProgressValueAndText(int, class QString const &);

    // RVA: 0x1A7E | Ordinal: 6783
        void setRunnable(class QRunnable *);

    // RVA: 0x1AB9 | Ordinal: 6842
        void setThreadPool(class QThreadPool *);

    // RVA: 0x1ABA | Ordinal: 6843
        void setThrottled(bool);

    // RVA: 0x1E61 | Ordinal: 7778
        void togglePaused(void);

    // RVA: 0x1FE6 | Ordinal: 8167
        void waitForFinished(void);

    // RVA: 0x1FE9 | Ordinal: 8170
        void waitForNextResult(void);

    // RVA: 0x1FF0 | Ordinal: 8177
        void waitForResult(int);

    // RVA: 0x1FF1 | Ordinal: 8178
        void waitForResume(void);

    // RVA: 0x31C | Ordinal: 797
        void _QFutureInterfaceBase(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QFUTUREINTERFACEBASE_HPP
