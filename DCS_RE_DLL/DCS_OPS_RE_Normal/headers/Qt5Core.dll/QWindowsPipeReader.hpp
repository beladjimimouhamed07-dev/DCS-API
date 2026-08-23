#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QWindowsPipeReader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWindowsPipeReader
{
public:

    // RVA: 0x295 | Ordinal: 662
        void QWindowsPipeReader(class QObject *);

    // RVA: 0x7AD | Ordinal: 1966
        void _q_queueReadyRead(struct QWindowsPipeReader::QPrivateSignal);

    // RVA: 0x939 | Ordinal: 2362
        void bytesAvailable(void) const;

    // RVA: 0x95A | Ordinal: 2395
        void canReadLine(void) const;

    // RVA: 0x9B9 | Ordinal: 2490
        void checkPipeState(void);

    // RVA: 0xCF3 | Ordinal: 3316
        void emitPendingReadyRead(void);

    // RVA: 0x1165 | Ordinal: 4454
        void isPipeClosed(void) const;

    // RVA: 0x1174 | Ordinal: 4469
        void isReadOperationActive(void) const;

    // RVA: 0x1329 | Ordinal: 4906
        void maxReadBufferSize(void) const;

    // RVA: 0x137D | Ordinal: 4990
        void metaObject(void) const;

    // RVA: 0x1448 | Ordinal: 5193
        void notified(unsigned long, unsigned long);

    // RVA: 0x14E2 | Ordinal: 5347
        void pipeClosed(void);

    // RVA: 0x1665 | Ordinal: 5734
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x16A2 | Ordinal: 5795
        void qt_metacast(char const *);

    // RVA: 0x16E9 | Ordinal: 5866
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x171F | Ordinal: 5920
        void read(char *, __int64);

    // RVA: 0x172F | Ordinal: 5936
        void readFileCompleted(unsigned long, unsigned long, struct _OVERLAPPED *);

    // RVA: 0x1748 | Ordinal: 5961
        void readyRead(void);

    // RVA: 0x19D6 | Ordinal: 6615
        void setHandle(void *);

    // RVA: 0x1A0B | Ordinal: 6668
        void setMaxReadBufferSize(__int64);

    // RVA: 0x1BAB | Ordinal: 7084
        void startAsyncRead(void);

    // RVA: 0x1C40 | Ordinal: 7233
        void stop(void);

    // RVA: 0x1EAE | Ordinal: 7855
        void tr(char const *, char const *, int);

    // RVA: 0x1EED | Ordinal: 7918
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1FEA | Ordinal: 8171
        void waitForNotification(int);

    // RVA: 0x1FEC | Ordinal: 8173
        void waitForPipeClosed(int);

    // RVA: 0x1FEF | Ordinal: 8176
        void waitForReadyRead(int);

    // RVA: 0x200D | Ordinal: 8206
        void winError(unsigned long, class QString const &);

    // RVA: 0x382 | Ordinal: 899
        void _QWindowsPipeReader(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QWINDOWSPIPEREADER_HPP
