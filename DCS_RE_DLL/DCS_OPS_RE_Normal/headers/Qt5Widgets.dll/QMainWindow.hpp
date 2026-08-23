#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QMainWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMainWindow
{
public:

    // RVA: 0xCE | Ordinal: 207
        void QMainWindow(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x553 | Ordinal: 1364
        void addDockWidget(enum Qt::DockWidgetArea, class QDockWidget *);

    // RVA: 0x554 | Ordinal: 1365
        void addDockWidget(enum Qt::DockWidgetArea, class QDockWidget *, enum Qt::Orientation);

    // RVA: 0x599 | Ordinal: 1434
        void addToolBar(class QString const &);

    // RVA: 0x59A | Ordinal: 1435
        void addToolBar(class QToolBar *);

    // RVA: 0x59B | Ordinal: 1436
        void addToolBar(enum Qt::ToolBarArea, class QToolBar *);

    // RVA: 0x59C | Ordinal: 1437
        void addToolBarBreak(enum Qt::ToolBarArea);

    // RVA: 0x6AD | Ordinal: 1710
        void centralWidget(void) const;

    // RVA: 0x7D2 | Ordinal: 2003
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x7E9 | Ordinal: 2026
        void corner(enum Qt::Corner) const;

    // RVA: 0x811 | Ordinal: 2066
        void createPopupMenu(void);

    // RVA: 0x95B | Ordinal: 2396
        void d_func(void);

    // RVA: 0x95C | Ordinal: 2397
        void d_func(void) const;

    // RVA: 0xA3D | Ordinal: 2622
        void dockOptions(void) const;

    // RVA: 0xA3E | Ordinal: 2623
        void dockWidgetArea(class QDockWidget *) const;

    // RVA: 0xA44 | Ordinal: 2629
        void documentMode(void) const;

    // RVA: 0xB4E | Ordinal: 2895
        void event(class QEvent *);

    // RVA: 0xD94 | Ordinal: 3477
        void iconSize(void) const;

    // RVA: 0xD99 | Ordinal: 3482
        void iconSizeChanged(class QSize const &);

    // RVA: 0xE62 | Ordinal: 3683
        void insertToolBar(class QToolBar *, class QToolBar *);

    // RVA: 0xE63 | Ordinal: 3684
        void insertToolBarBreak(class QToolBar *);

    // RVA: 0xEAB | Ordinal: 3756
        void isAnimated(void) const;

    // RVA: 0xECD | Ordinal: 3790
        void isDockNestingEnabled(void) const;

    // RVA: 0xF46 | Ordinal: 3911
        void isSeparator(class QPoint const &) const;

    // RVA: 0x1101 | Ordinal: 4354
        void menuBar(void) const;

    // RVA: 0x1103 | Ordinal: 4356
        void menuWidget(void) const;

    // RVA: 0x1156 | Ordinal: 4439
        void metaObject(void) const;

    // RVA: 0x146F | Ordinal: 5232
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1502 | Ordinal: 5379
        void qt_metacast(char const *);

    // RVA: 0x1598 | Ordinal: 5529
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1633 | Ordinal: 5684
        void removeDockWidget(class QDockWidget *);

    // RVA: 0x164C | Ordinal: 5709
        void removeToolBar(class QToolBar *);

    // RVA: 0x164D | Ordinal: 5710
        void removeToolBarBreak(class QToolBar *);

    // RVA: 0x1694 | Ordinal: 5781
        void resizeDocks(class QList<class QDockWidget *> const &, class QList<int> const &, enum Qt::Orientation);

    // RVA: 0x16CD | Ordinal: 5838
        void restoreDockWidget(class QDockWidget *);

    // RVA: 0x16D3 | Ordinal: 5844
        void restoreState(class QByteArray const &, int);

    // RVA: 0x1720 | Ordinal: 5921
        void saveState(int) const;

    // RVA: 0x1814 | Ordinal: 6165
        void setAnimated(bool);

    // RVA: 0x1869 | Ordinal: 6250
        void setCentralWidget(class QWidget *);

    // RVA: 0x18AC | Ordinal: 6317
        void setCorner(enum Qt::Corner, enum Qt::DockWidgetArea);

    // RVA: 0x191A | Ordinal: 6427
        void setDockNestingEnabled(bool);

    // RVA: 0x191B | Ordinal: 6428
        void setDockOptions(class QFlags<enum QMainWindow::DockOption>);

    // RVA: 0x1920 | Ordinal: 6433
        void setDocumentMode(bool);

    // RVA: 0x1A11 | Ordinal: 6674
        void setIconSize(class QSize const &);

    // RVA: 0x1AA4 | Ordinal: 6821
        void setMenuBar(class QMenuBar *);

    // RVA: 0x1AA6 | Ordinal: 6823
        void setMenuWidget(class QWidget *);

    // RVA: 0x1C4A | Ordinal: 7243
        void setStatusBar(class QStatusBar *);

    // RVA: 0x1C7D | Ordinal: 7294
        void setTabPosition(class QFlags<enum Qt::DockWidgetArea>, enum QTabWidget::TabPosition);

    // RVA: 0x1C80 | Ordinal: 7297
        void setTabShape(enum QTabWidget::TabShape);

    // RVA: 0x1CCE | Ordinal: 7375
        void setToolButtonStyle(enum Qt::ToolButtonStyle);

    // RVA: 0x1CEC | Ordinal: 7405
        void setUnifiedTitleAndToolBarOnMac(bool);

    // RVA: 0x1E5C | Ordinal: 7773
        void splitDockWidget(class QDockWidget *, class QDockWidget *, enum Qt::Orientation);

    // RVA: 0x1F22 | Ordinal: 7971
        void statusBar(void) const;

    // RVA: 0x1F92 | Ordinal: 8083
        void tabPosition(enum Qt::DockWidgetArea) const;

    // RVA: 0x1F98 | Ordinal: 8089
        void tabShape(void) const;

    // RVA: 0x1FA7 | Ordinal: 8104
        void tabifiedDockWidgetActivated(class QDockWidget *);

    // RVA: 0x1FA8 | Ordinal: 8105
        void tabifiedDockWidgets(class QDockWidget *) const;

    // RVA: 0x1FA9 | Ordinal: 8106
        void tabifyDockWidget(class QDockWidget *, class QDockWidget *);

    // RVA: 0x1FB6 | Ordinal: 8119
        void takeCentralWidget(void);

    // RVA: 0x204E | Ordinal: 8271
        void toolBarArea(class QToolBar *) const;

    // RVA: 0x204F | Ordinal: 8272
        void toolBarBreak(class QToolBar *) const;

    // RVA: 0x2051 | Ordinal: 8274
        void toolButtonStyle(void) const;

    // RVA: 0x2054 | Ordinal: 8277
        void toolButtonStyleChanged(enum Qt::ToolButtonStyle);

    // RVA: 0x20BE | Ordinal: 8383
        void tr(char const *, char const *, int);

    // RVA: 0x2151 | Ordinal: 8530
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21E5 | Ordinal: 8678
        void unifiedTitleAndToolBarOnMac(void) const;

    // RVA: 0x228 | Ordinal: 553
        void _QMainWindow(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QMAINWINDOW_HPP
