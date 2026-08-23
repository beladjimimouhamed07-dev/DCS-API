#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QIODevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QIODevice
{
public:

    // RVA: 0x124 | Ordinal: 293
        void QIODevice(class QIODevicePrivate &, class QObject *);

    // RVA: 0x125 | Ordinal: 294
        void QIODevice(class QObject *);

    // RVA: 0x126 | Ordinal: 295
        void QIODevice(void);

    // RVA: 0x7B7 | Ordinal: 1976
        void aboutToClose(void);

    // RVA: 0x8BC | Ordinal: 2237
        void atEnd(void) const;

    // RVA: 0x936 | Ordinal: 2359
        void bytesAvailable(void) const;

    // RVA: 0x93B | Ordinal: 2364
        void bytesToWrite(void) const;

    // RVA: 0x93F | Ordinal: 2368
        void bytesWritten(__int64);

    // RVA: 0x958 | Ordinal: 2393
        void canReadLine(void) const;

    // RVA: 0x9B1 | Ordinal: 2482
        void channelBytesWritten(int, __int64);

    // RVA: 0x9B2 | Ordinal: 2483
        void channelReadyRead(int);

    // RVA: 0xA03 | Ordinal: 2564
        void close(void);

    // RVA: 0xA39 | Ordinal: 2618
        void commitTransaction(void);

    // RVA: 0xB6B | Ordinal: 2924
        void currentReadChannel(void) const;

    // RVA: 0xB78 | Ordinal: 2937
        void currentWriteChannel(void) const;

    // RVA: 0xBB1 | Ordinal: 2994
        void d_func(void);

    // RVA: 0xBB2 | Ordinal: 2995
        void d_func(void) const;

    // RVA: 0xD8C | Ordinal: 3469
        void errorString(void) const;

    // RVA: 0xF21 | Ordinal: 3874
        void getChar(char *);

    // RVA: 0x1160 | Ordinal: 4449
        void isOpen(void) const;

    // RVA: 0x1177 | Ordinal: 4472
        void isReadable(void) const;

    // RVA: 0x11A4 | Ordinal: 4517
        void isSequential(void) const;

    // RVA: 0x11DC | Ordinal: 4573
        void isTextModeEnabled(void) const;

    // RVA: 0x11E2 | Ordinal: 4579
        void isTransactionStarted(void) const;

    // RVA: 0x1226 | Ordinal: 4647
        void isWritable(void) const;

    // RVA: 0x135A | Ordinal: 4955
        void metaObject(void) const;

    // RVA: 0x148A | Ordinal: 5259
        void open(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x148F | Ordinal: 5264
        void openMode(void) const;

    // RVA: 0x14D2 | Ordinal: 5331
        void peek(__int64);

    // RVA: 0x14D3 | Ordinal: 5332
        void peek(char *, __int64);

    // RVA: 0x14FB | Ordinal: 5372
        void pos(void) const;

    // RVA: 0x157C | Ordinal: 5501
        void putChar(char);

    // RVA: 0x1643 | Ordinal: 5700
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1680 | Ordinal: 5761
        void qt_metacast(char const *);

    // RVA: 0x16C6 | Ordinal: 5831
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1718 | Ordinal: 5913
        void read(__int64);

    // RVA: 0x1719 | Ordinal: 5914
        void read(char *, __int64);

    // RVA: 0x1720 | Ordinal: 5921
        void readAll(void);

    // RVA: 0x1728 | Ordinal: 5929
        void readChannelCount(void) const;

    // RVA: 0x1729 | Ordinal: 5930
        void readChannelFinished(void);

    // RVA: 0x1732 | Ordinal: 5939
        void readLine(__int64);

    // RVA: 0x1733 | Ordinal: 5940
        void readLine(char *, __int64);

    // RVA: 0x1737 | Ordinal: 5944
        void readLineData(char *, __int64);

    // RVA: 0x1746 | Ordinal: 5959
        void readyRead(void);

    // RVA: 0x1858 | Ordinal: 6233
        void reset(void);

    // RVA: 0x18A6 | Ordinal: 6311
        void rollbackTransaction(void);

    // RVA: 0x18FD | Ordinal: 6398
        void seek(__int64);

    // RVA: 0x195D | Ordinal: 6494
        void setCurrentReadChannel(int);

    // RVA: 0x1961 | Ordinal: 6498
        void setCurrentWriteChannel(int);

    // RVA: 0x19A2 | Ordinal: 6563
        void setErrorString(class QString const &);

    // RVA: 0x1A2C | Ordinal: 6701
        void setOpenMode(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1AB7 | Ordinal: 6840
        void setTextModeEnabled(bool);

    // RVA: 0x1B3A | Ordinal: 6971
        void size(void) const;

    // RVA: 0x1B49 | Ordinal: 6986
        void skip(__int64);

    // RVA: 0x1BBC | Ordinal: 7101
        void startTransaction(void);

    // RVA: 0x1E8B | Ordinal: 7820
        void tr(char const *, char const *, int);

    // RVA: 0x1ECB | Ordinal: 7884
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F4F | Ordinal: 8016
        void ungetChar(char);

    // RVA: 0x1FE1 | Ordinal: 8162
        void waitForBytesWritten(int);

    // RVA: 0x1FED | Ordinal: 8174
        void waitForReadyRead(int);

    // RVA: 0x201A | Ordinal: 8219
        void write(class QByteArray const &);

    // RVA: 0x201B | Ordinal: 8220
        void write(char const *);

    // RVA: 0x201C | Ordinal: 8221
        void write(char const *, __int64);

    // RVA: 0x2026 | Ordinal: 8231
        void writeChannelCount(void) const;

    // RVA: 0x321 | Ordinal: 802
        void _QIODevice(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QIODEVICE_HPP
