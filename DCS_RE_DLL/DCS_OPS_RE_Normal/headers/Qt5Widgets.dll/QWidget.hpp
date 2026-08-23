#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWidget
{
public:

    // RVA: 0x19F | Ordinal: 416
        void QWidget(class QWidgetPrivate &, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x1A0 | Ordinal: 417
        void QWidget(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x4E4 | Ordinal: 1253
        void acceptDrops(void) const;

    // RVA: 0x4F0 | Ordinal: 1265
        void accessibleDescription(void) const;

    // RVA: 0x4F1 | Ordinal: 1266
        void accessibleName(void) const;

    // RVA: 0x4FE | Ordinal: 1279
        void actionEvent(class QActionEvent *);

    // RVA: 0x509 | Ordinal: 1290
        void actions(void) const;

    // RVA: 0x513 | Ordinal: 1300
        void activateWindow(void);

    // RVA: 0x53B | Ordinal: 1340
        void addAction(class QAction *);

    // RVA: 0x53D | Ordinal: 1342
        void addActions(class QList<class QAction *>);

    // RVA: 0x5AF | Ordinal: 1456
        void adjustSize(void);

    // RVA: 0x5FA | Ordinal: 1531
        void autoFillBackground(void) const;

    // RVA: 0x619 | Ordinal: 1562
        void backgroundRole(void) const;

    // RVA: 0x61B | Ordinal: 1564
        void backingStore(void) const;

    // RVA: 0x622 | Ordinal: 1571
        void baseSize(void) const;

    // RVA: 0x6CD | Ordinal: 1742
        void changeEvent(class QEvent *);

    // RVA: 0x6E3 | Ordinal: 1764
        void childAt(class QPoint const &) const;

    // RVA: 0x6E4 | Ordinal: 1765
        void childAt(int, int) const;

    // RVA: 0x6FA | Ordinal: 1787
        void childrenRect(void) const;

    // RVA: 0x6FB | Ordinal: 1788
        void childrenRegion(void) const;

    // RVA: 0x724 | Ordinal: 1829
        void clearFocus(void);

    // RVA: 0x728 | Ordinal: 1833
        void clearMask(void);

    // RVA: 0x748 | Ordinal: 1865
        void close(void);

    // RVA: 0x755 | Ordinal: 1878
        void closeEvent(class QCloseEvent *);

    // RVA: 0x7BE | Ordinal: 1983
        void contentsMargins(void) const;

    // RVA: 0x7C2 | Ordinal: 1987
        void contentsRect(void) const;

    // RVA: 0x7D7 | Ordinal: 2008
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x7D8 | Ordinal: 2009
        void contextMenuPolicy(void) const;

    // RVA: 0x801 | Ordinal: 2050
        void create(unsigned __int64, bool, bool);

    // RVA: 0x826 | Ordinal: 2087
        void createWinId(void);

    // RVA: 0x828 | Ordinal: 2089
        void createWindowContainer(class QWindow *, class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x875 | Ordinal: 2166
        void cursor(void) const;

    // RVA: 0x89F | Ordinal: 2208
        void customContextMenuRequested(class QPoint const &);

    // RVA: 0x9CF | Ordinal: 2512
        void d_func(void);

    // RVA: 0x9D0 | Ordinal: 2513
        void d_func(void) const;

    // RVA: 0xA10 | Ordinal: 2577
        void destroy(bool, bool);

    // RVA: 0xA14 | Ordinal: 2581
        void devType(void) const;

    // RVA: 0xA6F | Ordinal: 2672
        void dragEnterEvent(class QDragEnterEvent *);

    // RVA: 0xA7B | Ordinal: 2684
        void dragLeaveEvent(class QDragLeaveEvent *);

    // RVA: 0xA89 | Ordinal: 2698
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xADE | Ordinal: 2783
        void dropEvent(class QDropEvent *);

    // RVA: 0xB01 | Ordinal: 2818
        void effectiveWinId(void) const;

    // RVA: 0xB19 | Ordinal: 2842
        void ensurePolished(void) const;

    // RVA: 0xB29 | Ordinal: 2858
        void enterEvent(class QEvent *);

    // RVA: 0xB70 | Ordinal: 2929
        void event(class QEvent *);

    // RVA: 0xBD8 | Ordinal: 3033
        void find(unsigned __int64);

    // RVA: 0xC13 | Ordinal: 3092
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC17 | Ordinal: 3096
        void focusNextChild(void);

    // RVA: 0xC24 | Ordinal: 3109
        void focusNextPrevChild(bool);

    // RVA: 0xC3A | Ordinal: 3131
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xC3C | Ordinal: 3133
        void focusPolicy(void) const;

    // RVA: 0xC3D | Ordinal: 3134
        void focusPreviousChild(void);

    // RVA: 0xC3F | Ordinal: 3136
        void focusProxy(void) const;

    // RVA: 0xC44 | Ordinal: 3141
        void focusWidget(void) const;

    // RVA: 0xC53 | Ordinal: 3156
        void font(void) const;

    // RVA: 0xC56 | Ordinal: 3159
        void fontInfo(void) const;

    // RVA: 0xC59 | Ordinal: 3162
        void fontMetrics(void) const;

    // RVA: 0xC65 | Ordinal: 3174
        void foregroundRole(void) const;

    // RVA: 0xC6D | Ordinal: 3182
        void frameGeometry(void) const;

    // RVA: 0xC72 | Ordinal: 3187
        void frameSize(void) const;

    // RVA: 0xC82 | Ordinal: 3203
        void geometry(void) const;

    // RVA: 0xC93 | Ordinal: 3220
        void getContentsMargins(int *, int *, int *, int *) const;

    // RVA: 0xCB7 | Ordinal: 3256
        void grab(class QRect const &);

    // RVA: 0xCBC | Ordinal: 3261
        void grabGesture(enum Qt::GestureType, class QFlags<enum Qt::GestureFlag>);

    // RVA: 0xCBE | Ordinal: 3263
        void grabKeyboard(void);

    // RVA: 0xCC1 | Ordinal: 3266
        void grabMouse(class QCursor const &);

    // RVA: 0xCC2 | Ordinal: 3267
        void grabMouse(void);

    // RVA: 0xCC6 | Ordinal: 3271
        void grabShortcut(class QKeySequence const &, enum Qt::ShortcutContext);

    // RVA: 0xCC9 | Ordinal: 3274
        void graphicsEffect(void) const;

    // RVA: 0xCCC | Ordinal: 3277
        void graphicsProxyWidget(void) const;

    // RVA: 0xCE4 | Ordinal: 3301
        void hasFocus(void) const;

    // RVA: 0xCEF | Ordinal: 3312
        void hasHeightForWidth(void) const;

    // RVA: 0xCF2 | Ordinal: 3315
        void hasMouseTracking(void) const;

    // RVA: 0xCF9 | Ordinal: 3322
        void hasTabletTracking(void) const;

    // RVA: 0xD07 | Ordinal: 3336
        void height(void) const;

    // RVA: 0xD13 | Ordinal: 3348
        void heightForWidth(int) const;

    // RVA: 0xD23 | Ordinal: 3364
        void hide(void);

    // RVA: 0xD32 | Ordinal: 3379
        void hideEvent(class QHideEvent *);

    // RVA: 0xDDF | Ordinal: 3552
        void initPainter(class QPainter *) const;

    // RVA: 0xE16 | Ordinal: 3607
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE18 | Ordinal: 3609
        void inputMethodHints(void) const;

    // RVA: 0xE28 | Ordinal: 3625
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE30 | Ordinal: 3633
        void insertAction(class QAction *, class QAction *);

    // RVA: 0xE32 | Ordinal: 3635
        void insertActions(class QAction *, class QList<class QAction *>);

    // RVA: 0xE82 | Ordinal: 3715
        void internalWinId(void) const;

    // RVA: 0xEA7 | Ordinal: 3752
        void isActiveWindow(void) const;

    // RVA: 0xEAA | Ordinal: 3755
        void isAncestorOf(class QWidget const *) const;

    // RVA: 0xEDC | Ordinal: 3805
        void isEnabled(void) const;

    // RVA: 0xEDD | Ordinal: 3806
        void isEnabledTo(class QWidget const *) const;

    // RVA: 0xEDE | Ordinal: 3807
        void isEnabledToTLW(void) const;

    // RVA: 0xEED | Ordinal: 3822
        void isFullScreen(void) const;

    // RVA: 0xEF4 | Ordinal: 3829
        void isHidden(void) const;

    // RVA: 0xF08 | Ordinal: 3849
        void isLeftToRight(void) const;

    // RVA: 0xF09 | Ordinal: 3850
        void isMaximized(void) const;

    // RVA: 0xF0A | Ordinal: 3851
        void isMinimized(void) const;

    // RVA: 0xF0B | Ordinal: 3852
        void isModal(void) const;

    // RVA: 0xF3A | Ordinal: 3899
        void isRightToLeft(void) const;

    // RVA: 0xF5A | Ordinal: 3931
        void isTopLevel(void) const;

    // RVA: 0xF70 | Ordinal: 3953
        void isVisible(void) const;

    // RVA: 0xF72 | Ordinal: 3955
        void isVisibleTo(class QWidget const *) const;

    // RVA: 0xF75 | Ordinal: 3958
        void isWindow(void) const;

    // RVA: 0xF77 | Ordinal: 3960
        void isWindowModified(void) const;

    // RVA: 0x100F | Ordinal: 4112
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x101C | Ordinal: 4125
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x101F | Ordinal: 4128
        void keyboardGrabber(void);

    // RVA: 0x1040 | Ordinal: 4161
        void layout(void) const;

    // RVA: 0x1046 | Ordinal: 4167
        void layoutDirection(void) const;

    // RVA: 0x1054 | Ordinal: 4181
        void leaveEvent(class QEvent *);

    // RVA: 0x106F | Ordinal: 4208
        void locale(void) const;

    // RVA: 0x1075 | Ordinal: 4214
        void lower(void);

    // RVA: 0x107A | Ordinal: 4219
        void mapFrom(class QWidget const *, class QPoint const &) const;

    // RVA: 0x107B | Ordinal: 4220
        void mapFromGlobal(class QPoint const &) const;

    // RVA: 0x1088 | Ordinal: 4233
        void mapFromParent(class QPoint const &) const;

    // RVA: 0x10A6 | Ordinal: 4263
        void mapTo(class QWidget const *, class QPoint const &) const;

    // RVA: 0x10A7 | Ordinal: 4264
        void mapToGlobal(class QPoint const &) const;

    // RVA: 0x10B5 | Ordinal: 4278
        void mapToParent(class QPoint const &) const;

    // RVA: 0x10D0 | Ordinal: 4305
        void mask(void) const;

    // RVA: 0x10E9 | Ordinal: 4330
        void maximumHeight(void) const;

    // RVA: 0x10F1 | Ordinal: 4338
        void maximumSize(void) const;

    // RVA: 0x10F7 | Ordinal: 4344
        void maximumWidth(void) const;

    // RVA: 0x1196 | Ordinal: 4503
        void metaObject(void) const;

    // RVA: 0x11A0 | Ordinal: 4513
        void metric(enum QPaintDevice::PaintDeviceMetric) const;

    // RVA: 0x11BA | Ordinal: 4539
        void minimumHeight(void) const;

    // RVA: 0x11C8 | Ordinal: 4553
        void minimumSize(void) const;

    // RVA: 0x11E2 | Ordinal: 4579
        void minimumSizeHint(void) const;

    // RVA: 0x11E7 | Ordinal: 4584
        void minimumWidth(void) const;

    // RVA: 0x120D | Ordinal: 4622
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x120E | Ordinal: 4623
        void mouseGrabber(void);

    // RVA: 0x122D | Ordinal: 4654
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1250 | Ordinal: 4689
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x126F | Ordinal: 4720
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1274 | Ordinal: 4725
        void move(class QPoint const &);

    // RVA: 0x1275 | Ordinal: 4726
        void move(int, int);

    // RVA: 0x1284 | Ordinal: 4741
        void moveEvent(class QMoveEvent *);

    // RVA: 0x1294 | Ordinal: 4757
        void nativeEvent(class QByteArray const &, void *, long *);

    // RVA: 0x1297 | Ordinal: 4760
        void nativeParentWidget(void) const;

    // RVA: 0x12A8 | Ordinal: 4777
        void nextInFocusChain(void) const;

    // RVA: 0x12AA | Ordinal: 4779
        void normalGeometry(void) const;

    // RVA: 0x1301 | Ordinal: 4866
        void overrideWindowFlags(class QFlags<enum Qt::WindowType>);

    // RVA: 0x1302 | Ordinal: 4867
        void overrideWindowState(class QFlags<enum Qt::WindowState>);

    // RVA: 0x1320 | Ordinal: 4897
        void paintEngine(void) const;

    // RVA: 0x134A | Ordinal: 4939
        void paintEvent(class QPaintEvent *);

    // RVA: 0x1357 | Ordinal: 4952
        void palette(void) const;

    // RVA: 0x136D | Ordinal: 4974
        void parentWidget(void) const;

    // RVA: 0x13B9 | Ordinal: 5050
        void pos(void) const;

    // RVA: 0x13CE | Ordinal: 5071
        void previousInFocusChain(void) const;

    // RVA: 0x14AF | Ordinal: 5296
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1542 | Ordinal: 5443
        void qt_metacast(char const *);

    // RVA: 0x15D8 | Ordinal: 5593
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15EA | Ordinal: 5611
        void raise(void);

    // RVA: 0x15F7 | Ordinal: 5624
        void rect(void) const;

    // RVA: 0x15FB | Ordinal: 5628
        void redirected(class QPoint *) const;

    // RVA: 0x161B | Ordinal: 5660
        void releaseKeyboard(void);

    // RVA: 0x161C | Ordinal: 5661
        void releaseMouse(void);

    // RVA: 0x161E | Ordinal: 5663
        void releaseShortcut(int);

    // RVA: 0x1627 | Ordinal: 5672
        void removeAction(class QAction *);

    // RVA: 0x1654 | Ordinal: 5717
        void render(class QPaintDevice *, class QPoint const &, class QRegion const &, class QFlags<enum QWidget::RenderFlag>);

    // RVA: 0x1655 | Ordinal: 5718
        void render(class QPainter *, class QPoint const &, class QRegion const &, class QFlags<enum QWidget::RenderFlag>);

    // RVA: 0x165B | Ordinal: 5724
        void repaint(class QRect const &);

    // RVA: 0x165C | Ordinal: 5725
        void repaint(class QRegion const &);

    // RVA: 0x165D | Ordinal: 5726
        void repaint(int, int, int, int);

    // RVA: 0x165E | Ordinal: 5727
        void repaint(void);

    // RVA: 0x168C | Ordinal: 5773
        void resize(class QSize const &);

    // RVA: 0x168D | Ordinal: 5774
        void resize(int, int);

    // RVA: 0x16B3 | Ordinal: 5812
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16CF | Ordinal: 5840
        void restoreGeometry(class QByteArray const &);

    // RVA: 0x171B | Ordinal: 5916
        void saveGeometry(void) const;

    // RVA: 0x173F | Ordinal: 5952
        void screen(void) const;

    // RVA: 0x174F | Ordinal: 5968
        void scroll(int, int);

    // RVA: 0x1750 | Ordinal: 5969
        void scroll(int, int, class QRect const &);

    // RVA: 0x17E6 | Ordinal: 6119
        void setAcceptDrops(bool);

    // RVA: 0x17F0 | Ordinal: 6129
        void setAccessibleDescription(class QString const &);

    // RVA: 0x17F1 | Ordinal: 6130
        void setAccessibleName(class QString const &);

    // RVA: 0x1818 | Ordinal: 6169
        void setAttribute(enum Qt::WidgetAttribute, bool);

    // RVA: 0x1820 | Ordinal: 6177
        void setAutoFillBackground(bool);

    // RVA: 0x1838 | Ordinal: 6201
        void setBackgroundRole(enum QPalette::ColorRole);

    // RVA: 0x183A | Ordinal: 6203
        void setBackingStore(class QBackingStore *);

    // RVA: 0x183C | Ordinal: 6205
        void setBaseSize(class QSize const &);

    // RVA: 0x183D | Ordinal: 6206
        void setBaseSize(int, int);

    // RVA: 0x18A5 | Ordinal: 6310
        void setContentsMargins(class QMargins const &);

    // RVA: 0x18A6 | Ordinal: 6311
        void setContentsMargins(int, int, int, int);

    // RVA: 0x18A9 | Ordinal: 6314
        void setContextMenuPolicy(enum Qt::ContextMenuPolicy);

    // RVA: 0x18D8 | Ordinal: 6361
        void setCursor(class QCursor const &);

    // RVA: 0x1917 | Ordinal: 6424
        void setDisabled(bool);

    // RVA: 0x194B | Ordinal: 6476
        void setEnabled(bool);

    // RVA: 0x197A | Ordinal: 6523
        void setFixedHeight(int);

    // RVA: 0x197B | Ordinal: 6524
        void setFixedSize(class QSize const &);

    // RVA: 0x197C | Ordinal: 6525
        void setFixedSize(int, int);

    // RVA: 0x197D | Ordinal: 6526
        void setFixedWidth(int);

    // RVA: 0x198B | Ordinal: 6540
        void setFocus(enum Qt::FocusReason);

    // RVA: 0x198C | Ordinal: 6541
        void setFocus(void);

    // RVA: 0x1992 | Ordinal: 6547
        void setFocusPolicy(enum Qt::FocusPolicy);

    // RVA: 0x1994 | Ordinal: 6549
        void setFocusProxy(class QWidget *);

    // RVA: 0x19A3 | Ordinal: 6564
        void setFont(class QFont const &);

    // RVA: 0x19B1 | Ordinal: 6578
        void setForegroundRole(enum QPalette::ColorRole);

    // RVA: 0x19CE | Ordinal: 6607
        void setGeometry(class QRect const &);

    // RVA: 0x19CF | Ordinal: 6608
        void setGeometry(int, int, int, int);

    // RVA: 0x19D5 | Ordinal: 6614
        void setGraphicsEffect(class QGraphicsEffect *);

    // RVA: 0x19EC | Ordinal: 6637
        void setHidden(bool);

    // RVA: 0x1A21 | Ordinal: 6690
        void setInputMethodHints(class QFlags<enum Qt::InputMethodHint>);

    // RVA: 0x1A6A | Ordinal: 6763
        void setLayout(class QLayout *);

    // RVA: 0x1A6C | Ordinal: 6765
        void setLayoutDirection(enum Qt::LayoutDirection);

    // RVA: 0x1A7B | Ordinal: 6780
        void setLocale(class QLocale const &);

    // RVA: 0x1A82 | Ordinal: 6787
        void setMask(class QBitmap const &);

    // RVA: 0x1A83 | Ordinal: 6788
        void setMask(class QRegion const &);

    // RVA: 0x1A96 | Ordinal: 6807
        void setMaximumHeight(int);

    // RVA: 0x1A9A | Ordinal: 6811
        void setMaximumSize(class QSize const &);

    // RVA: 0x1A9B | Ordinal: 6812
        void setMaximumSize(int, int);

    // RVA: 0x1A9F | Ordinal: 6816
        void setMaximumWidth(int);

    // RVA: 0x1AB5 | Ordinal: 6838
        void setMinimumHeight(int);

    // RVA: 0x1ABA | Ordinal: 6843
        void setMinimumSize(class QSize const &);

    // RVA: 0x1ABB | Ordinal: 6844
        void setMinimumSize(int, int);

    // RVA: 0x1ABF | Ordinal: 6848
        void setMinimumWidth(int);

    // RVA: 0x1ADE | Ordinal: 6879
        void setMouseTracking(bool);

    // RVA: 0x1B3A | Ordinal: 6971
        void setPalette(class QPalette const &);

    // RVA: 0x1B3F | Ordinal: 6976
        void setParent(class QWidget *);

    // RVA: 0x1B40 | Ordinal: 6977
        void setParent(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x1BFD | Ordinal: 7166
        void setShortcutAutoRepeat(int, bool);

    // RVA: 0x1C01 | Ordinal: 7170
        void setShortcutEnabled(int, bool);

    // RVA: 0x1C13 | Ordinal: 7188
        void setSizeIncrement(class QSize const &);

    // RVA: 0x1C14 | Ordinal: 7189
        void setSizeIncrement(int, int);

    // RVA: 0x1C18 | Ordinal: 7193
        void setSizePolicy(class QSizePolicy);

    // RVA: 0x1C19 | Ordinal: 7194
        void setSizePolicy(enum QSizePolicy::Policy, enum QSizePolicy::Policy);

    // RVA: 0x1C4F | Ordinal: 7248
        void setStatusTip(class QString const &);

    // RVA: 0x1C60 | Ordinal: 7265
        void setStyle(class QStyle *);

    // RVA: 0x1C62 | Ordinal: 7267
        void setStyleSheet(class QString const &);

    // RVA: 0x1C7C | Ordinal: 7293
        void setTabOrder(class QWidget *, class QWidget *);

    // RVA: 0x1C90 | Ordinal: 7313
        void setTabletTracking(bool);

    // RVA: 0x1CD7 | Ordinal: 7384
        void setToolTip(class QString const &);

    // RVA: 0x1CD8 | Ordinal: 7385
        void setToolTipDuration(int);

    // RVA: 0x1CF2 | Ordinal: 7411
        void setUpdatesEnabled(bool);

    // RVA: 0x1D21 | Ordinal: 7458
        void setVisible(bool);

    // RVA: 0x1D2C | Ordinal: 7469
        void setWhatsThis(class QString const &);

    // RVA: 0x1D3D | Ordinal: 7486
        void setWindowFilePath(class QString const &);

    // RVA: 0x1D40 | Ordinal: 7489
        void setWindowFlag(enum Qt::WindowType, bool);

    // RVA: 0x1D42 | Ordinal: 7491
        void setWindowFlags(class QFlags<enum Qt::WindowType>);

    // RVA: 0x1D47 | Ordinal: 7496
        void setWindowIcon(class QIcon const &);

    // RVA: 0x1D48 | Ordinal: 7497
        void setWindowIconText(class QString const &);

    // RVA: 0x1D4E | Ordinal: 7503
        void setWindowModality(enum Qt::WindowModality);

    // RVA: 0x1D4F | Ordinal: 7504
        void setWindowModified(bool);

    // RVA: 0x1D51 | Ordinal: 7506
        void setWindowOpacity(double);

    // RVA: 0x1D53 | Ordinal: 7508
        void setWindowRole(class QString const &);

    // RVA: 0x1D54 | Ordinal: 7509
        void setWindowState(class QFlags<enum Qt::WindowState>);

    // RVA: 0x1D57 | Ordinal: 7512
        void setWindowTitle(class QString const &);

    // RVA: 0x1D82 | Ordinal: 7555
        void sharedPainter(void) const;

    // RVA: 0x1D91 | Ordinal: 7570
        void show(void);

    // RVA: 0x1DA9 | Ordinal: 7594
        void showEvent(class QShowEvent *);

    // RVA: 0x1DAB | Ordinal: 7596
        void showFullScreen(void);

    // RVA: 0x1DAD | Ordinal: 7598
        void showMaximized(void);

    // RVA: 0x1DB6 | Ordinal: 7607
        void showMinimized(void);

    // RVA: 0x1DB9 | Ordinal: 7610
        void showNormal(void);

    // RVA: 0x1DD8 | Ordinal: 7641
        void size(void) const;

    // RVA: 0x1E16 | Ordinal: 7703
        void sizeHint(void) const;

    // RVA: 0x1E21 | Ordinal: 7714
        void sizeIncrement(void) const;

    // RVA: 0x1E25 | Ordinal: 7718
        void sizePolicy(void) const;

    // RVA: 0x1E63 | Ordinal: 7780
        void stackUnder(class QWidget *);

    // RVA: 0x1F27 | Ordinal: 7976
        void statusTip(void) const;

    // RVA: 0x1F44 | Ordinal: 8005
        void style(void) const;

    // RVA: 0x1F4E | Ordinal: 8015
        void styleSheet(void) const;

    // RVA: 0x1FAC | Ordinal: 8109
        void tabletEvent(class QTabletEvent *);

    // RVA: 0x1FBC | Ordinal: 8125
        void takeLayout(void);

    // RVA: 0x1FC6 | Ordinal: 8135
        void testAttribute(enum Qt::WidgetAttribute) const;

    // RVA: 0x1FC7 | Ordinal: 8136
        void testAttribute_helper(enum Qt::WidgetAttribute) const;

    // RVA: 0x205C | Ordinal: 8285
        void toolTip(void) const;

    // RVA: 0x205D | Ordinal: 8286
        void toolTipDuration(void) const;

    // RVA: 0x2068 | Ordinal: 8297
        void topLevelWidget(void) const;

    // RVA: 0x20FE | Ordinal: 8447
        void tr(char const *, char const *, int);

    // RVA: 0x2191 | Ordinal: 8594
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21CC | Ordinal: 8653
        void underMouse(void) const;

    // RVA: 0x21DF | Ordinal: 8672
        void ungrabGesture(enum Qt::GestureType);

    // RVA: 0x21F6 | Ordinal: 8695
        void unsetCursor(void);

    // RVA: 0x21FC | Ordinal: 8701
        void unsetLayoutDirection(void);

    // RVA: 0x21FD | Ordinal: 8702
        void unsetLocale(void);

    // RVA: 0x2209 | Ordinal: 8714
        void update(class QRect const &);

    // RVA: 0x220A | Ordinal: 8715
        void update(class QRegion const &);

    // RVA: 0x220B | Ordinal: 8716
        void update(int, int, int, int);

    // RVA: 0x220C | Ordinal: 8717
        void update(void);

    // RVA: 0x2231 | Ordinal: 8754
        void updateGeometry(void);

    // RVA: 0x223D | Ordinal: 8766
        void updateMicroFocus(void);

    // RVA: 0x2257 | Ordinal: 8792
        void updatesEnabled(void) const;

    // RVA: 0x22B8 | Ordinal: 8889
        void visibleRegion(void) const;

    // RVA: 0x22DE | Ordinal: 8927
        void whatsThis(void) const;

    // RVA: 0x22EE | Ordinal: 8943
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x2311 | Ordinal: 8978
        void width(void) const;

    // RVA: 0x2315 | Ordinal: 8982
        void winId(void) const;

    // RVA: 0x2318 | Ordinal: 8985
        void window(void) const;

    // RVA: 0x2319 | Ordinal: 8986
        void windowFilePath(void) const;

    // RVA: 0x231B | Ordinal: 8988
        void windowFlags(void) const;

    // RVA: 0x2321 | Ordinal: 8994
        void windowHandle(void) const;

    // RVA: 0x2324 | Ordinal: 8997
        void windowIcon(void) const;

    // RVA: 0x2325 | Ordinal: 8998
        void windowIconChanged(class QIcon const &);

    // RVA: 0x2326 | Ordinal: 8999
        void windowIconText(void) const;

    // RVA: 0x2327 | Ordinal: 9000
        void windowIconTextChanged(class QString const &);

    // RVA: 0x2328 | Ordinal: 9001
        void windowModality(void) const;

    // RVA: 0x2329 | Ordinal: 9002
        void windowOpacity(void) const;

    // RVA: 0x232A | Ordinal: 9003
        void windowRole(void) const;

    // RVA: 0x232B | Ordinal: 9004
        void windowState(void) const;

    // RVA: 0x232E | Ordinal: 9007
        void windowTitle(void) const;

    // RVA: 0x232F | Ordinal: 9008
        void windowTitleChanged(class QString const &);

    // RVA: 0x2331 | Ordinal: 9010
        void windowType(void) const;

    // RVA: 0x2344 | Ordinal: 9029
        void x(void) const;

    // RVA: 0x234C | Ordinal: 9037
        void y(void) const;

    // RVA: 0x28D | Ordinal: 654
        void _QWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QWIDGET_HPP
