#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTreeWidgetItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTreeWidgetItem
{
public:

    // RVA: 0x18A | Ordinal: 395
        void QTreeWidgetItem(class QTreeWidgetItem const &);

    // RVA: 0x18B | Ordinal: 396
        void QTreeWidgetItem(class QStringList const &, int);

    // RVA: 0x18C | Ordinal: 397
        void QTreeWidgetItem(int);

    // RVA: 0x18D | Ordinal: 398
        void QTreeWidgetItem(class QTreeWidgetItem *, class QTreeWidgetItem *, int);

    // RVA: 0x18E | Ordinal: 399
        void QTreeWidgetItem(class QTreeWidgetItem *, class QStringList const &, int);

    // RVA: 0x18F | Ordinal: 400
        void QTreeWidgetItem(class QTreeWidgetItem *, int);

    // RVA: 0x190 | Ordinal: 401
        void QTreeWidgetItem(class QTreeWidget *, class QStringList const &, int);

    // RVA: 0x191 | Ordinal: 402
        void QTreeWidgetItem(class QTreeWidget *, int);

    // RVA: 0x192 | Ordinal: 403
        void QTreeWidgetItem(class QTreeWidget *, class QTreeWidgetItem *, int);

    // RVA: 0x548 | Ordinal: 1353
        void addChild(class QTreeWidgetItem *);

    // RVA: 0x54C | Ordinal: 1357
        void addChildren(class QList<class QTreeWidgetItem *> const &);

    // RVA: 0x611 | Ordinal: 1554
        void background(int) const;

    // RVA: 0x618 | Ordinal: 1561
        void backgroundColor(int) const;

    // RVA: 0x6D9 | Ordinal: 1754
        void checkState(int) const;

    // RVA: 0x6E1 | Ordinal: 1762
        void child(int) const;

    // RVA: 0x6E8 | Ordinal: 1769
        void childCount(void) const;

    // RVA: 0x6EF | Ordinal: 1776
        void childIndicatorPolicy(void) const;

    // RVA: 0x6F5 | Ordinal: 1782
        void childrenCheckState(int) const;

    // RVA: 0x746 | Ordinal: 1863
        void clone(void) const;

    // RVA: 0x780 | Ordinal: 1921
        void columnCount(void) const;

    // RVA: 0x9E3 | Ordinal: 2532
        void data(int, int) const;

    // RVA: 0xB06 | Ordinal: 2823
        void emitDataChanged(void);

    // RVA: 0xB94 | Ordinal: 2965
        void executePendingSort(void) const;

    // RVA: 0xBFB | Ordinal: 3068
        void flags(void) const;

    // RVA: 0xC52 | Ordinal: 3155
        void font(int) const;

    // RVA: 0xC61 | Ordinal: 3170
        void foreground(int) const;

    // RVA: 0xD8C | Ordinal: 3469
        void icon(int) const;

    // RVA: 0xDC8 | Ordinal: 3529
        void indexOfChild(class QTreeWidgetItem *) const;

    // RVA: 0xE33 | Ordinal: 3636
        void insertChild(int, class QTreeWidgetItem *);

    // RVA: 0xE34 | Ordinal: 3637
        void insertChildren(int, class QList<class QTreeWidgetItem *> const &);

    // RVA: 0xECC | Ordinal: 3789
        void isDisabled(void) const;

    // RVA: 0xEE1 | Ordinal: 3810
        void isExpanded(void) const;

    // RVA: 0xEE4 | Ordinal: 3813
        void isFirstColumnSpanned(void) const;

    // RVA: 0xEF3 | Ordinal: 3828
        void isHidden(void) const;

    // RVA: 0xF43 | Ordinal: 3908
        void isSelected(void) const;

    // RVA: 0xFA1 | Ordinal: 4002
        void itemChanged(void);

    // RVA: 0x2F1 | Ordinal: 754
        void operator_(class QTreeWidgetItem const &) const;

    // RVA: 0x135F | Ordinal: 4960
        void parent(void) const;

    // RVA: 0x15EF | Ordinal: 5616
        void read(class QDataStream &);

    // RVA: 0x1630 | Ordinal: 5681
        void removeChild(class QTreeWidgetItem *);

    // RVA: 0x1832 | Ordinal: 6195
        void setBackground(int, class QBrush const &);

    // RVA: 0x1837 | Ordinal: 6200
        void setBackgroundColor(int, class QColor const &);

    // RVA: 0x1870 | Ordinal: 6257
        void setCheckState(int, enum Qt::CheckState);

    // RVA: 0x1877 | Ordinal: 6264
        void setChildIndicatorPolicy(enum QTreeWidgetItem::ChildIndicatorPolicy);

    // RVA: 0x18EC | Ordinal: 6381
        void setData(int, int, class QVariant const &);

    // RVA: 0x1916 | Ordinal: 6423
        void setDisabled(bool);

    // RVA: 0x1956 | Ordinal: 6487
        void setExpanded(bool);

    // RVA: 0x1976 | Ordinal: 6519
        void setFirstColumnSpanned(bool);

    // RVA: 0x1983 | Ordinal: 6532
        void setFlags(class QFlags<enum Qt::ItemFlag>);

    // RVA: 0x19A2 | Ordinal: 6563
        void setFont(int, class QFont const &);

    // RVA: 0x19AE | Ordinal: 6575
        void setForeground(int, class QBrush const &);

    // RVA: 0x19EB | Ordinal: 6636
        void setHidden(bool);

    // RVA: 0x1A09 | Ordinal: 6666
        void setIcon(int, class QIcon const &);

    // RVA: 0x1BDB | Ordinal: 7132
        void setSelected(bool);

    // RVA: 0x1C12 | Ordinal: 7187
        void setSizeHint(int, class QSize const &);

    // RVA: 0x1C4E | Ordinal: 7247
        void setStatusTip(int, class QString const &);

    // RVA: 0x1C9F | Ordinal: 7328
        void setText(int, class QString const &);

    // RVA: 0x1CA4 | Ordinal: 7333
        void setTextAlignment(int, int);

    // RVA: 0x1CA9 | Ordinal: 7338
        void setTextColor(int, class QColor const &);

    // RVA: 0x1CD6 | Ordinal: 7383
        void setToolTip(int, class QString const &);

    // RVA: 0x1D2B | Ordinal: 7468
        void setWhatsThis(int, class QString const &);

    // RVA: 0x1E15 | Ordinal: 7702
        void sizeHint(int) const;

    // RVA: 0x1E39 | Ordinal: 7738
        void sortChildren(int, enum Qt::SortOrder, bool);

    // RVA: 0x1E3A | Ordinal: 7739
        void sortChildren(int, enum Qt::SortOrder);

    // RVA: 0x1F26 | Ordinal: 7975
        void statusTip(int) const;

    // RVA: 0x1FB7 | Ordinal: 8120
        void takeChild(int);

    // RVA: 0x1FB8 | Ordinal: 8121
        void takeChildren(void);

    // RVA: 0x1FDC | Ordinal: 8157
        void text(int) const;

    // RVA: 0x1FE4 | Ordinal: 8165
        void textAlignment(int) const;

    // RVA: 0x1FF1 | Ordinal: 8178
        void textColor(int) const;

    // RVA: 0x205B | Ordinal: 8284
        void toolTip(int) const;

    // RVA: 0x21AC | Ordinal: 8621
        void treeModel(class QTreeWidget *) const;

    // RVA: 0x21AE | Ordinal: 8623
        void treeWidget(void) const;

    // RVA: 0x21CA | Ordinal: 8651
        void type(void) const;

    // RVA: 0x22DD | Ordinal: 8926
        void whatsThis(int) const;

    // RVA: 0x2341 | Ordinal: 9026
        void write(class QDataStream &) const;

    // RVA: 0x286 | Ordinal: 647
        void _QTreeWidgetItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTREEWIDGETITEM_HPP
