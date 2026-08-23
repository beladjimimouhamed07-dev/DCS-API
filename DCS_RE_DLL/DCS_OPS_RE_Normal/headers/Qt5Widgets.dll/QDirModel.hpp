#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDirModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDirModel
{
public:

    // RVA: 0x42 | Ordinal: 67
        void QDirModel(class QDirModelPrivate &, class QObject *);

    // RVA: 0x43 | Ordinal: 68
        void QDirModel(class QStringList const &, class QFlags<enum QDir::Filter>, class QFlags<enum QDir::SortFlag>, class QObject *);

    // RVA: 0x44 | Ordinal: 69
        void QDirModel(class QObject *);

    // RVA: 0x778 | Ordinal: 1913
        void columnCount(class QModelIndex const &) const;

    // RVA: 0x8D9 | Ordinal: 2266
        void d_func(void);

    // RVA: 0x8DA | Ordinal: 2267
        void d_func(void) const;

    // RVA: 0x9DE | Ordinal: 2527
        void data(class QModelIndex const &, int) const;

    // RVA: 0xAE0 | Ordinal: 2785
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xBBC | Ordinal: 3005
        void fileIcon(class QModelIndex const &) const;

    // RVA: 0xBBE | Ordinal: 3007
        void fileInfo(class QModelIndex const &) const;

    // RVA: 0xBC1 | Ordinal: 3010
        void fileName(class QModelIndex const &) const;

    // RVA: 0xBC3 | Ordinal: 3012
        void filePath(class QModelIndex const &) const;

    // RVA: 0xBC9 | Ordinal: 3018
        void filter(void) const;

    // RVA: 0xBF5 | Ordinal: 3062
        void flags(class QModelIndex const &) const;

    // RVA: 0xCDE | Ordinal: 3295
        void hasChildren(class QModelIndex const &) const;

    // RVA: 0xD00 | Ordinal: 3329
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0xD8E | Ordinal: 3471
        void iconProvider(void) const;

    // RVA: 0xDAC | Ordinal: 3501
        void index(class QString const &, int) const;

    // RVA: 0xDAD | Ordinal: 3502
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0xECA | Ordinal: 3787
        void isDir(class QModelIndex const &) const;

    // RVA: 0xF30 | Ordinal: 3889
        void isReadOnly(void) const;

    // RVA: 0x104E | Ordinal: 4175
        void lazyChildCount(void) const;

    // RVA: 0x1128 | Ordinal: 4393
        void metaObject(void) const;

    // RVA: 0x11A3 | Ordinal: 4516
        void mimeData(class QList<class QModelIndex> const &) const;

    // RVA: 0x11AA | Ordinal: 4523
        void mimeTypes(void) const;

    // RVA: 0x11E8 | Ordinal: 4585
        void mkdir(class QModelIndex const &, class QString const &);

    // RVA: 0x1290 | Ordinal: 4753
        void nameFilters(void) const;

    // RVA: 0x135D | Ordinal: 4958
        void parent(class QModelIndex const &) const;

    // RVA: 0x1441 | Ordinal: 5186
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14D4 | Ordinal: 5333
        void qt_metacast(char const *);

    // RVA: 0x156A | Ordinal: 5483
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1611 | Ordinal: 5650
        void refresh(class QModelIndex const &);

    // RVA: 0x1623 | Ordinal: 5668
        void remove(class QModelIndex const &);

    // RVA: 0x16C9 | Ordinal: 5834
        void resolveSymlinks(void) const;

    // RVA: 0x16DD | Ordinal: 5854
        void rmdir(class QModelIndex const &);

    // RVA: 0x16F5 | Ordinal: 5878
        void rowCount(class QModelIndex const &) const;

    // RVA: 0x18E7 | Ordinal: 6376
        void setData(class QModelIndex const &, class QVariant const &, int);

    // RVA: 0x196E | Ordinal: 6511
        void setFilter(class QFlags<enum QDir::Filter>);

    // RVA: 0x1A0B | Ordinal: 6668
        void setIconProvider(class QFileIconProvider *);

    // RVA: 0x1A72 | Ordinal: 6771
        void setLazyChildCount(bool);

    // RVA: 0x1AE9 | Ordinal: 6890
        void setNameFilters(class QStringList const &);

    // RVA: 0x1B7D | Ordinal: 7038
        void setReadOnly(bool);

    // RVA: 0x1B94 | Ordinal: 7061
        void setResolveSymlinks(bool);

    // RVA: 0x1C26 | Ordinal: 7207
        void setSorting(class QFlags<enum QDir::SortFlag>);

    // RVA: 0x1E33 | Ordinal: 7732
        void sort(int, enum Qt::SortOrder);

    // RVA: 0x1E43 | Ordinal: 7748
        void sorting(void) const;

    // RVA: 0x1F64 | Ordinal: 8037
        void supportedDropActions(void) const;

    // RVA: 0x2090 | Ordinal: 8337
        void tr(char const *, char const *, int);

    // RVA: 0x2123 | Ordinal: 8484
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1D4 | Ordinal: 469
        void _QDirModel(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDIRMODEL_HPP
