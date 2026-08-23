#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractFileEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractFileEngine
{
public:

    // RVA: 0x2E | Ordinal: 47
        void QAbstractFileEngine(class QAbstractFileEnginePrivate &);

    // RVA: 0x2F | Ordinal: 48
        void QAbstractFileEngine(void);

    // RVA: 0x8B8 | Ordinal: 2233
        void atEnd(void) const;

    // RVA: 0x904 | Ordinal: 2309
        void beginEntryList(class QFlags<enum QDir::Filter>, class QStringList const &);

    // RVA: 0x985 | Ordinal: 2438
        void caseSensitive(void) const;

    // RVA: 0x9FD | Ordinal: 2558
        void cloneTo(class QAbstractFileEngine *);

    // RVA: 0x9FF | Ordinal: 2560
        void close(void);

    // RVA: 0xAED | Ordinal: 2798
        void copy(class QString const &);

    // RVA: 0xB20 | Ordinal: 2849
        void create(class QString const &);

    // RVA: 0xB81 | Ordinal: 2946
        void d_func(void);

    // RVA: 0xB82 | Ordinal: 2947
        void d_func(void) const;

    // RVA: 0xD2C | Ordinal: 3373
        void endEntryList(void);

    // RVA: 0xD62 | Ordinal: 3427
        void entryList(class QFlags<enum QDir::Filter>, class QStringList const &) const;

    // RVA: 0xD7F | Ordinal: 3456
        void error(void) const;

    // RVA: 0xD8B | Ordinal: 3468
        void errorString(void) const;

    // RVA: 0xDE3 | Ordinal: 3556
        void extension(enum QAbstractFileEngine::Extension, class QAbstractFileEngine::ExtensionOption const *, class QAbstractFileEngine::ExtensionReturn *);

    // RVA: 0xDFA | Ordinal: 3579
        void fileFlags(class QFlags<enum QAbstractFileEngine::FileFlag>) const;

    // RVA: 0xDFD | Ordinal: 3582
        void fileName(enum QAbstractFileEngine::FileName) const;

    // RVA: 0xE11 | Ordinal: 3602
        void fileTime(enum QAbstractFileEngine::FileTime) const;

    // RVA: 0xE72 | Ordinal: 3699
        void flush(void);

    // RVA: 0xF41 | Ordinal: 3906
        void handle(void) const;

    // RVA: 0xF9C | Ordinal: 3997
        void id(void) const;

    // RVA: 0x1186 | Ordinal: 4487
        void isRelativePath(void) const;

    // RVA: 0x11A1 | Ordinal: 4514
        void isSequential(void) const;

    // RVA: 0x12A7 | Ordinal: 4776
        void link(class QString const &);

    // RVA: 0x12F5 | Ordinal: 4854
        void map(__int64, __int64, enum QFileDevice::MemoryMapFlags);

    // RVA: 0x13B2 | Ordinal: 5043
        void mkdir(class QString const &, bool) const;

    // RVA: 0x1480 | Ordinal: 5249
        void open(class QFlags<enum QIODevice::OpenModeFlag>);

    // RVA: 0x1498 | Ordinal: 5273
        void owner(enum QAbstractFileEngine::FileOwner) const;

    // RVA: 0x149B | Ordinal: 5276
        void ownerId(enum QAbstractFileEngine::FileOwner) const;

    // RVA: 0x14F7 | Ordinal: 5368
        void pos(void) const;

    // RVA: 0x1716 | Ordinal: 5911
        void read(char *, __int64);

    // RVA: 0x1730 | Ordinal: 5937
        void readLine(char *, __int64);

    // RVA: 0x17A7 | Ordinal: 6056
        void remove(void);

    // RVA: 0x180B | Ordinal: 6156
        void rename(class QString const &);

    // RVA: 0x1811 | Ordinal: 6162
        void renameOverwrite(class QString const &);

    // RVA: 0x18A0 | Ordinal: 6305
        void rmdir(class QString const &, bool) const;

    // RVA: 0x18F9 | Ordinal: 6394
        void seek(__int64);

    // RVA: 0x199F | Ordinal: 6560
        void setError(enum QFileDevice::FileError, class QString const &);

    // RVA: 0x19B2 | Ordinal: 6579
        void setFileName(class QString const &);

    // RVA: 0x19BC | Ordinal: 6589
        void setFileTime(class QDateTime const &, enum QAbstractFileEngine::FileTime);

    // RVA: 0x1A4C | Ordinal: 6733
        void setPermissions(unsigned int);

    // RVA: 0x1A8D | Ordinal: 6798
        void setSize(__int64);

    // RVA: 0x1B2F | Ordinal: 6960
        void size(void) const;

    // RVA: 0x1C5D | Ordinal: 7262
        void supportsExtension(enum QAbstractFileEngine::Extension) const;

    // RVA: 0x1C94 | Ordinal: 7317
        void syncToDisk(void);

    // RVA: 0x1F6C | Ordinal: 8045
        void unmap(unsigned char *);

    // RVA: 0x2018 | Ordinal: 8217
        void write(char const *, __int64);

    // RVA: 0x2D7 | Ordinal: 728
        void _QAbstractFileEngine(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTFILEENGINE_HPP
