#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QToolBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QToolBar
{
public:

    // RVA: 0x182 | Ordinal: 387
        void QToolBar(class QString const &, class QWidget *);

    // RVA: 0x183 | Ordinal: 388
        void QToolBar(class QWidget *);

    // RVA: 0x4F8 | Ordinal: 1273
        void actionAt(class QPoint const &) const;

    // RVA: 0x4F9 | Ordinal: 1274
        void actionAt(int, int) const;

    // RVA: 0x4FC | Ordinal: 1277
        void actionEvent(class QActionEvent *);

    // RVA: 0x501 | Ordinal: 1282
        void actionGeometry(class QAction *) const;

    // RVA: 0x506 | Ordinal: 1287
        void actionTriggered(class QAction *);

    // RVA: 0x537 | Ordinal: 1336
        void addAction(class QIcon const &, class QString const &);

    // RVA: 0x538 | Ordinal: 1337
        void addAction(class QIcon const &, class QString const &, class QObject const *, char const *);

    // RVA: 0x539 | Ordinal: 1338
        void addAction(class QString const &);

    // RVA: 0x53A | Ordinal: 1339
        void addAction(class QString const &, class QObject const *, char const *);

    // RVA: 0x589 | Ordinal: 1418
        void addSeparator(void);

    // RVA: 0x5A9 | Ordinal: 1450
        void addWidget(class QWidget *);

    // RVA: 0x5CC | Ordinal: 1485
        void allowedAreas(void) const;

    // RVA: 0x5CE | Ordinal: 1487
        void allowedAreasChanged(class QFlags<enum Qt::ToolBarArea>);

    // RVA: 0x6CA | Ordinal: 1739
        void changeEvent(class QEvent *);

    // RVA: 0x71B | Ordinal: 1820
        void clear(void);

    // RVA: 0x9BD | Ordinal: 2494
        void d_func(void);

    // RVA: 0x9BE | Ordinal: 2495
        void d_func(void) const;

    // RVA: 0xB6C | Ordinal: 2925
        void event(class QEvent *);

    // RVA: 0xD97 | Ordinal: 3480
        void iconSize(void) const;

    // RVA: 0xD9A | Ordinal: 3483
        void iconSizeChanged(class QSize const &);

    // RVA: 0xDF9 | Ordinal: 3578
        void initStyleOption(class QStyleOptionToolBar *) const;

    // RVA: 0xE59 | Ordinal: 3674
        void insertSeparator(class QAction *);

    // RVA: 0xE6C | Ordinal: 3693
        void insertWidget(class QAction *, class QWidget *);

    // RVA: 0xEAF | Ordinal: 3760
        void isAreaAllowed(enum Qt::ToolBarArea) const;

    // RVA: 0xEE9 | Ordinal: 3818
        void isFloatable(void) const;

    // RVA: 0xEEB | Ordinal: 3820
        void isFloating(void) const;

    // RVA: 0xF11 | Ordinal: 3858
        void isMovable(void) const;

    // RVA: 0x118D | Ordinal: 4494
        void metaObject(void) const;

    // RVA: 0x1271 | Ordinal: 4722
        void movableChanged(bool);

    // RVA: 0x12F8 | Ordinal: 4857
        void orientation(void) const;

    // RVA: 0x12F9 | Ordinal: 4858
        void orientationChanged(enum Qt::Orientation);

    // RVA: 0x1347 | Ordinal: 4936
        void paintEvent(class QPaintEvent *);

    // RVA: 0x14A6 | Ordinal: 5287
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1539 | Ordinal: 5434
        void qt_metacast(char const *);

    // RVA: 0x15CF | Ordinal: 5584
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1811 | Ordinal: 6162
        void setAllowedAreas(class QFlags<enum Qt::ToolBarArea>);

    // RVA: 0x1986 | Ordinal: 6535
        void setFloatable(bool);

    // RVA: 0x1A14 | Ordinal: 6677
        void setIconSize(class QSize const &);

    // RVA: 0x1AE2 | Ordinal: 6883
        void setMovable(bool);

    // RVA: 0x1B2C | Ordinal: 6957
        void setOrientation(enum Qt::Orientation);

    // RVA: 0x1CCF | Ordinal: 7376
        void setToolButtonStyle(enum Qt::ToolButtonStyle);

    // RVA: 0x204A | Ordinal: 8267
        void toggleViewAction(void) const;

    // RVA: 0x2052 | Ordinal: 8275
        void toolButtonStyle(void) const;

    // RVA: 0x2055 | Ordinal: 8278
        void toolButtonStyleChanged(enum Qt::ToolButtonStyle);

    // RVA: 0x2063 | Ordinal: 8292
        void topLevelChanged(bool);

    // RVA: 0x20F5 | Ordinal: 8438
        void tr(char const *, char const *, int);

    // RVA: 0x2188 | Ordinal: 8585
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22B5 | Ordinal: 8886
        void visibilityChanged(bool);

    // RVA: 0x2307 | Ordinal: 8968
        void widgetForAction(class QAction *) const;

    // RVA: 0x280 | Ordinal: 641
        void _QToolBar(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTOOLBAR_HPP
