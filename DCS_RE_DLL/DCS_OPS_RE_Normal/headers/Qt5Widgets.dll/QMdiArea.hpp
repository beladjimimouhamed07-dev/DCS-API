#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QMdiArea
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMdiArea
{
public:

    // RVA: 0xCF | Ordinal: 208
        void QMdiArea(class QWidget *);

    // RVA: 0x510 | Ordinal: 1297
        void activateNextSubWindow(void);

    // RVA: 0x511 | Ordinal: 1298
        void activatePreviousSubWindow(void);

    // RVA: 0x51D | Ordinal: 1310
        void activationOrder(void) const;

    // RVA: 0x527 | Ordinal: 1320
        void activeSubWindow(void) const;

    // RVA: 0x591 | Ordinal: 1426
        void addSubWindow(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x60F | Ordinal: 1552
        void background(void) const;

    // RVA: 0x69A | Ordinal: 1691
        void cascadeSubWindows(void);

    // RVA: 0x6EC | Ordinal: 1773
        void childEvent(class QChildEvent *);

    // RVA: 0x749 | Ordinal: 1866
        void closeActiveSubWindow(void);

    // RVA: 0x74A | Ordinal: 1867
        void closeAllSubWindows(void);

    // RVA: 0x869 | Ordinal: 2154
        void currentSubWindow(void) const;

    // RVA: 0x95D | Ordinal: 2398
        void d_func(void);

    // RVA: 0x95E | Ordinal: 2399
        void d_func(void) const;

    // RVA: 0xA45 | Ordinal: 2630
        void documentMode(void) const;

    // RVA: 0xB4F | Ordinal: 2896
        void event(class QEvent *);

    // RVA: 0xB80 | Ordinal: 2945
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0x1157 | Ordinal: 4440
        void metaObject(void) const;

    // RVA: 0x11D7 | Ordinal: 4568
        void minimumSizeHint(void) const;

    // RVA: 0x1333 | Ordinal: 4916
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1470 | Ordinal: 5233
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1503 | Ordinal: 5380
        void qt_metacast(char const *);

    // RVA: 0x1599 | Ordinal: 5530
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1649 | Ordinal: 5706
        void removeSubWindow(class QWidget *);

    // RVA: 0x16A4 | Ordinal: 5797
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x175A | Ordinal: 5979
        void scrollContentsBy(int, int);

    // RVA: 0x17F5 | Ordinal: 6134
        void setActivationOrder(enum QMdiArea::WindowOrder);

    // RVA: 0x17FF | Ordinal: 6144
        void setActiveSubWindow(class QMdiSubWindow *);

    // RVA: 0x1830 | Ordinal: 6193
        void setBackground(class QBrush const &);

    // RVA: 0x1921 | Ordinal: 6434
        void setDocumentMode(bool);

    // RVA: 0x1B18 | Ordinal: 6937
        void setOption(enum QMdiArea::AreaOption, bool);

    // RVA: 0x1C7E | Ordinal: 7295
        void setTabPosition(enum QTabWidget::TabPosition);

    // RVA: 0x1C81 | Ordinal: 7298
        void setTabShape(enum QTabWidget::TabShape);

    // RVA: 0x1C91 | Ordinal: 7314
        void setTabsClosable(bool);

    // RVA: 0x1C94 | Ordinal: 7317
        void setTabsMovable(bool);

    // RVA: 0x1D10 | Ordinal: 7441
        void setViewMode(enum QMdiArea::ViewMode);

    // RVA: 0x1D73 | Ordinal: 7540
        void setupViewport(class QWidget *);

    // RVA: 0x1D9D | Ordinal: 7582
        void showEvent(class QShowEvent *);

    // RVA: 0x1E00 | Ordinal: 7681
        void sizeHint(void) const;

    // RVA: 0x1F5C | Ordinal: 8029
        void subWindowActivated(class QMdiSubWindow *);

    // RVA: 0x1F5D | Ordinal: 8030
        void subWindowList(enum QMdiArea::WindowOrder) const;

    // RVA: 0x1F93 | Ordinal: 8084
        void tabPosition(void) const;

    // RVA: 0x1F99 | Ordinal: 8090
        void tabShape(void) const;

    // RVA: 0x1FAD | Ordinal: 8110
        void tabsClosable(void) const;

    // RVA: 0x1FB0 | Ordinal: 8113
        void tabsMovable(void) const;

    // RVA: 0x1FCD | Ordinal: 8142
        void testOption(enum QMdiArea::AreaOption) const;

    // RVA: 0x2015 | Ordinal: 8214
        void tileSubWindows(void);

    // RVA: 0x2023 | Ordinal: 8228
        void timerEvent(class QTimerEvent *);

    // RVA: 0x20BF | Ordinal: 8384
        void tr(char const *, char const *, int);

    // RVA: 0x2152 | Ordinal: 8531
        void trUtf8(char const *, char const *, int);

    // RVA: 0x229D | Ordinal: 8862
        void viewMode(void) const;

    // RVA: 0x22A8 | Ordinal: 8873
        void viewportEvent(class QEvent *);

    // RVA: 0x229 | Ordinal: 554
        void _QMdiArea(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QMDIAREA_HPP
