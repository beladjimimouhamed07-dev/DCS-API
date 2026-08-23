#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QFileInfo
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFileInfo
{
public:

    // RVA: 0x109 | Ordinal: 266
        void QFileInfo(class QFileInfo const &);

    // RVA: 0x10A | Ordinal: 267
        void QFileInfo(class QDir const &, class QString const &);

    // RVA: 0x10B | Ordinal: 268
        void QFileInfo(class QFile const &);

    // RVA: 0x10C | Ordinal: 269
        void QFileInfo(class QString const &);

    // RVA: 0x10D | Ordinal: 270
        void QFileInfo(class QFileInfoPrivate *);

    // RVA: 0x10E | Ordinal: 271
        void QFileInfo(void);

    // RVA: 0x7B9 | Ordinal: 1978
        void absoluteDir(void) const;

    // RVA: 0x7BB | Ordinal: 1980
        void absoluteFilePath(void) const;

    // RVA: 0x7C0 | Ordinal: 1985
        void absolutePath(void) const;

    // RVA: 0x8E3 | Ordinal: 2276
        void baseName(void) const;

    // RVA: 0x916 | Ordinal: 2327
        void birthTime(void) const;

    // RVA: 0x933 | Ordinal: 2356
        void bundleName(void) const;

    // RVA: 0x943 | Ordinal: 2372
        void caching(void) const;

    // RVA: 0x965 | Ordinal: 2406
        void canonicalFilePath(void) const;

    // RVA: 0x967 | Ordinal: 2408
        void canonicalPath(void) const;

    // RVA: 0xA64 | Ordinal: 2661
        void completeBaseName(void) const;

    // RVA: 0xA65 | Ordinal: 2662
        void completeSuffix(void) const;

    // RVA: 0xB44 | Ordinal: 2885
        void created(void) const;

    // RVA: 0xBA5 | Ordinal: 2982
        void d_func(void);

    // RVA: 0xBA6 | Ordinal: 2983
        void d_func(void) const;

    // RVA: 0xC9F | Ordinal: 3232
        void dir(void) const;

    // RVA: 0xDD0 | Ordinal: 3537
        void exists(void) const;

    // RVA: 0xDD1 | Ordinal: 3538
        void exists(class QString const &);

    // RVA: 0xE02 | Ordinal: 3587
        void fileName(void) const;

    // RVA: 0xE0C | Ordinal: 3597
        void filePath(void) const;

    // RVA: 0xE14 | Ordinal: 3605
        void fileTime(enum QFileDevice::FileTime) const;

    // RVA: 0xF3A | Ordinal: 3899
        void group(void) const;

    // RVA: 0xF3D | Ordinal: 3902
        void groupId(void) const;

    // RVA: 0x106D | Ordinal: 4206
        void isAbsolute(void) const;

    // RVA: 0x1088 | Ordinal: 4233
        void isBundle(void) const;

    // RVA: 0x10B9 | Ordinal: 4282
        void isDir(void) const;

    // RVA: 0x10E5 | Ordinal: 4326
        void isExecutable(void) const;

    // RVA: 0x10EC | Ordinal: 4333
        void isFile(void) const;

    // RVA: 0x10FC | Ordinal: 4349
        void isHidden(void) const;

    // RVA: 0x110A | Ordinal: 4363
        void isJunction(void) const;

    // RVA: 0x113C | Ordinal: 4413
        void isNativePath(void) const;

    // RVA: 0x1176 | Ordinal: 4471
        void isReadable(void) const;

    // RVA: 0x1184 | Ordinal: 4485
        void isRelative(void) const;

    // RVA: 0x1191 | Ordinal: 4498
        void isRoot(void) const;

    // RVA: 0x11B0 | Ordinal: 4529
        void isShortcut(void) const;

    // RVA: 0x11D3 | Ordinal: 4564
        void isSymLink(void) const;

    // RVA: 0x11D6 | Ordinal: 4567
        void isSymbolicLink(void) const;

    // RVA: 0x1225 | Ordinal: 4646
        void isWritable(void) const;

    // RVA: 0x1283 | Ordinal: 4740
        void lastModified(void) const;

    // RVA: 0x1285 | Ordinal: 4742
        void lastRead(void) const;

    // RVA: 0x12EF | Ordinal: 4848
        void makeAbsolute(void);

    // RVA: 0x1382 | Ordinal: 4995
        void metadataChangeTime(void) const;

    // RVA: 0x149A | Ordinal: 5275
        void owner(void) const;

    // RVA: 0x149D | Ordinal: 5278
        void ownerId(void) const;

    // RVA: 0x14C4 | Ordinal: 5317
        void path(void) const;

    // RVA: 0x14DB | Ordinal: 5340
        void permission(class QFlags<enum QFileDevice::Permission>) const;

    // RVA: 0x14DF | Ordinal: 5344
        void permissions(void) const;

    // RVA: 0x173B | Ordinal: 5948
        void readLink(void) const;

    // RVA: 0x1764 | Ordinal: 5989
        void refresh(void);

    // RVA: 0x1945 | Ordinal: 6470
        void setCaching(bool);

    // RVA: 0x19AF | Ordinal: 6576
        void setFile(class QDir const &, class QString const &);

    // RVA: 0x19B0 | Ordinal: 6577
        void setFile(class QFile const &);

    // RVA: 0x19B1 | Ordinal: 6578
        void setFile(class QString const &);

    // RVA: 0x1B39 | Ordinal: 6970
        void size(void) const;

    // RVA: 0x1BDD | Ordinal: 7134
        void stat(void);

    // RVA: 0x1C52 | Ordinal: 7251
        void suffix(void) const;

    // RVA: 0x1C74 | Ordinal: 7285
        void swap(class QFileInfo &);

    // RVA: 0x1C90 | Ordinal: 7313
        void symLinkTarget(void) const;

    // RVA: 0x316 | Ordinal: 791
        void _QFileInfo(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QFILEINFO_HPP
