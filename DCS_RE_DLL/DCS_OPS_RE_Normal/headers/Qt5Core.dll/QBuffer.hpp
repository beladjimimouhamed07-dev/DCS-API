#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QBuffer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBuffer
{
public:

    // RVA: 0x5D | Ordinal: 94
        void QBuffer(class QByteArray *, class QObject *);

    // RVA: 0x5E | Ordinal: 95
        void QBuffer(class QObject *);

    // RVA: 0x8B9 | Ordinal: 2234
        void atEnd(void) const;

    // RVA: 0x92D | Ordinal: 2350
        void buffer(void);

    // RVA: 0x92E | Ordinal: 2351
        void buffer(void) const;

    // RVA: 0x957 | Ordinal: 2392
        void canReadLine(void) const;

    // RVA: 0xA00 | Ordinal: 2561
        void close(void);

    // RVA: 0xA7A | Ordinal: 2683
        void connectNotify(class QMetaMethod const &);

    // RVA: 0xB8F | Ordinal: 2960
        void d_func(void);

    // RVA: 0xB90 | Ordinal: 2961
        void d_func(void) const;

    // RVA: 0xBFD | Ordinal: 3070
        void data(void) const;

    // RVA: 0xCB3 | Ordinal: 3252
        void disconnectNotify(class QMetaMethod const &);

    // RVA: 0x134C | Ordinal: 4941
        void metaObject(void) const;

    // RVA: 0x1481 | Ordinal: 5250
        void open(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x14F8 | Ordinal: 5369
        void pos(void) const;

    // RVA: 0x1635 | Ordinal: 5686
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1672 | Ordinal: 5747
        void qt_metacast(char const *);

    // RVA: 0x16B8 | Ordinal: 5817
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x172B | Ordinal: 5932
        void readData(char *, __int64);

    // RVA: 0x18FA | Ordinal: 6395
        void seek(__int64);

    // RVA: 0x1943 | Ordinal: 6468
        void setBuffer(class QByteArray *);

    // RVA: 0x1967 | Ordinal: 6504
        void setData(class QByteArray const &);

    // RVA: 0x1968 | Ordinal: 6505
        void setData(char const *, int);

    // RVA: 0x1B32 | Ordinal: 6963
        void size(void) const;

    // RVA: 0x1E7B | Ordinal: 7804
        void tr(char const *, char const *, int);

    // RVA: 0x1EBB | Ordinal: 7868
        void trUtf8(char const *, char const *, int);

    // RVA: 0x202B | Ordinal: 8236
        void writeData(char const *, __int64);

    // RVA: 0x2EB | Ordinal: 748
        void _QBuffer(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QBUFFER_HPP
