#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QFutureWatcherBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFutureWatcherBase
{
public:

    // RVA: 0x118 | Ordinal: 281
        void QFutureWatcherBase(class QObject *);

    // RVA: 0x95F | Ordinal: 2400
        void cancel(void);

    // RVA: 0x964 | Ordinal: 2405
        void canceled(void);

    // RVA: 0xA7B | Ordinal: 2684
        void connectNotify(class QMetaMethod const &);

    // RVA: 0xA7E | Ordinal: 2687
        void connectOutputInterface(void);

    // RVA: 0xBAD | Ordinal: 2990
        void d_func(void);

    // RVA: 0xBAE | Ordinal: 2991
        void d_func(void) const;

    // RVA: 0xCB4 | Ordinal: 3253
        void disconnectNotify(class QMetaMethod const &);

    // RVA: 0xCB8 | Ordinal: 3257
        void disconnectOutputInterface(bool);

    // RVA: 0xDA6 | Ordinal: 3495
        void event(class QEvent *);

    // RVA: 0xE4D | Ordinal: 3662
        void finished(void);

    // RVA: 0x108E | Ordinal: 4239
        void isCanceled(void) const;

    // RVA: 0x10F2 | Ordinal: 4339
        void isFinished(void) const;

    // RVA: 0x1164 | Ordinal: 4453
        void isPaused(void) const;

    // RVA: 0x1198 | Ordinal: 4505
        void isRunning(void) const;

    // RVA: 0x11C9 | Ordinal: 4554
        void isStarted(void) const;

    // RVA: 0x1358 | Ordinal: 4953
        void metaObject(void) const;

    // RVA: 0x14CF | Ordinal: 5328
        void pause(void);

    // RVA: 0x14D1 | Ordinal: 5330
        void paused(void);

    // RVA: 0x1547 | Ordinal: 5448
        void progressMaximum(void) const;

    // RVA: 0x1549 | Ordinal: 5450
        void progressMinimum(void) const;

    // RVA: 0x154A | Ordinal: 5451
        void progressRangeChanged(int, int);

    // RVA: 0x154C | Ordinal: 5453
        void progressText(void) const;

    // RVA: 0x154D | Ordinal: 5454
        void progressTextChanged(class QString const &);

    // RVA: 0x154F | Ordinal: 5456
        void progressValue(void) const;

    // RVA: 0x1550 | Ordinal: 5457
        void progressValueChanged(int);

    // RVA: 0x1641 | Ordinal: 5698
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x167E | Ordinal: 5759
        void qt_metacast(char const *);

    // RVA: 0x16C4 | Ordinal: 5829
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1880 | Ordinal: 6273
        void resultReadyAt(int);

    // RVA: 0x1883 | Ordinal: 6276
        void resultsReadyAt(int, int);

    // RVA: 0x1885 | Ordinal: 6278
        void resume(void);

    // RVA: 0x1888 | Ordinal: 6281
        void resumed(void);

    // RVA: 0x1A48 | Ordinal: 6729
        void setPaused(bool);

    // RVA: 0x1A4A | Ordinal: 6731
        void setPendingResultsLimit(int);

    // RVA: 0x1BBF | Ordinal: 7104
        void started(void);

    // RVA: 0x1E62 | Ordinal: 7779
        void togglePaused(void);

    // RVA: 0x1E89 | Ordinal: 7818
        void tr(char const *, char const *, int);

    // RVA: 0x1EC9 | Ordinal: 7882
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1FE7 | Ordinal: 8168
        void waitForFinished(void);

    // RVA: 0x31D | Ordinal: 798
        void _QFutureWatcherBase(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QFUTUREWATCHERBASE_HPP
