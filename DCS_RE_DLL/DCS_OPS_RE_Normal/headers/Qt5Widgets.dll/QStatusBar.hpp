#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QStatusBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStatusBar
{
public:

    // RVA: 0x115 | Ordinal: 278
        void QStatusBar(class QWidget *);

    // RVA: 0x578 | Ordinal: 1401
        void addPermanentWidget(class QWidget *, int);

    // RVA: 0x5A8 | Ordinal: 1449
        void addWidget(class QWidget *, int);

    // RVA: 0x72D | Ordinal: 1838
        void clearMessage(void);

    // RVA: 0x860 | Ordinal: 2145
        void currentMessage(void) const;

    // RVA: 0x9A3 | Ordinal: 2468
        void d_func(void);

    // RVA: 0x9A4 | Ordinal: 2469
        void d_func(void) const;

    // RVA: 0xB65 | Ordinal: 2918
        void event(class QEvent *);

    // RVA: 0xD33 | Ordinal: 3380
        void hideOrShow(void);

    // RVA: 0xE48 | Ordinal: 3657
        void insertPermanentWidget(int, class QWidget *, int);

    // RVA: 0xE6B | Ordinal: 3692
        void insertWidget(int, class QWidget *, int);

    // RVA: 0xF4A | Ordinal: 3915
        void isSizeGripEnabled(void) const;

    // RVA: 0x110A | Ordinal: 4363
        void messageChanged(class QString const &);

    // RVA: 0x117D | Ordinal: 4478
        void metaObject(void) const;

    // RVA: 0x1341 | Ordinal: 4930
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1496 | Ordinal: 5271
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1529 | Ordinal: 5418
        void qt_metacast(char const *);

    // RVA: 0x15BF | Ordinal: 5568
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1610 | Ordinal: 5649
        void reformat(void);

    // RVA: 0x1651 | Ordinal: 5714
        void removeWidget(class QWidget *);

    // RVA: 0x16AF | Ordinal: 5808
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x1C0F | Ordinal: 7184
        void setSizeGripEnabled(bool);

    // RVA: 0x1DA4 | Ordinal: 7589
        void showEvent(class QShowEvent *);

    // RVA: 0x1DB3 | Ordinal: 7604
        void showMessage(class QString const &, int);

    // RVA: 0x20E5 | Ordinal: 8422
        void tr(char const *, char const *, int);

    // RVA: 0x2178 | Ordinal: 8569
        void trUtf8(char const *, char const *, int);

    // RVA: 0x251 | Ordinal: 594
        void _QStatusBar(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QSTATUSBAR_HPP
