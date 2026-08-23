#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QMenu
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMenu
{
public:

    // RVA: 0xD1 | Ordinal: 210
        void QMenu(class QMenuPrivate &, class QWidget *);

    // RVA: 0xD2 | Ordinal: 211
        void QMenu(class QString const &, class QWidget *);

    // RVA: 0xD3 | Ordinal: 212
        void QMenu(class QWidget *);

    // RVA: 0x4DA | Ordinal: 1243
        void aboutToHide(void);

    // RVA: 0x4DC | Ordinal: 1245
        void aboutToShow(void);

    // RVA: 0x4F6 | Ordinal: 1271
        void actionAt(class QPoint const &) const;

    // RVA: 0x4FA | Ordinal: 1275
        void actionEvent(class QActionEvent *);

    // RVA: 0x4FF | Ordinal: 1280
        void actionGeometry(class QAction *) const;

    // RVA: 0x51E | Ordinal: 1311
        void activeAction(void) const;

    // RVA: 0x531 | Ordinal: 1330
        void addAction(class QIcon const &, class QString const &);

    // RVA: 0x532 | Ordinal: 1331
        void addAction(class QIcon const &, class QString const &, class QObject const *, char const *, class QKeySequence const &);

    // RVA: 0x533 | Ordinal: 1332
        void addAction(class QString const &);

    // RVA: 0x534 | Ordinal: 1333
        void addAction(class QString const &, class QObject const *, char const *, class QKeySequence const &);

    // RVA: 0x570 | Ordinal: 1393
        void addMenu(class QIcon const &, class QString const &);

    // RVA: 0x571 | Ordinal: 1394
        void addMenu(class QString const &);

    // RVA: 0x572 | Ordinal: 1395
        void addMenu(class QMenu *);

    // RVA: 0x585 | Ordinal: 1414
        void addSection(class QIcon const &, class QString const &);

    // RVA: 0x586 | Ordinal: 1415
        void addSection(class QString const &);

    // RVA: 0x587 | Ordinal: 1416
        void addSeparator(void);

    // RVA: 0x6C0 | Ordinal: 1729
        void changeEvent(class QEvent *);

    // RVA: 0x715 | Ordinal: 1814
        void clear(void);

    // RVA: 0x77C | Ordinal: 1917
        void columnCount(void) const;

    // RVA: 0x961 | Ordinal: 2402
        void d_func(void);

    // RVA: 0x962 | Ordinal: 2403
        void d_func(void) const;

    // RVA: 0x9F4 | Ordinal: 2549
        void defaultAction(void) const;

    // RVA: 0xB27 | Ordinal: 2856
        void enterEvent(class QEvent *);

    // RVA: 0xB51 | Ordinal: 2898
        void event(class QEvent *);

    // RVA: 0xB90 | Ordinal: 2961
        void exec(class QPoint const &, class QAction *);

    // RVA: 0xB91 | Ordinal: 2962
        void exec(void);

    // RVA: 0xB92 | Ordinal: 2963
        void exec(class QList<class QAction *>, class QPoint const &, class QAction *, class QWidget *);

    // RVA: 0xC1F | Ordinal: 3104
        void focusNextPrevChild(bool);

    // RVA: 0xD2E | Ordinal: 3375
        void hideEvent(class QHideEvent *);

    // RVA: 0xD38 | Ordinal: 3385
        void hideTearOffMenu(void);

    // RVA: 0xD80 | Ordinal: 3457
        void hovered(class QAction *);

    // RVA: 0xD88 | Ordinal: 3465
        void icon(void) const;

    // RVA: 0xDEE | Ordinal: 3567
        void initStyleOption(class QStyleOptionMenuItem *, class QAction const *) const;

    // RVA: 0xE46 | Ordinal: 3655
        void insertMenu(class QAction *, class QMenu *);

    // RVA: 0xE54 | Ordinal: 3669
        void insertSection(class QAction *, class QIcon const &, class QString const &);

    // RVA: 0xE55 | Ordinal: 3670
        void insertSection(class QAction *, class QString const &);

    // RVA: 0xE57 | Ordinal: 3672
        void insertSeparator(class QAction *);

    // RVA: 0xE7B | Ordinal: 3708
        void internalDelayedPopup(void);

    // RVA: 0xED3 | Ordinal: 3796
        void isEmpty(void) const;

    // RVA: 0xF57 | Ordinal: 3928
        void isTearOffEnabled(void) const;

    // RVA: 0xF58 | Ordinal: 3929
        void isTearOffMenuVisible(void) const;

    // RVA: 0x1005 | Ordinal: 4102
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1051 | Ordinal: 4178
        void leaveEvent(class QEvent *);

    // RVA: 0x10FF | Ordinal: 4352
        void menuAction(void) const;

    // RVA: 0x1159 | Ordinal: 4442
        void metaObject(void) const;

    // RVA: 0x1221 | Ordinal: 4642
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1243 | Ordinal: 4676
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x1263 | Ordinal: 4708
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1335 | Ordinal: 4918
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1395 | Ordinal: 5014
        void platformMenu(void);

    // RVA: 0x13AF | Ordinal: 5040
        void popup(class QPoint const &, class QAction *);

    // RVA: 0x1472 | Ordinal: 5235
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1505 | Ordinal: 5382
        void qt_metacast(char const *);

    // RVA: 0x159B | Ordinal: 5532
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17E2 | Ordinal: 6115
        void separatorsCollapsible(void) const;

    // RVA: 0x17FB | Ordinal: 6140
        void setActiveAction(class QAction *);

    // RVA: 0x18F9 | Ordinal: 6394
        void setDefaultAction(class QAction *);

    // RVA: 0x1A05 | Ordinal: 6662
        void setIcon(class QIcon const &);

    // RVA: 0x1AF2 | Ordinal: 6899
        void setNoReplayFor(class QWidget *);

    // RVA: 0x1B58 | Ordinal: 7001
        void setPlatformMenu(class QPlatformMenu *);

    // RVA: 0x1BF5 | Ordinal: 7158
        void setSeparatorsCollapsible(bool);

    // RVA: 0x1C95 | Ordinal: 7318
        void setTearOffEnabled(bool);

    // RVA: 0x1CCA | Ordinal: 7371
        void setTitle(class QString const &);

    // RVA: 0x1CD9 | Ordinal: 7386
        void setToolTipsVisible(bool);

    // RVA: 0x1DC4 | Ordinal: 7621
        void showTearOffMenu(class QPoint const &);

    // RVA: 0x1DC5 | Ordinal: 7622
        void showTearOffMenu(void);

    // RVA: 0x1E02 | Ordinal: 7683
        void sizeHint(void) const;

    // RVA: 0x2025 | Ordinal: 8230
        void timerEvent(class QTimerEvent *);

    // RVA: 0x2030 | Ordinal: 8241
        void title(void) const;

    // RVA: 0x205E | Ordinal: 8287
        void toolTipsVisible(void) const;

    // RVA: 0x20C1 | Ordinal: 8386
        void tr(char const *, char const *, int);

    // RVA: 0x2154 | Ordinal: 8533
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21B3 | Ordinal: 8628
        void triggered(class QAction *);

    // RVA: 0x22E9 | Ordinal: 8938
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x22B | Ordinal: 556
        void _QMenu(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QMENU_HPP
