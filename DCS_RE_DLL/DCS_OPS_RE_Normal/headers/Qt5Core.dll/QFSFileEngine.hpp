#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QFSFileEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFSFileEngine
{
public:

    // RVA: 0xFB | Ordinal: 252
        void QFSFileEngine(class QFSFileEnginePrivate &);

    // RVA: 0xFC | Ordinal: 253
        void QFSFileEngine(class QString const &);

    // RVA: 0xFD | Ordinal: 254
        void QFSFileEngine(void);

    // RVA: 0x905 | Ordinal: 2310
        void beginEntryList(class QFlags<enum QDir::Filter>, class QStringList const &);

    // RVA: 0x986 | Ordinal: 2439
        void caseSensitive(void) const;

    // RVA: 0x9FE | Ordinal: 2559
        void cloneTo(class QAbstractFileEngine *);

    // RVA: 0xA01 | Ordinal: 2562
        void close(void);

    // RVA: 0xAEE | Ordinal: 2799
        void copy(class QString const &);

    // RVA: 0xB6A | Ordinal: 2923
        void currentPath(class QString const &);

    // RVA: 0xB9D | Ordinal: 2974
        void d_func(void);

    // RVA: 0xB9E | Ordinal: 2975
        void d_func(void) const;

    // RVA: 0xCCB | Ordinal: 3276
        void drives(void);

    // RVA: 0xD2D | Ordinal: 3374
        void endEntryList(void);

    // RVA: 0xD65 | Ordinal: 3430
        void entryList(class QFlags<enum QDir::Filter>, class QStringList const &) const;

    // RVA: 0xDE4 | Ordinal: 3557
        void extension(enum QAbstractFileEngine::Extension, class QAbstractFileEngine::ExtensionOption const *, class QAbstractFileEngine::ExtensionReturn *);

    // RVA: 0xDFB | Ordinal: 3580
        void fileFlags(class QFlags<enum QAbstractFileEngine::FileFlag>) const;

    // RVA: 0xDFF | Ordinal: 3584
        void fileName(enum QAbstractFileEngine::FileName) const;

    // RVA: 0xE12 | Ordinal: 3603
        void fileTime(enum QAbstractFileEngine::FileTime) const;

    // RVA: 0xE75 | Ordinal: 3702
        void flush(void);

    // RVA: 0xF42 | Ordinal: 3907
        void handle(void) const;

    // RVA: 0xF96 | Ordinal: 3991
        void homePath(void);

    // RVA: 0xF9D | Ordinal: 3998
        void id(void) const;

    // RVA: 0x1188 | Ordinal: 4489
        void isRelativePath(void) const;

    // RVA: 0x11A2 | Ordinal: 4515
        void isSequential(void) const;

    // RVA: 0x11EC | Ordinal: 4589
        void isUnnamedFile(void) const;

    // RVA: 0x12A8 | Ordinal: 4777
        void link(class QString const &);

    // RVA: 0x13B4 | Ordinal: 5045
        void mkdir(class QString const &, bool) const;

    // RVA: 0x1482 | Ordinal: 5251
        void open(class QFlags<enum QIODevice::OpenModeFlag>, int);

    // RVA: 0x1483 | Ordinal: 5252
        void open(class QFlags<enum QIODevice::OpenModeFlag>, int, class QFlags<enum QFileDevice::FileHandleFlag>);

    // RVA: 0x1484 | Ordinal: 5253
        void open(class QFlags<enum QIODevice::OpenModeFlag>, struct _iobuf *);

    // RVA: 0x1485 | Ordinal: 5254
        void open(class QFlags<enum QIODevice::OpenModeFlag>, struct _iobuf *, class QFlags<enum QFileDevice::FileHandleFlag>);

    // RVA: 0x1486 | Ordinal: 5255
        void open(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1499 | Ordinal: 5274
        void owner(enum QAbstractFileEngine::FileOwner) const;

    // RVA: 0x149C | Ordinal: 5277
        void ownerId(enum QAbstractFileEngine::FileOwner) const;

    // RVA: 0x14F9 | Ordinal: 5370
        void pos(void) const;

    // RVA: 0x1717 | Ordinal: 5912
        void read(char *, __int64);

    // RVA: 0x1731 | Ordinal: 5938
        void readLine(char *, __int64);

    // RVA: 0x17AE | Ordinal: 6063
        void remove(void);

    // RVA: 0x180D | Ordinal: 6158
        void rename(class QString const &);

    // RVA: 0x1812 | Ordinal: 6163
        void renameOverwrite(class QString const &);

    // RVA: 0x18A2 | Ordinal: 6307
        void rmdir(class QString const &, bool) const;

    // RVA: 0x18AA | Ordinal: 6315
        void rootPath(void);

    // RVA: 0x18FB | Ordinal: 6396
        void seek(__int64);

    // RVA: 0x195C | Ordinal: 6493
        void setCurrentPath(class QString const &);

    // RVA: 0x19B3 | Ordinal: 6580
        void setFileName(class QString const &);

    // RVA: 0x19BD | Ordinal: 6590
        void setFileTime(class QDateTime const &, enum QAbstractFileEngine::FileTime);

    // RVA: 0x1A4D | Ordinal: 6734
        void setPermissions(unsigned int);

    // RVA: 0x1A8E | Ordinal: 6799
        void setSize(__int64);

    // RVA: 0x1B36 | Ordinal: 6967
        void size(void) const;

    // RVA: 0x1C5E | Ordinal: 7263
        void supportsExtension(enum QAbstractFileEngine::Extension) const;

    // RVA: 0x1C95 | Ordinal: 7318
        void syncToDisk(void);

    // RVA: 0x1CC3 | Ordinal: 7364
        void tempPath(void);

    // RVA: 0x2019 | Ordinal: 8218
        void write(char const *, __int64);

    // RVA: 0x311 | Ordinal: 786
        void _QFSFileEngine(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QFSFILEENGINE_HPP
