#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QFileDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFileDevice
{
public:

    // RVA: 0x106 | Ordinal: 263
        void QFileDevice(class QFileDevicePrivate &, class QObject *);

    // RVA: 0x107 | Ordinal: 264
        void QFileDevice(class QObject *);

    // RVA: 0x108 | Ordinal: 265
        void QFileDevice(void);

    // RVA: 0x8BB | Ordinal: 2236
        void atEnd(void) const;

    // RVA: 0xA02 | Ordinal: 2563
        void close(void);

    // RVA: 0xBA3 | Ordinal: 2980
        void d_func(void);

    // RVA: 0xBA4 | Ordinal: 2981
        void d_func(void) const;

    // RVA: 0xD80 | Ordinal: 3457
        void error(void) const;

    // RVA: 0xE01 | Ordinal: 3586
        void fileName(void) const;

    // RVA: 0xE13 | Ordinal: 3604
        void fileTime(enum QFileDevice::FileTime) const;

    // RVA: 0xE76 | Ordinal: 3703
        void flush(void);

    // RVA: 0xF43 | Ordinal: 3908
        void handle(void) const;

    // RVA: 0x11A3 | Ordinal: 4516
        void isSequential(void) const;

    // RVA: 0x12F6 | Ordinal: 4855
        void map(__int64, __int64, enum QFileDevice::MemoryMapFlags);

    // RVA: 0x1354 | Ordinal: 4949
        void metaObject(void) const;

    // RVA: 0x14DE | Ordinal: 5343
        void permissions(void) const;

    // RVA: 0x14FA | Ordinal: 5371
        void pos(void) const;

    // RVA: 0x163D | Ordinal: 5694
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x167A | Ordinal: 5755
        void qt_metacast(char const *);

    // RVA: 0x16C0 | Ordinal: 5825
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x172C | Ordinal: 5933
        void readData(char *, __int64);

    // RVA: 0x1736 | Ordinal: 5943
        void readLineData(char *, __int64);

    // RVA: 0x186D | Ordinal: 6254
        void resize(__int64);

    // RVA: 0x18FC | Ordinal: 6397
        void seek(__int64);

    // RVA: 0x19BE | Ordinal: 6591
        void setFileTime(class QDateTime const &, enum QFileDevice::FileTime);

    // RVA: 0x1A50 | Ordinal: 6737
        void setPermissions(class QFlags<enum QFileDevice::Permission>);

    // RVA: 0x1B38 | Ordinal: 6969
        void size(void) const;

    // RVA: 0x1E85 | Ordinal: 7814
        void tr(char const *, char const *, int);

    // RVA: 0x1EC5 | Ordinal: 7878
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F6D | Ordinal: 8046
        void unmap(unsigned char *);

    // RVA: 0x1F7F | Ordinal: 8064
        void unsetError(void);

    // RVA: 0x202C | Ordinal: 8237
        void writeData(char const *, __int64);

    // RVA: 0x315 | Ordinal: 790
        void _QFileDevice(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QFILEDEVICE_HPP
