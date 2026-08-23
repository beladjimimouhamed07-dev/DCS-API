#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QStackedLayout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStackedLayout
{
public:

    // RVA: 0x111 | Ordinal: 274
        void QStackedLayout(class QLayout *);

    // RVA: 0x112 | Ordinal: 275
        void QStackedLayout(class QWidget *);

    // RVA: 0x113 | Ordinal: 276
        void QStackedLayout(void);

    // RVA: 0x564 | Ordinal: 1381
        void addItem(class QLayoutItem *);

    // RVA: 0x5A6 | Ordinal: 1447
        void addWidget(class QWidget *);

    // RVA: 0x7F9 | Ordinal: 2042
        void count(void) const;

    // RVA: 0x834 | Ordinal: 2101
        void currentChanged(int);

    // RVA: 0x852 | Ordinal: 2131
        void currentIndex(void) const;

    // RVA: 0x870 | Ordinal: 2161
        void currentWidget(void) const;

    // RVA: 0x99F | Ordinal: 2464
        void d_func(void);

    // RVA: 0x9A0 | Ordinal: 2465
        void d_func(void) const;

    // RVA: 0xCED | Ordinal: 3310
        void hasHeightForWidth(void) const;

    // RVA: 0xD11 | Ordinal: 3346
        void heightForWidth(int) const;

    // RVA: 0xE69 | Ordinal: 3690
        void insertWidget(int, class QWidget *);

    // RVA: 0xF93 | Ordinal: 3988
        void itemAt(int) const;

    // RVA: 0x117B | Ordinal: 4476
        void metaObject(void) const;

    // RVA: 0x11C7 | Ordinal: 4552
        void minimumSize(void) const;

    // RVA: 0x1494 | Ordinal: 5269
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1527 | Ordinal: 5416
        void qt_metacast(char const *);

    // RVA: 0x15BD | Ordinal: 5566
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x18BE | Ordinal: 6335
        void setCurrentIndex(int);

    // RVA: 0x18D3 | Ordinal: 6356
        void setCurrentWidget(class QWidget *);

    // RVA: 0x19CD | Ordinal: 6606
        void setGeometry(class QRect const &);

    // RVA: 0x1C3D | Ordinal: 7230
        void setStackingMode(enum QStackedLayout::StackingMode);

    // RVA: 0x1E0F | Ordinal: 7696
        void sizeHint(void) const;

    // RVA: 0x1E65 | Ordinal: 7782
        void stackingMode(void) const;

    // RVA: 0x1FB5 | Ordinal: 8118
        void takeAt(int);

    // RVA: 0x20E3 | Ordinal: 8420
        void tr(char const *, char const *, int);

    // RVA: 0x2176 | Ordinal: 8567
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22FD | Ordinal: 8958
        void widget(int) const;

    // RVA: 0x230B | Ordinal: 8972
        void widgetRemoved(int);

    // RVA: 0x24F | Ordinal: 592
        void _QStackedLayout(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSTACKEDLAYOUT_HPP
