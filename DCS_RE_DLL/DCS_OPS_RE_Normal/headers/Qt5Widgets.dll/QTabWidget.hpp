#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTabWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTabWidget
{
public:

    // RVA: 0x16E | Ordinal: 367
        void QTabWidget(class QWidget *);

    // RVA: 0x594 | Ordinal: 1429
        void addTab(class QWidget *, class QIcon const &, class QString const &);

    // RVA: 0x595 | Ordinal: 1430
        void addTab(class QWidget *, class QString const &);

    // RVA: 0x6C8 | Ordinal: 1737
        void changeEvent(class QEvent *);

    // RVA: 0x718 | Ordinal: 1817
        void clear(void);

    // RVA: 0x7EC | Ordinal: 2029
        void cornerWidget(enum Qt::Corner) const;

    // RVA: 0x7FC | Ordinal: 2045
        void count(void) const;

    // RVA: 0x837 | Ordinal: 2104
        void currentChanged(int);

    // RVA: 0x855 | Ordinal: 2134
        void currentIndex(void) const;

    // RVA: 0x872 | Ordinal: 2163
        void currentWidget(void) const;

    // RVA: 0x9AF | Ordinal: 2480
        void d_func(void);

    // RVA: 0x9B0 | Ordinal: 2481
        void d_func(void) const;

    // RVA: 0xA47 | Ordinal: 2632
        void documentMode(void) const;

    // RVA: 0xB03 | Ordinal: 2820
        void elideMode(void) const;

    // RVA: 0xB68 | Ordinal: 2921
        void event(class QEvent *);

    // RVA: 0xCEE | Ordinal: 3311
        void hasHeightForWidth(void) const;

    // RVA: 0xD12 | Ordinal: 3347
        void heightForWidth(int) const;

    // RVA: 0xD96 | Ordinal: 3479
        void iconSize(void) const;

    // RVA: 0xDC5 | Ordinal: 3526
        void indexOf(class QWidget *) const;

    // RVA: 0xDF8 | Ordinal: 3577
        void initStyleOption(class QStyleOptionTabWidgetFrame *) const;

    // RVA: 0xE60 | Ordinal: 3681
        void insertTab(int, class QWidget *, class QIcon const &, class QString const &);

    // RVA: 0xE61 | Ordinal: 3682
        void insertTab(int, class QWidget *, class QString const &);

    // RVA: 0xF10 | Ordinal: 3857
        void isMovable(void) const;

    // RVA: 0xF54 | Ordinal: 3925
        void isTabEnabled(int) const;

    // RVA: 0xF56 | Ordinal: 3927
        void isTabVisible(int) const;

    // RVA: 0x100B | Ordinal: 4108
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1185 | Ordinal: 4486
        void metaObject(void) const;

    // RVA: 0x11E0 | Ordinal: 4577
        void minimumSizeHint(void) const;

    // RVA: 0x1343 | Ordinal: 4932
        void paintEvent(class QPaintEvent *);

    // RVA: 0x149E | Ordinal: 5279
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1531 | Ordinal: 5426
        void qt_metacast(char const *);

    // RVA: 0x15C7 | Ordinal: 5576
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x164B | Ordinal: 5708
        void removeTab(int);

    // RVA: 0x16B1 | Ordinal: 5810
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x18B0 | Ordinal: 6321
        void setCornerWidget(class QWidget *, enum Qt::Corner);

    // RVA: 0x18C1 | Ordinal: 6338
        void setCurrentIndex(int);

    // RVA: 0x18D5 | Ordinal: 6358
        void setCurrentWidget(class QWidget *);

    // RVA: 0x1923 | Ordinal: 6436
        void setDocumentMode(bool);

    // RVA: 0x1943 | Ordinal: 6468
        void setElideMode(enum Qt::TextElideMode);

    // RVA: 0x1A13 | Ordinal: 6676
        void setIconSize(class QSize const &);

    // RVA: 0x1AE1 | Ordinal: 6882
        void setMovable(bool);

    // RVA: 0x1C6F | Ordinal: 7280
        void setTabBar(class QTabBar *);

    // RVA: 0x1C70 | Ordinal: 7281
        void setTabBarAutoHide(bool);

    // RVA: 0x1C77 | Ordinal: 7288
        void setTabEnabled(int, bool);

    // RVA: 0x1C79 | Ordinal: 7290
        void setTabIcon(int, class QIcon const &);

    // RVA: 0x1C7F | Ordinal: 7296
        void setTabPosition(enum QTabWidget::TabPosition);

    // RVA: 0x1C82 | Ordinal: 7299
        void setTabShape(enum QTabWidget::TabShape);

    // RVA: 0x1C88 | Ordinal: 7305
        void setTabText(int, class QString const &);

    // RVA: 0x1C8B | Ordinal: 7308
        void setTabToolTip(int, class QString const &);

    // RVA: 0x1C8D | Ordinal: 7310
        void setTabVisible(int, bool);

    // RVA: 0x1C8F | Ordinal: 7312
        void setTabWhatsThis(int, class QString const &);

    // RVA: 0x1C93 | Ordinal: 7316
        void setTabsClosable(bool);

    // RVA: 0x1CEF | Ordinal: 7408
        void setUpLayout(bool);

    // RVA: 0x1CF5 | Ordinal: 7414
        void setUsesScrollButtons(bool);

    // RVA: 0x1DA6 | Ordinal: 7591
        void showEvent(class QShowEvent *);

    // RVA: 0x1E12 | Ordinal: 7699
        void sizeHint(void) const;

    // RVA: 0x1F7D | Ordinal: 8062
        void tabBar(void) const;

    // RVA: 0x1F7E | Ordinal: 8063
        void tabBarAutoHide(void) const;

    // RVA: 0x1F80 | Ordinal: 8065
        void tabBarClicked(int);

    // RVA: 0x1F82 | Ordinal: 8067
        void tabBarDoubleClicked(int);

    // RVA: 0x1F88 | Ordinal: 8073
        void tabCloseRequested(int);

    // RVA: 0x1F8B | Ordinal: 8076
        void tabIcon(int) const;

    // RVA: 0x1F8D | Ordinal: 8078
        void tabInserted(int);

    // RVA: 0x1F94 | Ordinal: 8085
        void tabPosition(void) const;

    // RVA: 0x1F97 | Ordinal: 8088
        void tabRemoved(int);

    // RVA: 0x1F9A | Ordinal: 8091
        void tabShape(void) const;

    // RVA: 0x1FA1 | Ordinal: 8098
        void tabText(int) const;

    // RVA: 0x1FA4 | Ordinal: 8101
        void tabToolTip(int) const;

    // RVA: 0x1FA6 | Ordinal: 8103
        void tabWhatsThis(int) const;

    // RVA: 0x1FAF | Ordinal: 8112
        void tabsClosable(void) const;

    // RVA: 0x20ED | Ordinal: 8430
        void tr(char const *, char const *, int);

    // RVA: 0x2180 | Ordinal: 8577
        void trUtf8(char const *, char const *, int);

    // RVA: 0x225F | Ordinal: 8800
        void usesScrollButtons(void) const;

    // RVA: 0x22FF | Ordinal: 8960
        void widget(int) const;

    // RVA: 0x276 | Ordinal: 631
        void _QTabWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTABWIDGET_HPP
