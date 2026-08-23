#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QDataWidgetMapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDataWidgetMapper
{
public:

    // RVA: 0x30 | Ordinal: 49
        void QDataWidgetMapper(class QObject *);

    // RVA: 0x56E | Ordinal: 1391
        void addMapping(class QWidget *, int);

    // RVA: 0x56F | Ordinal: 1392
        void addMapping(class QWidget *, int, class QByteArray const &);

    // RVA: 0x727 | Ordinal: 1832
        void clearMapping(void);

    // RVA: 0x851 | Ordinal: 2130
        void currentIndex(void) const;

    // RVA: 0x859 | Ordinal: 2138
        void currentIndexChanged(int);

    // RVA: 0x8CD | Ordinal: 2254
        void d_func(void);

    // RVA: 0x8CE | Ordinal: 2255
        void d_func(void) const;

    // RVA: 0xFAC | Ordinal: 4013
        void itemDelegate(void) const;

    // RVA: 0x10C9 | Ordinal: 4298
        void mappedPropertyName(class QWidget *) const;

    // RVA: 0x10CA | Ordinal: 4299
        void mappedSection(class QWidget *) const;

    // RVA: 0x10CB | Ordinal: 4300
        void mappedWidgetAt(int) const;

    // RVA: 0x1121 | Ordinal: 4386
        void metaObject(void) const;

    // RVA: 0x11F1 | Ordinal: 4594
        void model(void) const;

    // RVA: 0x12EF | Ordinal: 4848
        void orientation(void) const;

    // RVA: 0x143A | Ordinal: 5179
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14CD | Ordinal: 5326
        void qt_metacast(char const *);

    // RVA: 0x1563 | Ordinal: 5476
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x163F | Ordinal: 5696
        void removeMapping(class QWidget *);

    // RVA: 0x16DB | Ordinal: 5852
        void revert(void);

    // RVA: 0x16E2 | Ordinal: 5859
        void rootIndex(void) const;

    // RVA: 0x18BD | Ordinal: 6334
        void setCurrentIndex(int);

    // RVA: 0x18CA | Ordinal: 6347
        void setCurrentModelIndex(class QModelIndex const &);

    // RVA: 0x1A37 | Ordinal: 6712
        void setItemDelegate(class QAbstractItemDelegate *);

    // RVA: 0x1AC7 | Ordinal: 6856
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1B24 | Ordinal: 6949
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1B9B | Ordinal: 7068
        void setRootIndex(class QModelIndex const &);

    // RVA: 0x1C67 | Ordinal: 7272
        void setSubmitPolicy(enum QDataWidgetMapper::SubmitPolicy);

    // RVA: 0x1F5E | Ordinal: 8031
        void submit(void);

    // RVA: 0x1F5F | Ordinal: 8032
        void submitPolicy(void) const;

    // RVA: 0x2037 | Ordinal: 8248
        void toFirst(void);

    // RVA: 0x203E | Ordinal: 8255
        void toLast(void);

    // RVA: 0x2041 | Ordinal: 8258
        void toNext(void);

    // RVA: 0x2046 | Ordinal: 8263
        void toPrevious(void);

    // RVA: 0x2089 | Ordinal: 8330
        void tr(char const *, char const *, int);

    // RVA: 0x211C | Ordinal: 8477
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1CC | Ordinal: 461
        void _QDataWidgetMapper(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QDATAWIDGETMAPPER_HPP
