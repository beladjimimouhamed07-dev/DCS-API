#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QFileSystemModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QFileSystemModel
{
public:

    // RVA: 0x50 | Ordinal: 81
        void QFileSystemModel(class QFileSystemModelPrivate &, class QObject *);

    // RVA: 0x51 | Ordinal: 82
        void QFileSystemModel(class QObject *);

    // RVA: 0x684 | Ordinal: 1669
        void canFetchMore(class QModelIndex const &) const;

    // RVA: 0x779 | Ordinal: 1914
        void columnCount(class QModelIndex const &) const;

    // RVA: 0x8E5 | Ordinal: 2278
        void d_func(void);

    // RVA: 0x8E6 | Ordinal: 2279
        void d_func(void) const;

    // RVA: 0x9DF | Ordinal: 2528
        void data(class QModelIndex const &, int) const;

    // RVA: 0xA1B | Ordinal: 2588
        void directoryLoaded(class QString const &);

    // RVA: 0xAE1 | Ordinal: 2786
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xB3D | Ordinal: 2878
        void event(class QEvent *);

    // RVA: 0xBB8 | Ordinal: 3001
        void fetchMore(class QModelIndex const &);

    // RVA: 0xBBD | Ordinal: 3006
        void fileIcon(class QModelIndex const &) const;

    // RVA: 0xBBF | Ordinal: 3008
        void fileInfo(class QModelIndex const &) const;

    // RVA: 0xBC2 | Ordinal: 3011
        void fileName(class QModelIndex const &) const;

    // RVA: 0xBC4 | Ordinal: 3013
        void filePath(class QModelIndex const &) const;

    // RVA: 0xBC5 | Ordinal: 3014
        void fileRenamed(class QString const &, class QString const &, class QString const &);

    // RVA: 0xBCB | Ordinal: 3020
        void filter(void) const;

    // RVA: 0xBF6 | Ordinal: 3063
        void flags(class QModelIndex const &) const;

    // RVA: 0xCDF | Ordinal: 3296
        void hasChildren(class QModelIndex const &) const;

    // RVA: 0xD01 | Ordinal: 3330
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0xD90 | Ordinal: 3473
        void iconProvider(void) const;

    // RVA: 0xDAE | Ordinal: 3503
        void index(class QString const &, int) const;

    // RVA: 0xDAF | Ordinal: 3504
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0xECB | Ordinal: 3788
        void isDir(class QModelIndex const &) const;

    // RVA: 0xF32 | Ordinal: 3891
        void isReadOnly(void) const;

    // RVA: 0x1031 | Ordinal: 4146
        void lastModified(class QModelIndex const &) const;

    // RVA: 0x112E | Ordinal: 4399
        void metaObject(void) const;

    // RVA: 0x11A4 | Ordinal: 4517
        void mimeData(class QList<class QModelIndex> const &) const;

    // RVA: 0x11AB | Ordinal: 4524
        void mimeTypes(void) const;

    // RVA: 0x11E9 | Ordinal: 4586
        void mkdir(class QModelIndex const &, class QString const &);

    // RVA: 0x128E | Ordinal: 4751
        void myComputer(int) const;

    // RVA: 0x128F | Ordinal: 4752
        void nameFilterDisables(void) const;

    // RVA: 0x1292 | Ordinal: 4755
        void nameFilters(void) const;

    // RVA: 0x12EA | Ordinal: 4843
        void options(void) const;

    // RVA: 0x135E | Ordinal: 4959
        void parent(class QModelIndex const &) const;

    // RVA: 0x137C | Ordinal: 4989
        void permissions(class QModelIndex const &) const;

    // RVA: 0x1447 | Ordinal: 5192
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14DA | Ordinal: 5339
        void qt_metacast(char const *);

    // RVA: 0x1570 | Ordinal: 5489
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1624 | Ordinal: 5669
        void remove(class QModelIndex const &);

    // RVA: 0x16CB | Ordinal: 5836
        void resolveSymlinks(void) const;

    // RVA: 0x16DE | Ordinal: 5855
        void rmdir(class QModelIndex const &);

    // RVA: 0x16E0 | Ordinal: 5857
        void rootDirectory(void) const;

    // RVA: 0x16E7 | Ordinal: 5864
        void rootPath(void) const;

    // RVA: 0x16E8 | Ordinal: 5865
        void rootPathChanged(class QString const &);

    // RVA: 0x16F6 | Ordinal: 5879
        void rowCount(class QModelIndex const &) const;

    // RVA: 0x18E8 | Ordinal: 6377
        void setData(class QModelIndex const &, class QVariant const &, int);

    // RVA: 0x1970 | Ordinal: 6513
        void setFilter(class QFlags<enum QDir::Filter>);

    // RVA: 0x1A0D | Ordinal: 6670
        void setIconProvider(class QFileIconProvider *);

    // RVA: 0x1AE8 | Ordinal: 6889
        void setNameFilterDisables(bool);

    // RVA: 0x1AEB | Ordinal: 6892
        void setNameFilters(class QStringList const &);

    // RVA: 0x1B15 | Ordinal: 6934
        void setOption(enum QFileSystemModel::Option, bool);

    // RVA: 0x1B1E | Ordinal: 6943
        void setOptions(class QFlags<enum QFileSystemModel::Option>);

    // RVA: 0x1B7F | Ordinal: 7040
        void setReadOnly(bool);

    // RVA: 0x1B96 | Ordinal: 7063
        void setResolveSymlinks(bool);

    // RVA: 0x1BA2 | Ordinal: 7075
        void setRootPath(class QString const &);

    // RVA: 0x1DCE | Ordinal: 7631
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x1DD6 | Ordinal: 7639
        void size(class QModelIndex const &) const;

    // RVA: 0x1E34 | Ordinal: 7733
        void sort(int, enum Qt::SortOrder);

    // RVA: 0x1F65 | Ordinal: 8038
        void supportedDropActions(void) const;

    // RVA: 0x1FCA | Ordinal: 8139
        void testOption(enum QFileSystemModel::Option) const;

    // RVA: 0x2020 | Ordinal: 8225
        void timerEvent(class QTimerEvent *);

    // RVA: 0x2096 | Ordinal: 8343
        void tr(char const *, char const *, int);

    // RVA: 0x2129 | Ordinal: 8490
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21BA | Ordinal: 8635
        void type(class QModelIndex const &) const;

    // RVA: 0x1DD | Ordinal: 478
        void _QFileSystemModel(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QFILESYSTEMMODEL_HPP
