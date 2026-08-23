#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSortFilterProxyModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSortFilterProxyModel
{
public:

    // RVA: 0x1F6 | Ordinal: 503
        void QSortFilterProxyModel(class QObject *);

    // RVA: 0x92C | Ordinal: 2349
        void buddy(class QModelIndex const &) const;

    // RVA: 0x955 | Ordinal: 2390
        void canFetchMore(class QModelIndex const &) const;

    // RVA: 0x9E8 | Ordinal: 2537
        void clear(void);

    // RVA: 0xA24 | Ordinal: 2597
        void columnCount(class QModelIndex const &) const;

    // RVA: 0xBD8 | Ordinal: 3033
        void d_func(void);

    // RVA: 0xBD9 | Ordinal: 3034
        void d_func(void) const;

    // RVA: 0xC08 | Ordinal: 3081
        void data(class QModelIndex const &, int) const;

    // RVA: 0xCD2 | Ordinal: 3283
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xCE9 | Ordinal: 3306
        void dynamicSortFilter(void) const;

    // RVA: 0xCEA | Ordinal: 3307
        void dynamicSortFilterChanged(bool);

    // RVA: 0xDF5 | Ordinal: 3574
        void fetchMore(class QModelIndex const &);

    // RVA: 0xE1E | Ordinal: 3615
        void filterAcceptsColumn(int, class QModelIndex const &) const;

    // RVA: 0xE1F | Ordinal: 3616
        void filterAcceptsRow(int, class QModelIndex const &) const;

    // RVA: 0xE20 | Ordinal: 3617
        void filterCaseSensitivity(void) const;

    // RVA: 0xE21 | Ordinal: 3618
        void filterCaseSensitivityChanged(enum Qt::CaseSensitivity);

    // RVA: 0xE22 | Ordinal: 3619
        void filterChanged(void);

    // RVA: 0xE24 | Ordinal: 3621
        void filterKeyColumn(void) const;

    // RVA: 0xE27 | Ordinal: 3624
        void filterRegExp(void) const;

    // RVA: 0xE28 | Ordinal: 3625
        void filterRegularExpression(void) const;

    // RVA: 0xE29 | Ordinal: 3626
        void filterRole(void) const;

    // RVA: 0xE2A | Ordinal: 3627
        void filterRoleChanged(int);

    // RVA: 0xE6D | Ordinal: 3694
        void flags(class QModelIndex const &) const;

    // RVA: 0xF4F | Ordinal: 3920
        void hasChildren(class QModelIndex const &) const;

    // RVA: 0xF84 | Ordinal: 3973
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0xFAD | Ordinal: 4014
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0x102D | Ordinal: 4142
        void insertColumns(int, int, class QModelIndex const &);

    // RVA: 0x1035 | Ordinal: 4150
        void insertRows(int, int, class QModelIndex const &);

    // RVA: 0x105D | Ordinal: 4190
        void invalidate(void);

    // RVA: 0x105E | Ordinal: 4191
        void invalidateFilter(void);

    // RVA: 0x117E | Ordinal: 4479
        void isRecursiveFilteringEnabled(void) const;

    // RVA: 0x11C0 | Ordinal: 4545
        void isSortLocaleAware(void) const;

    // RVA: 0x12A0 | Ordinal: 4769
        void lessThan(class QModelIndex const &, class QModelIndex const &) const;

    // RVA: 0x12FC | Ordinal: 4861
        void mapFromSource(class QModelIndex const &) const;

    // RVA: 0x1300 | Ordinal: 4865
        void mapSelectionFromSource(class QItemSelection const &) const;

    // RVA: 0x1303 | Ordinal: 4868
        void mapSelectionToSource(class QItemSelection const &) const;

    // RVA: 0x1306 | Ordinal: 4871
        void mapToSource(class QModelIndex const &) const;

    // RVA: 0x131F | Ordinal: 4896
        void match(class QModelIndex const &, int, class QVariant const &, int, class QFlags<enum Qt::MatchFlag>) const;

    // RVA: 0x136F | Ordinal: 4976
        void metaObject(void) const;

    // RVA: 0x139A | Ordinal: 5019
        void mimeData(class QList<class QModelIndex> const &) const;

    // RVA: 0x13A6 | Ordinal: 5031
        void mimeTypes(void) const;

    // RVA: 0x14B2 | Ordinal: 5299
        void parent(class QModelIndex const &) const;

    // RVA: 0x1657 | Ordinal: 5720
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1694 | Ordinal: 5781
        void qt_metacast(char const *);

    // RVA: 0x16DB | Ordinal: 5852
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1760 | Ordinal: 5985
        void recursiveFilteringEnabledChanged(bool);

    // RVA: 0x17D4 | Ordinal: 6101
        void removeColumns(int, int, class QModelIndex const &);

    // RVA: 0x1802 | Ordinal: 6147
        void removeRows(int, int, class QModelIndex const &);

    // RVA: 0x18B5 | Ordinal: 6326
        void rowCount(class QModelIndex const &) const;

    // RVA: 0x196B | Ordinal: 6508
        void setData(class QModelIndex const &, class QVariant const &, int);

    // RVA: 0x1988 | Ordinal: 6537
        void setDynamicSortFilter(bool);

    // RVA: 0x19C0 | Ordinal: 6593
        void setFilterCaseSensitivity(enum Qt::CaseSensitivity);

    // RVA: 0x19C1 | Ordinal: 6594
        void setFilterFixedString(class QString const &);

    // RVA: 0x19C2 | Ordinal: 6595
        void setFilterKeyColumn(int);

    // RVA: 0x19C5 | Ordinal: 6598
        void setFilterRegExp(class QRegExp const &);

    // RVA: 0x19C6 | Ordinal: 6599
        void setFilterRegExp(class QString const &);

    // RVA: 0x19C7 | Ordinal: 6600
        void setFilterRegularExpression(class QRegularExpression const &);

    // RVA: 0x19C8 | Ordinal: 6601
        void setFilterRegularExpression(class QString const &);

    // RVA: 0x19C9 | Ordinal: 6602
        void setFilterRole(int);

    // RVA: 0x19CB | Ordinal: 6604
        void setFilterWildcard(class QString const &);

    // RVA: 0x19D9 | Ordinal: 6618
        void setHeaderData(int, enum Qt::Orientation, class QVariant const &, int);

    // RVA: 0x1A73 | Ordinal: 6772
        void setRecursiveFilteringEnabled(bool);

    // RVA: 0x1A93 | Ordinal: 6804
        void setSortCaseSensitivity(enum Qt::CaseSensitivity);

    // RVA: 0x1A94 | Ordinal: 6805
        void setSortLocaleAware(bool);

    // RVA: 0x1A95 | Ordinal: 6806
        void setSortRole(int);

    // RVA: 0x1A99 | Ordinal: 6810
        void setSourceModel(class QAbstractItemModel *);

    // RVA: 0x1B0D | Ordinal: 6926
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x1B55 | Ordinal: 6998
        void sort(int, enum Qt::SortOrder);

    // RVA: 0x1B58 | Ordinal: 7001
        void sortCaseSensitivity(void) const;

    // RVA: 0x1B59 | Ordinal: 7002
        void sortCaseSensitivityChanged(enum Qt::CaseSensitivity);

    // RVA: 0x1B5A | Ordinal: 7003
        void sortColumn(void) const;

    // RVA: 0x1B5C | Ordinal: 7005
        void sortLocaleAwareChanged(bool);

    // RVA: 0x1B5D | Ordinal: 7006
        void sortOrder(void) const;

    // RVA: 0x1B5E | Ordinal: 7007
        void sortRole(void) const;

    // RVA: 0x1B5F | Ordinal: 7008
        void sortRoleChanged(int);

    // RVA: 0x1B6A | Ordinal: 7019
        void span(class QModelIndex const &) const;

    // RVA: 0x1C5B | Ordinal: 7260
        void supportedDropActions(void) const;

    // RVA: 0x1EA0 | Ordinal: 7841
        void tr(char const *, char const *, int);

    // RVA: 0x1EDF | Ordinal: 7904
        void trUtf8(char const *, char const *, int);

    // RVA: 0x35C | Ordinal: 861
        void _QSortFilterProxyModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSORTFILTERPROXYMODEL_HPP
