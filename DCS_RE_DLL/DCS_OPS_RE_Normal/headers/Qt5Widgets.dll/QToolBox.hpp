#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QToolBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QToolBox
{
public:

    // RVA: 0x184 | Ordinal: 389
        void QToolBox(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x565 | Ordinal: 1382
        void addItem(class QWidget *, class QIcon const &, class QString const &);

    // RVA: 0x566 | Ordinal: 1383
        void addItem(class QWidget *, class QString const &);

    // RVA: 0x6CB | Ordinal: 1740
        void changeEvent(class QEvent *);

    // RVA: 0x7FD | Ordinal: 2046
        void count(void) const;

    // RVA: 0x839 | Ordinal: 2106
        void currentChanged(int);

    // RVA: 0x856 | Ordinal: 2135
        void currentIndex(void) const;

    // RVA: 0x873 | Ordinal: 2164
        void currentWidget(void) const;

    // RVA: 0x9BF | Ordinal: 2496
        void d_func(void);

    // RVA: 0x9C0 | Ordinal: 2497
        void d_func(void) const;

    // RVA: 0xB6D | Ordinal: 2926
        void event(class QEvent *);

    // RVA: 0xDC6 | Ordinal: 3527
        void indexOf(class QWidget *) const;

    // RVA: 0xE41 | Ordinal: 3650
        void insertItem(int, class QWidget *, class QIcon const &, class QString const &);

    // RVA: 0xE42 | Ordinal: 3651
        void insertItem(int, class QWidget *, class QString const &);

    // RVA: 0xEFF | Ordinal: 3840
        void isItemEnabled(int) const;

    // RVA: 0xFC1 | Ordinal: 4034
        void itemIcon(int) const;

    // RVA: 0xFC3 | Ordinal: 4036
        void itemInserted(int);

    // RVA: 0xFCC | Ordinal: 4045
        void itemRemoved(int);

    // RVA: 0xFD3 | Ordinal: 4052
        void itemText(int) const;

    // RVA: 0xFD6 | Ordinal: 4055
        void itemToolTip(int) const;

    // RVA: 0x118E | Ordinal: 4495
        void metaObject(void) const;

    // RVA: 0x14A7 | Ordinal: 5288
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x153A | Ordinal: 5435
        void qt_metacast(char const *);

    // RVA: 0x15D0 | Ordinal: 5585
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x163C | Ordinal: 5693
        void removeItem(int);

    // RVA: 0x18C2 | Ordinal: 6339
        void setCurrentIndex(int);

    // RVA: 0x18D6 | Ordinal: 6359
        void setCurrentWidget(class QWidget *);

    // RVA: 0x1A3D | Ordinal: 6718
        void setItemEnabled(int, bool);

    // RVA: 0x1A42 | Ordinal: 6723
        void setItemIcon(int, class QIcon const &);

    // RVA: 0x1A4A | Ordinal: 6731
        void setItemText(int, class QString const &);

    // RVA: 0x1A4B | Ordinal: 6732
        void setItemToolTip(int, class QString const &);

    // RVA: 0x1DA8 | Ordinal: 7593
        void showEvent(class QShowEvent *);

    // RVA: 0x20F6 | Ordinal: 8439
        void tr(char const *, char const *, int);

    // RVA: 0x2189 | Ordinal: 8586
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2300 | Ordinal: 8961
        void widget(int) const;

    // RVA: 0x281 | Ordinal: 642
        void _QToolBox(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTOOLBOX_HPP
