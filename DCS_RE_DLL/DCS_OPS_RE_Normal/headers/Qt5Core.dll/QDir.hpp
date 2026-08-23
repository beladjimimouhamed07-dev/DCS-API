#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QDir
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDir
{
public:

    // RVA: 0xDB | Ordinal: 220
        void QDir(class QDirPrivate &);

    // RVA: 0xDC | Ordinal: 221
        void QDir(class QDir const &);

    // RVA: 0xDD | Ordinal: 222
        void QDir(class QString const &, class QString const &, class QFlags<enum QDir::SortFlag>, class QFlags<enum QDir::Filter>);

    // RVA: 0xDE | Ordinal: 223
        void QDir(class QString const &);

    // RVA: 0x7BA | Ordinal: 1979
        void absoluteFilePath(class QString const &) const;

    // RVA: 0x7BF | Ordinal: 1984
        void absolutePath(void) const;

    // RVA: 0x80C | Ordinal: 2061
        void addResourceSearchPath(class QString const &);

    // RVA: 0x80F | Ordinal: 2064
        void addSearchPath(class QString const &, class QString const &);

    // RVA: 0x966 | Ordinal: 2407
        void canonicalPath(void) const;

    // RVA: 0x99A | Ordinal: 2459
        void cd(class QString const &);

    // RVA: 0x99B | Ordinal: 2460
        void cdUp(void);

    // RVA: 0x9D6 | Ordinal: 2519
        void cleanPath(class QString const &);

    // RVA: 0xB02 | Ordinal: 2819
        void count(void) const;

    // RVA: 0xB56 | Ordinal: 2903
        void current(void);

    // RVA: 0xB69 | Ordinal: 2922
        void currentPath(void);

    // RVA: 0xB95 | Ordinal: 2966
        void d_func(void);

    // RVA: 0xB96 | Ordinal: 2967
        void d_func(void) const;

    // RVA: 0xCA0 | Ordinal: 3233
        void dirName(void) const;

    // RVA: 0xCCA | Ordinal: 3275
        void drives(void);

    // RVA: 0xD60 | Ordinal: 3425
        void entryInfoList(class QStringList const &, class QFlags<enum QDir::Filter>, class QFlags<enum QDir::SortFlag>) const;

    // RVA: 0xD61 | Ordinal: 3426
        void entryInfoList(class QFlags<enum QDir::Filter>, class QFlags<enum QDir::SortFlag>) const;

    // RVA: 0xD63 | Ordinal: 3428
        void entryList(class QStringList const &, class QFlags<enum QDir::Filter>, class QFlags<enum QDir::SortFlag>) const;

    // RVA: 0xD64 | Ordinal: 3429
        void entryList(class QFlags<enum QDir::Filter>, class QFlags<enum QDir::SortFlag>) const;

    // RVA: 0xDCC | Ordinal: 3533
        void exists(class QString const &) const;

    // RVA: 0xDCD | Ordinal: 3534
        void exists(void) const;

    // RVA: 0xE0A | Ordinal: 3595
        void filePath(class QString const &) const;

    // RVA: 0xE1D | Ordinal: 3614
        void filter(void) const;

    // RVA: 0xEBF | Ordinal: 3776
        void fromNativeSeparators(class QString const &);

    // RVA: 0xF94 | Ordinal: 3989
        void home(void);

    // RVA: 0xF95 | Ordinal: 3990
        void homePath(void);

    // RVA: 0x106C | Ordinal: 4205
        void isAbsolute(void) const;

    // RVA: 0x106E | Ordinal: 4207
        void isAbsolutePath(class QString const &);

    // RVA: 0x10CA | Ordinal: 4299
        void isEmpty(class QFlags<enum QDir::Filter>) const;

    // RVA: 0x1175 | Ordinal: 4470
        void isReadable(void) const;

    // RVA: 0x1183 | Ordinal: 4484
        void isRelative(void) const;

    // RVA: 0x1187 | Ordinal: 4488
        void isRelativePath(class QString const &);

    // RVA: 0x1190 | Ordinal: 4497
        void isRoot(void) const;

    // RVA: 0x12AC | Ordinal: 4781
        void listSeparator(void);

    // RVA: 0x12EE | Ordinal: 4847
        void makeAbsolute(void);

    // RVA: 0x1319 | Ordinal: 4890
        void match(class QString const &, class QString const &);

    // RVA: 0x131A | Ordinal: 4891
        void match(class QStringList const &, class QString const &);

    // RVA: 0x13B3 | Ordinal: 5044
        void mkdir(class QString const &) const;

    // RVA: 0x13B5 | Ordinal: 5046
        void mkpath(class QString const &) const;

    // RVA: 0x1415 | Ordinal: 5142
        void nameFilters(void) const;

    // RVA: 0x1416 | Ordinal: 5143
        void nameFiltersFromString(class QString const &);

    // RVA: 0x14C2 | Ordinal: 5315
        void path(void) const;

    // RVA: 0x1763 | Ordinal: 5988
        void refresh(void) const;

    // RVA: 0x1792 | Ordinal: 6035
        void relativeFilePath(class QString const &) const;

    // RVA: 0x17AD | Ordinal: 6062
        void remove(class QString const &);

    // RVA: 0x17FD | Ordinal: 6142
        void removeRecursively(void);

    // RVA: 0x180C | Ordinal: 6157
        void rename(class QString const &, class QString const &);

    // RVA: 0x18A1 | Ordinal: 6306
        void rmdir(class QString const &) const;

    // RVA: 0x18A3 | Ordinal: 6308
        void rmpath(class QString const &) const;

    // RVA: 0x18A7 | Ordinal: 6312
        void root(void);

    // RVA: 0x18A9 | Ordinal: 6314
        void rootPath(void);

    // RVA: 0x18E5 | Ordinal: 6374
        void searchPaths(class QString const &);

    // RVA: 0x1921 | Ordinal: 6434
        void separator(void);

    // RVA: 0x195A | Ordinal: 6491
        void setCurrent(class QString const &);

    // RVA: 0x19BF | Ordinal: 6592
        void setFilter(class QFlags<enum QDir::Filter>);

    // RVA: 0x1A0F | Ordinal: 6672
        void setNameFilters(class QStringList const &);

    // RVA: 0x1A3C | Ordinal: 6717
        void setPath(class QString const &);

    // RVA: 0x1A82 | Ordinal: 6787
        void setSearchPaths(class QString const &, class QStringList const &);

    // RVA: 0x1A96 | Ordinal: 6807
        void setSorting(class QFlags<enum QDir::SortFlag>);

    // RVA: 0x1B60 | Ordinal: 7009
        void sorting(void) const;

    // RVA: 0x1C72 | Ordinal: 7283
        void swap(class QDir &);

    // RVA: 0x1CC1 | Ordinal: 7362
        void temp(void);

    // RVA: 0x1CC2 | Ordinal: 7363
        void tempPath(void);

    // RVA: 0x1D9C | Ordinal: 7581
        void toNativeSeparators(class QString const &);

    // RVA: 0x304 | Ordinal: 773
        void _QDir(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QDIR_HPP
