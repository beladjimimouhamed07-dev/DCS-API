#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QStackedWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStackedWidget
{
public:

    // RVA: 0x114 | Ordinal: 277
        void QStackedWidget(class QWidget *);

    // RVA: 0x5A7 | Ordinal: 1448
        void addWidget(class QWidget *);

    // RVA: 0x7FA | Ordinal: 2043
        void count(void) const;

    // RVA: 0x835 | Ordinal: 2102
        void currentChanged(int);

    // RVA: 0x853 | Ordinal: 2132
        void currentIndex(void) const;

    // RVA: 0x871 | Ordinal: 2162
        void currentWidget(void) const;

    // RVA: 0x9A1 | Ordinal: 2466
        void d_func(void);

    // RVA: 0x9A2 | Ordinal: 2467
        void d_func(void) const;

    // RVA: 0xB64 | Ordinal: 2917
        void event(class QEvent *);

    // RVA: 0xDC4 | Ordinal: 3525
        void indexOf(class QWidget *) const;

    // RVA: 0xE6A | Ordinal: 3691
        void insertWidget(int, class QWidget *);

    // RVA: 0x117C | Ordinal: 4477
        void metaObject(void) const;

    // RVA: 0x1495 | Ordinal: 5270
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1528 | Ordinal: 5417
        void qt_metacast(char const *);

    // RVA: 0x15BE | Ordinal: 5567
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1650 | Ordinal: 5713
        void removeWidget(class QWidget *);

    // RVA: 0x18BF | Ordinal: 6336
        void setCurrentIndex(int);

    // RVA: 0x18D4 | Ordinal: 6357
        void setCurrentWidget(class QWidget *);

    // RVA: 0x20E4 | Ordinal: 8421
        void tr(char const *, char const *, int);

    // RVA: 0x2177 | Ordinal: 8568
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22FE | Ordinal: 8959
        void widget(int) const;

    // RVA: 0x230C | Ordinal: 8973
        void widgetRemoved(int);

    // RVA: 0x250 | Ordinal: 593
        void _QStackedWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSTACKEDWIDGET_HPP
