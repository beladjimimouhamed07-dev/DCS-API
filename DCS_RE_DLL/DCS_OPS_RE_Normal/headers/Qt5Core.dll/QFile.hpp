#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFile
{
public:

    // RVA: 0x101 | Ordinal: 258
        void QFile(class QFilePrivate &, class QObject *);

    // RVA: 0x102 | Ordinal: 259
        void QFile(class QString const &);

    // RVA: 0x103 | Ordinal: 260
        void QFile(class QString const &, class QObject *);

    // RVA: 0x104 | Ordinal: 261
        void QFile(class QObject *);

    // RVA: 0x105 | Ordinal: 262
        void QFile(void);

    // RVA: 0xAEF | Ordinal: 2800
        void copy(class QString const &);

    // RVA: 0xAF0 | Ordinal: 2801
        void copy(class QString const &, class QString const &);

    // RVA: 0xBA1 | Ordinal: 2978
        void d_func(void);

    // RVA: 0xBA2 | Ordinal: 2979
        void d_func(void) const;

    // RVA: 0xC4C | Ordinal: 3149
        void decodeName(class QByteArray const &);

    // RVA: 0xC4D | Ordinal: 3150
        void decodeName(char const *);

    // RVA: 0xD06 | Ordinal: 3335
        void encodeName(class QString const &);

    // RVA: 0xDCE | Ordinal: 3535
        void exists(void) const;

    // RVA: 0xDCF | Ordinal: 3536
        void exists(class QString const &);

    // RVA: 0xE00 | Ordinal: 3585
        void fileName(void) const;

    // RVA: 0x12A9 | Ordinal: 4778
        void link(class QString const &);

    // RVA: 0x12AA | Ordinal: 4779
        void link(class QString const &, class QString const &);

    // RVA: 0x1353 | Ordinal: 4948
        void metaObject(void) const;

    // RVA: 0x13E9 | Ordinal: 5098
        void moveToTrash(void);

    // RVA: 0x13EA | Ordinal: 5099
        void moveToTrash(class QString const &, class QString *);

    // RVA: 0x1487 | Ordinal: 5256
        void open(int, class QFlags<enum QIODevice::OpenModeFlag>, class QFlags<enum QFileDevice::FileHandleFlag>);

    // RVA: 0x1488 | Ordinal: 5257
        void open(struct _iobuf *, class QFlags<enum QIODevice::OpenModeFlag>, class QFlags<enum QFileDevice::FileHandleFlag>);

    // RVA: 0x1489 | Ordinal: 5258
        void open(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x14DC | Ordinal: 5341
        void permissions(class QString const &);

    // RVA: 0x14DD | Ordinal: 5342
        void permissions(void) const;

    // RVA: 0x163C | Ordinal: 5693
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1679 | Ordinal: 5754
        void qt_metacast(char const *);

    // RVA: 0x16BF | Ordinal: 5824
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1739 | Ordinal: 5946
        void readLink(void) const;

    // RVA: 0x173A | Ordinal: 5947
        void readLink(class QString const &);

    // RVA: 0x17AF | Ordinal: 6064
        void remove(void);

    // RVA: 0x17B0 | Ordinal: 6065
        void remove(class QString const &);

    // RVA: 0x180E | Ordinal: 6159
        void rename(class QString const &);

    // RVA: 0x180F | Ordinal: 6160
        void rename(class QString const &, class QString const &);

    // RVA: 0x186B | Ordinal: 6252
        void resize(class QString const &, __int64);

    // RVA: 0x186C | Ordinal: 6253
        void resize(__int64);

    // RVA: 0x1971 | Ordinal: 6514
        void setDecodingFunction(class QString (__cdecl *)(class QByteArray const &));

    // RVA: 0x1997 | Ordinal: 6552
        void setEncodingFunction(class QByteArray (__cdecl *)(class QString const &));

    // RVA: 0x19B4 | Ordinal: 6581
        void setFileName(class QString const &);

    // RVA: 0x1A4E | Ordinal: 6735
        void setPermissions(class QString const &, class QFlags<enum QFileDevice::Permission>);

    // RVA: 0x1A4F | Ordinal: 6736
        void setPermissions(class QFlags<enum QFileDevice::Permission>);

    // RVA: 0x1B37 | Ordinal: 6968
        void size(void) const;

    // RVA: 0x1C8E | Ordinal: 7311
        void symLinkTarget(void) const;

    // RVA: 0x1C8F | Ordinal: 7312
        void symLinkTarget(class QString const &);

    // RVA: 0x1E84 | Ordinal: 7813
        void tr(char const *, char const *, int);

    // RVA: 0x1EC4 | Ordinal: 7877
        void trUtf8(char const *, char const *, int);

    // RVA: 0x314 | Ordinal: 789
        void _QFile(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QFILE_HPP
