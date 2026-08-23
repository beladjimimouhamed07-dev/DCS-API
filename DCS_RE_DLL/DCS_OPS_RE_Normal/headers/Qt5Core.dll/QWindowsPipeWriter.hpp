#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QWindowsPipeWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWindowsPipeWriter
{
public:

    // RVA: 0x296 | Ordinal: 663
        void QWindowsPipeWriter(void *, class QObject *);

    // RVA: 0x7AC | Ordinal: 1965
        void _q_queueBytesWritten(struct QWindowsPipeWriter::QPrivateSignal);

    // RVA: 0x93D | Ordinal: 2366
        void bytesToWrite(void) const;

    // RVA: 0x940 | Ordinal: 2369
        void bytesWritten(__int64);

    // RVA: 0x95D | Ordinal: 2398
        void canWrite(void);

    // RVA: 0xCF2 | Ordinal: 3315
        void emitPendingBytesWrittenValue(void);

    // RVA: 0x122A | Ordinal: 4651
        void isWriteOperationActive(void) const;

    // RVA: 0x137E | Ordinal: 4991
        void metaObject(void) const;

    // RVA: 0x1449 | Ordinal: 5194
        void notified(unsigned long, unsigned long);

    // RVA: 0x1666 | Ordinal: 5735
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x16A3 | Ordinal: 5796
        void qt_metacast(char const *);

    // RVA: 0x16EA | Ordinal: 5867
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1C41 | Ordinal: 7234
        void stop(void);

    // RVA: 0x1EAF | Ordinal: 7856
        void tr(char const *, char const *, int);

    // RVA: 0x1EEE | Ordinal: 7919
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1FEB | Ordinal: 8172
        void waitForNotification(int);

    // RVA: 0x1FF3 | Ordinal: 8180
        void waitForWrite(int);

    // RVA: 0x201E | Ordinal: 8223
        void write(class QByteArray const &);

    // RVA: 0x2035 | Ordinal: 8246
        void writeFileCompleted(unsigned long, unsigned long, struct _OVERLAPPED *);

    // RVA: 0x383 | Ordinal: 900
        void _QWindowsPipeWriter(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QWINDOWSPIPEWRITER_HPP
