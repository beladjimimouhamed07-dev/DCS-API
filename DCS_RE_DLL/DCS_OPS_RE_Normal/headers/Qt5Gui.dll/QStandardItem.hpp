#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QStandardItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStandardItem
{
public:

    // RVA: 0x307 | Ordinal: 776
        void QStandardItem(class QStandardItemPrivate &);

    // RVA: 0x308 | Ordinal: 777
        void QStandardItem(class QStandardItem const &);

    // RVA: 0x309 | Ordinal: 778
        void QStandardItem(class QIcon const &, class QString const &);

    // RVA: 0x30A | Ordinal: 779
        void QStandardItem(class QString const &);

    // RVA: 0x30B | Ordinal: 780
        void QStandardItem(int, int);

    // RVA: 0x30C | Ordinal: 781
        void QStandardItem(void);

    // RVA: 0x94B | Ordinal: 2380
        void accessibleDescription(void) const;

    // RVA: 0x94F | Ordinal: 2384
        void accessibleText(void) const;

    // RVA: 0x9FA | Ordinal: 2555
        void appendColumn(class QList<class QStandardItem *> const &);

    // RVA: 0x9FD | Ordinal: 2558
        void appendRow(class QList<class QStandardItem *> const &);

    // RVA: 0x9FE | Ordinal: 2559
        void appendRow(class QStandardItem *);

    // RVA: 0xA01 | Ordinal: 2562
        void appendRows(class QList<class QStandardItem *> const &);

    // RVA: 0xA54 | Ordinal: 2645
        void background(void) const;

    // RVA: 0xB89 | Ordinal: 2954
        void checkState(void) const;

    // RVA: 0xB8D | Ordinal: 2958
        void child(int, int) const;

    // RVA: 0xBAF | Ordinal: 2992
        void clearData(void);

    // RVA: 0xBE5 | Ordinal: 3046
        void clone(void) const;

    // RVA: 0xC07 | Ordinal: 3080
        void column(void) const;

    // RVA: 0xC0B | Ordinal: 3084
        void columnCount(void) const;

    // RVA: 0xD7E | Ordinal: 3455
        void d_func(void);

    // RVA: 0xD7F | Ordinal: 3456
        void d_func(void) const;

    // RVA: 0xDA9 | Ordinal: 3498
        void data(int) const;

    // RVA: 0xF88 | Ordinal: 3977
        void emitDataChanged(void);

    // RVA: 0x109B | Ordinal: 4252
        void flags(void) const;

    // RVA: 0x10B9 | Ordinal: 4282
        void font(void) const;

    // RVA: 0x10E5 | Ordinal: 4326
        void foreground(void) const;

    // RVA: 0x4E57 | Ordinal: 20056
        void hasChildren(void) const;

    // RVA: 0x4ECA | Ordinal: 20171
        void icon(void) const;

    // RVA: 0x4EF8 | Ordinal: 20217
        void index(void) const;

    // RVA: 0x4F55 | Ordinal: 20310
        void insertColumn(int, class QList<class QStandardItem *> const &);

    // RVA: 0x4F58 | Ordinal: 20313
        void insertColumns(int, int);

    // RVA: 0x4F6C | Ordinal: 20333
        void insertRow(int, class QList<class QStandardItem *> const &);

    // RVA: 0x4F6D | Ordinal: 20334
        void insertRow(int, class QStandardItem *);

    // RVA: 0x4F71 | Ordinal: 20338
        void insertRows(int, class QList<class QStandardItem *> const &);

    // RVA: 0x4F72 | Ordinal: 20339
        void insertRows(int, int);

    // RVA: 0x4FCD | Ordinal: 20430
        void isAutoTristate(void) const;

    // RVA: 0x4FD6 | Ordinal: 20439
        void isCheckable(void) const;

    // RVA: 0x500A | Ordinal: 20491
        void isDragEnabled(void) const;

    // RVA: 0x500B | Ordinal: 20492
        void isDropEnabled(void) const;

    // RVA: 0x500C | Ordinal: 20493
        void isEditable(void) const;

    // RVA: 0x501B | Ordinal: 20508
        void isEnabled(void) const;

    // RVA: 0x507A | Ordinal: 20603
        void isSelectable(void) const;

    // RVA: 0x5089 | Ordinal: 20618
        void isTristate(void) const;

    // RVA: 0x508E | Ordinal: 20623
        void isUserTristate(void) const;

    // RVA: 0x52E7 | Ordinal: 21224
        void model(void) const;

    // RVA: 0x7C8 | Ordinal: 1993
        void operator_(class QStandardItem const &) const;

    // RVA: 0x5406 | Ordinal: 21511
        void parent(void) const;

    // RVA: 0x5675 | Ordinal: 22134
        void read(class QDataStream &);

    // RVA: 0x56CD | Ordinal: 22222
        void removeColumn(int);

    // RVA: 0x56CE | Ordinal: 22223
        void removeColumns(int, int);

    // RVA: 0x56E3 | Ordinal: 22244
        void removeRow(int);

    // RVA: 0x56E5 | Ordinal: 22246
        void removeRows(int, int);

    // RVA: 0x577D | Ordinal: 22398
        void row(void) const;

    // RVA: 0x5782 | Ordinal: 22403
        void rowCount(void) const;

    // RVA: 0x5813 | Ordinal: 22548
        void setAccessibleDescription(class QString const &);

    // RVA: 0x5814 | Ordinal: 22549
        void setAccessibleText(class QString const &);

    // RVA: 0x5856 | Ordinal: 22615
        void setAutoTristate(bool);

    // RVA: 0x5859 | Ordinal: 22618
        void setBackground(class QBrush const &);

    // RVA: 0x58A4 | Ordinal: 22693
        void setCheckState(enum Qt::CheckState);

    // RVA: 0x58A5 | Ordinal: 22694
        void setCheckable(bool);

    // RVA: 0x58A7 | Ordinal: 22696
        void setChild(int, int, class QStandardItem *);

    // RVA: 0x58A8 | Ordinal: 22697
        void setChild(int, class QStandardItem *);

    // RVA: 0x58C6 | Ordinal: 22727
        void setColumnCount(int);

    // RVA: 0x590F | Ordinal: 22800
        void setData(class QVariant const &, int);

    // RVA: 0x5958 | Ordinal: 22873
        void setDragEnabled(bool);

    // RVA: 0x595A | Ordinal: 22875
        void setDropEnabled(bool);

    // RVA: 0x595B | Ordinal: 22876
        void setEditable(bool);

    // RVA: 0x595E | Ordinal: 22879
        void setEnabled(bool);

    // RVA: 0x5986 | Ordinal: 22919
        void setFlags(class QFlags<enum Qt::ItemFlag>);

    // RVA: 0x5994 | Ordinal: 22933
        void setFont(class QFont const &);

    // RVA: 0x59AE | Ordinal: 22959
        void setForeground(class QBrush const &);

    // RVA: 0x59F7 | Ordinal: 23032
        void setIcon(class QIcon const &);

    // RVA: 0x5B59 | Ordinal: 23386
        void setRowCount(int);

    // RVA: 0x5B77 | Ordinal: 23416
        void setSelectable(bool);

    // RVA: 0x5B8F | Ordinal: 23440
        void setSizeHint(class QSize const &);

    // RVA: 0x5BB6 | Ordinal: 23479
        void setStatusTip(class QString const &);

    // RVA: 0x5BF0 | Ordinal: 23537
        void setText(class QString const &);

    // RVA: 0x5BF3 | Ordinal: 23540
        void setTextAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x5C0B | Ordinal: 23564
        void setToolTip(class QString const &);

    // RVA: 0x5C20 | Ordinal: 23585
        void setTristate(bool);

    // RVA: 0x5C8E | Ordinal: 23695
        void setUserTristate(bool);

    // RVA: 0x5CB4 | Ordinal: 23733
        void setWhatsThis(class QString const &);

    // RVA: 0x5D44 | Ordinal: 23877
        void sizeHint(void) const;

    // RVA: 0x5D5B | Ordinal: 23900
        void sortChildren(int, enum Qt::SortOrder);

    // RVA: 0x5E06 | Ordinal: 24071
        void statusTip(void) const;

    // RVA: 0x5EBC | Ordinal: 24253
        void takeChild(int, int);

    // RVA: 0x5EBD | Ordinal: 24254
        void takeColumn(int);

    // RVA: 0x5EC1 | Ordinal: 24258
        void takeRow(int);

    // RVA: 0x5EF3 | Ordinal: 24308
        void text(void) const;

    // RVA: 0x5EFA | Ordinal: 24315
        void textAlignment(void) const;

    // RVA: 0x5F80 | Ordinal: 24449
        void toolTip(void) const;

    // RVA: 0x6070 | Ordinal: 24689
        void type(void) const;

    // RVA: 0x6145 | Ordinal: 24902
        void whatsThis(void) const;

    // RVA: 0x619C | Ordinal: 24989
        void write(class QDataStream &) const;

    // RVA: 0x51C | Ordinal: 1309
        void _QStandardItem(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSTANDARDITEM_HPP
