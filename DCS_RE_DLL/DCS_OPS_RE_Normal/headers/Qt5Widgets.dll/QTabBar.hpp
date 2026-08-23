#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTabBar
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTabBar
{
public:

    // RVA: 0x16C | Ordinal: 365
        void QTabBar(class QWidget *);

    // RVA: 0x4F3 | Ordinal: 1268
        void accessibleTabName(int) const;

    // RVA: 0x592 | Ordinal: 1427
        void addTab(class QIcon const &, class QString const &);

    // RVA: 0x593 | Ordinal: 1428
        void addTab(class QString const &);

    // RVA: 0x5FC | Ordinal: 1533
        void autoHide(void) const;

    // RVA: 0x6AE | Ordinal: 1711
        void changeCurrentOnDrag(void) const;

    // RVA: 0x6C7 | Ordinal: 1736
        void changeEvent(class QEvent *);

    // RVA: 0x7FB | Ordinal: 2044
        void count(void) const;

    // RVA: 0x836 | Ordinal: 2103
        void currentChanged(int);

    // RVA: 0x854 | Ordinal: 2133
        void currentIndex(void) const;

    // RVA: 0x9AD | Ordinal: 2478
        void d_func(void);

    // RVA: 0x9AE | Ordinal: 2479
        void d_func(void) const;

    // RVA: 0xA46 | Ordinal: 2631
        void documentMode(void) const;

    // RVA: 0xA9A | Ordinal: 2715
        void drawBase(void) const;

    // RVA: 0xB02 | Ordinal: 2819
        void elideMode(void) const;

    // RVA: 0xB67 | Ordinal: 2920
        void event(class QEvent *);

    // RVA: 0xB9D | Ordinal: 2974
        void expanding(void) const;

    // RVA: 0xD31 | Ordinal: 3378
        void hideEvent(class QHideEvent *);

    // RVA: 0xD95 | Ordinal: 3478
        void iconSize(void) const;

    // RVA: 0xDF7 | Ordinal: 3576
        void initStyleOption(class QStyleOptionTab *, int) const;

    // RVA: 0xE5E | Ordinal: 3679
        void insertTab(int, class QIcon const &, class QString const &);

    // RVA: 0xE5F | Ordinal: 3680
        void insertTab(int, class QString const &);

    // RVA: 0xF0F | Ordinal: 3856
        void isMovable(void) const;

    // RVA: 0xF53 | Ordinal: 3924
        void isTabEnabled(int) const;

    // RVA: 0xF55 | Ordinal: 3926
        void isTabVisible(int) const;

    // RVA: 0x100A | Ordinal: 4107
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1184 | Ordinal: 4485
        void metaObject(void) const;

    // RVA: 0x11DF | Ordinal: 4576
        void minimumSizeHint(void) const;

    // RVA: 0x11E3 | Ordinal: 4580
        void minimumTabSizeHint(int) const;

    // RVA: 0x1229 | Ordinal: 4650
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x124B | Ordinal: 4684
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x126A | Ordinal: 4715
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1289 | Ordinal: 4746
        void moveTab(int, int);

    // RVA: 0x1342 | Ordinal: 4931
        void paintEvent(class QPaintEvent *);

    // RVA: 0x149D | Ordinal: 5278
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1530 | Ordinal: 5425
        void qt_metacast(char const *);

    // RVA: 0x15C6 | Ordinal: 5575
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x164A | Ordinal: 5707
        void removeTab(int);

    // RVA: 0x16B0 | Ordinal: 5809
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x17C0 | Ordinal: 6081
        void selectionBehaviorOnRemove(void) const;

    // RVA: 0x17F3 | Ordinal: 6132
        void setAccessibleTabName(int, class QString const &);

    // RVA: 0x1822 | Ordinal: 6179
        void setAutoHide(bool);

    // RVA: 0x186A | Ordinal: 6251
        void setChangeCurrentOnDrag(bool);

    // RVA: 0x18C0 | Ordinal: 6337
        void setCurrentIndex(int);

    // RVA: 0x1922 | Ordinal: 6435
        void setDocumentMode(bool);

    // RVA: 0x1934 | Ordinal: 6453
        void setDrawBase(bool);

    // RVA: 0x1942 | Ordinal: 6467
        void setElideMode(enum Qt::TextElideMode);

    // RVA: 0x1957 | Ordinal: 6488
        void setExpanding(bool);

    // RVA: 0x1A12 | Ordinal: 6675
        void setIconSize(class QSize const &);

    // RVA: 0x1AE0 | Ordinal: 6881
        void setMovable(bool);

    // RVA: 0x1BEA | Ordinal: 7147
        void setSelectionBehaviorOnRemove(enum QTabBar::SelectionBehavior);

    // RVA: 0x1BF6 | Ordinal: 7159
        void setShape(enum QTabBar::Shape);

    // RVA: 0x1C71 | Ordinal: 7282
        void setTabButton(int, enum QTabBar::ButtonPosition, class QWidget *);

    // RVA: 0x1C75 | Ordinal: 7286
        void setTabData(int, class QVariant const &);

    // RVA: 0x1C76 | Ordinal: 7287
        void setTabEnabled(int, bool);

    // RVA: 0x1C78 | Ordinal: 7289
        void setTabIcon(int, class QIcon const &);

    // RVA: 0x1C87 | Ordinal: 7304
        void setTabText(int, class QString const &);

    // RVA: 0x1C89 | Ordinal: 7306
        void setTabTextColor(int, class QColor const &);

    // RVA: 0x1C8A | Ordinal: 7307
        void setTabToolTip(int, class QString const &);

    // RVA: 0x1C8C | Ordinal: 7309
        void setTabVisible(int, bool);

    // RVA: 0x1C8E | Ordinal: 7311
        void setTabWhatsThis(int, class QString const &);

    // RVA: 0x1C92 | Ordinal: 7315
        void setTabsClosable(bool);

    // RVA: 0x1CF4 | Ordinal: 7413
        void setUsesScrollButtons(bool);

    // RVA: 0x1D7F | Ordinal: 7552
        void shape(void) const;

    // RVA: 0x1DA5 | Ordinal: 7590
        void showEvent(class QShowEvent *);

    // RVA: 0x1E11 | Ordinal: 7698
        void sizeHint(void) const;

    // RVA: 0x1F7C | Ordinal: 8061
        void tabAt(class QPoint const &) const;

    // RVA: 0x1F7F | Ordinal: 8064
        void tabBarClicked(int);

    // RVA: 0x1F81 | Ordinal: 8066
        void tabBarDoubleClicked(int);

    // RVA: 0x1F83 | Ordinal: 8068
        void tabButton(int, enum QTabBar::ButtonPosition) const;

    // RVA: 0x1F87 | Ordinal: 8072
        void tabCloseRequested(int);

    // RVA: 0x1F89 | Ordinal: 8074
        void tabData(int) const;

    // RVA: 0x1F8A | Ordinal: 8075
        void tabIcon(int) const;

    // RVA: 0x1F8C | Ordinal: 8077
        void tabInserted(int);

    // RVA: 0x1F90 | Ordinal: 8081
        void tabLayoutChange(void);

    // RVA: 0x1F91 | Ordinal: 8082
        void tabMoved(int, int);

    // RVA: 0x1F95 | Ordinal: 8086
        void tabRect(int) const;

    // RVA: 0x1F96 | Ordinal: 8087
        void tabRemoved(int);

    // RVA: 0x1F9B | Ordinal: 8092
        void tabSizeHint(int) const;

    // RVA: 0x1FA0 | Ordinal: 8097
        void tabText(int) const;

    // RVA: 0x1FA2 | Ordinal: 8099
        void tabTextColor(int) const;

    // RVA: 0x1FA3 | Ordinal: 8100
        void tabToolTip(int) const;

    // RVA: 0x1FA5 | Ordinal: 8102
        void tabWhatsThis(int) const;

    // RVA: 0x1FAE | Ordinal: 8111
        void tabsClosable(void) const;

    // RVA: 0x2028 | Ordinal: 8233
        void timerEvent(class QTimerEvent *);

    // RVA: 0x20EC | Ordinal: 8429
        void tr(char const *, char const *, int);

    // RVA: 0x217F | Ordinal: 8576
        void trUtf8(char const *, char const *, int);

    // RVA: 0x225E | Ordinal: 8799
        void usesScrollButtons(void) const;

    // RVA: 0x22EC | Ordinal: 8941
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x274 | Ordinal: 629
        void _QTabBar(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTABBAR_HPP
