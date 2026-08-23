#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QMenuBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMenuBar
{
public:

    // RVA: 0xD4 | Ordinal: 213
        void QMenuBar(class QWidget *);

    // RVA: 0x4F7 | Ordinal: 1272
        void actionAt(class QPoint const &) const;

    // RVA: 0x4FB | Ordinal: 1276
        void actionEvent(class QActionEvent *);

    // RVA: 0x500 | Ordinal: 1281
        void actionGeometry(class QAction *) const;

    // RVA: 0x51F | Ordinal: 1312
        void activeAction(void) const;

    // RVA: 0x535 | Ordinal: 1334
        void addAction(class QString const &);

    // RVA: 0x536 | Ordinal: 1335
        void addAction(class QString const &, class QObject const *, char const *);

    // RVA: 0x573 | Ordinal: 1396
        void addMenu(class QMenu *);

    // RVA: 0x574 | Ordinal: 1397
        void addMenu(class QIcon const &, class QString const &);

    // RVA: 0x575 | Ordinal: 1398
        void addMenu(class QString const &);

    // RVA: 0x588 | Ordinal: 1417
        void addSeparator(void);

    // RVA: 0x6C1 | Ordinal: 1730
        void changeEvent(class QEvent *);

    // RVA: 0x716 | Ordinal: 1815
        void clear(void);

    // RVA: 0x7EB | Ordinal: 2028
        void cornerWidget(enum Qt::Corner) const;

    // RVA: 0x963 | Ordinal: 2404
        void d_func(void);

    // RVA: 0x964 | Ordinal: 2405
        void d_func(void) const;

    // RVA: 0xB52 | Ordinal: 2899
        void event(class QEvent *);

    // RVA: 0xB82 | Ordinal: 2947
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xC0F | Ordinal: 3088
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC35 | Ordinal: 3126
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xD10 | Ordinal: 3345
        void heightForWidth(int) const;

    // RVA: 0xD81 | Ordinal: 3458
        void hovered(class QAction *);

    // RVA: 0xDEF | Ordinal: 3568
        void initStyleOption(class QStyleOptionMenuItem *, class QAction const *) const;

    // RVA: 0xE47 | Ordinal: 3656
        void insertMenu(class QAction *, class QMenu *);

    // RVA: 0xE58 | Ordinal: 3673
        void insertSeparator(class QAction *);

    // RVA: 0xEC9 | Ordinal: 3786
        void isDefaultUp(void) const;

    // RVA: 0xF15 | Ordinal: 3862
        void isNativeMenuBar(void) const;

    // RVA: 0x1006 | Ordinal: 4103
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1052 | Ordinal: 4179
        void leaveEvent(class QEvent *);

    // RVA: 0x115A | Ordinal: 4443
        void metaObject(void) const;

    // RVA: 0x11D9 | Ordinal: 4570
        void minimumSizeHint(void) const;

    // RVA: 0x1222 | Ordinal: 4643
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1244 | Ordinal: 4677
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1264 | Ordinal: 4709
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1336 | Ordinal: 4919
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1396 | Ordinal: 5015
        void platformMenuBar(void);

    // RVA: 0x1473 | Ordinal: 5236
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1506 | Ordinal: 5383
        void qt_metacast(char const *);

    // RVA: 0x159C | Ordinal: 5533
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x16A6 | Ordinal: 5799
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x17FC | Ordinal: 6141
        void setActiveAction(class QAction *);

    // RVA: 0x18AF | Ordinal: 6320
        void setCornerWidget(class QWidget *, enum Qt::Corner);

    // RVA: 0x1906 | Ordinal: 6407
        void setDefaultUp(bool);

    // RVA: 0x1AED | Ordinal: 6894
        void setNativeMenuBar(bool);

    // RVA: 0x1D1E | Ordinal: 7455
        void setVisible(bool);

    // RVA: 0x1E03 | Ordinal: 7684
        void sizeHint(void) const;

    // RVA: 0x2026 | Ordinal: 8231
        void timerEvent(class QTimerEvent *);

    // RVA: 0x20C2 | Ordinal: 8387
        void tr(char const *, char const *, int);

    // RVA: 0x2155 | Ordinal: 8534
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21B4 | Ordinal: 8629
        void triggered(class QAction *);

    // RVA: 0x22C | Ordinal: 557
        void _QMenuBar(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QMENUBAR_HPP
