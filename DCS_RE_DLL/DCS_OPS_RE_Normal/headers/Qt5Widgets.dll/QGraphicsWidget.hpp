#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsWidget
{
public:

    // RVA: 0xA6 | Ordinal: 167
        void QGraphicsWidget(class QGraphicsWidgetPrivate &, class QGraphicsItem *, class QFlags<enum Qt::WindowType>);

    // RVA: 0xA7 | Ordinal: 168
        void QGraphicsWidget(class QGraphicsItem *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x508 | Ordinal: 1289
        void actions(void) const;

    // RVA: 0x52E | Ordinal: 1327
        void addAction(class QAction *);

    // RVA: 0x53C | Ordinal: 1341
        void addActions(class QList<class QAction *>);

    // RVA: 0x5AE | Ordinal: 1455
        void adjustSize(void);

    // RVA: 0x5F9 | Ordinal: 1530
        void autoFillBackground(void) const;

    // RVA: 0x64C | Ordinal: 1613
        void boundingRect(void) const;

    // RVA: 0x6BB | Ordinal: 1724
        void changeEvent(class QEvent *);

    // RVA: 0x747 | Ordinal: 1864
        void close(void);

    // RVA: 0x751 | Ordinal: 1874
        void closeEvent(class QCloseEvent *);

    // RVA: 0x93F | Ordinal: 2368
        void d_func(void);

    // RVA: 0x940 | Ordinal: 2369
        void d_func(void) const;

    // RVA: 0xB45 | Ordinal: 2886
        void event(class QEvent *);

    // RVA: 0xC0A | Ordinal: 3083
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC1D | Ordinal: 3102
        void focusNextPrevChild(bool);

    // RVA: 0xC31 | Ordinal: 3122
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xC3B | Ordinal: 3132
        void focusPolicy(void) const;

    // RVA: 0xC43 | Ordinal: 3140
        void focusWidget(void) const;

    // RVA: 0xC4E | Ordinal: 3151
        void font(void) const;

    // RVA: 0xC84 | Ordinal: 3205
        void geometryChanged(void);

    // RVA: 0xC91 | Ordinal: 3218
        void getContentsMargins(double *, double *, double *, double *) const;

    // RVA: 0xCB4 | Ordinal: 3253
        void getWindowFrameMargins(double *, double *, double *, double *) const;

    // RVA: 0xCBF | Ordinal: 3264
        void grabKeyboardEvent(class QEvent *);

    // RVA: 0xCC4 | Ordinal: 3269
        void grabMouseEvent(class QEvent *);

    // RVA: 0xCC5 | Ordinal: 3270
        void grabShortcut(class QKeySequence const &, enum Qt::ShortcutContext);

    // RVA: 0xD2C | Ordinal: 3373
        void hideEvent(class QHideEvent *);

    // RVA: 0xD79 | Ordinal: 3450
        void hoverLeaveEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xD7D | Ordinal: 3454
        void hoverMoveEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xDEA | Ordinal: 3563
        void initStyleOption(class QStyleOption *) const;

    // RVA: 0xE2F | Ordinal: 3632
        void insertAction(class QAction *, class QAction *);

    // RVA: 0xE31 | Ordinal: 3634
        void insertActions(class QAction *, class QList<class QAction *>);

    // RVA: 0xEA6 | Ordinal: 3751
        void isActiveWindow(void) const;

    // RVA: 0xF9D | Ordinal: 3998
        void itemChange(enum QGraphicsItem::GraphicsItemChange, class QVariant const &);

    // RVA: 0x103C | Ordinal: 4157
        void layout(void) const;

    // RVA: 0x1042 | Ordinal: 4163
        void layoutChanged(void);

    // RVA: 0x1045 | Ordinal: 4166
        void layoutDirection(void) const;

    // RVA: 0x1147 | Ordinal: 4424
        void metaObject(void) const;

    // RVA: 0x1280 | Ordinal: 4737
        void moveEvent(class QGraphicsSceneMoveEvent *);

    // RVA: 0x1319 | Ordinal: 4890
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x1350 | Ordinal: 4945
        void paintWindowFrame(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x1355 | Ordinal: 4950
        void palette(void) const;

    // RVA: 0x13AB | Ordinal: 5036
        void polishEvent(void);

    // RVA: 0x13E0 | Ordinal: 5089
        void propertyChange(class QString const &, class QVariant const &);

    // RVA: 0x1460 | Ordinal: 5217
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14F3 | Ordinal: 5364
        void qt_metacast(char const *);

    // RVA: 0x1589 | Ordinal: 5514
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15F5 | Ordinal: 5622
        void rect(void) const;

    // RVA: 0x161D | Ordinal: 5662
        void releaseShortcut(int);

    // RVA: 0x1626 | Ordinal: 5671
        void removeAction(class QAction *);

    // RVA: 0x1688 | Ordinal: 5769
        void resize(class QSizeF const &);

    // RVA: 0x1689 | Ordinal: 5770
        void resize(double, double);

    // RVA: 0x16A1 | Ordinal: 5794
        void resizeEvent(class QGraphicsSceneResizeEvent *);

    // RVA: 0x172F | Ordinal: 5936
        void sceneEvent(class QEvent *);

    // RVA: 0x1817 | Ordinal: 6168
        void setAttribute(enum Qt::WidgetAttribute, bool);

    // RVA: 0x181F | Ordinal: 6176
        void setAutoFillBackground(bool);

    // RVA: 0x18A1 | Ordinal: 6306
        void setContentsMargins(double, double, double, double);

    // RVA: 0x18A2 | Ordinal: 6307
        void setContentsMargins(class QMarginsF);

    // RVA: 0x1991 | Ordinal: 6546
        void setFocusPolicy(enum Qt::FocusPolicy);

    // RVA: 0x199E | Ordinal: 6559
        void setFont(class QFont const &);

    // RVA: 0x19C6 | Ordinal: 6599
        void setGeometry(double, double, double, double);

    // RVA: 0x19C7 | Ordinal: 6600
        void setGeometry(class QRectF const &);

    // RVA: 0x1A69 | Ordinal: 6762
        void setLayout(class QGraphicsLayout *);

    // RVA: 0x1A6B | Ordinal: 6764
        void setLayoutDirection(enum Qt::LayoutDirection);

    // RVA: 0x1B38 | Ordinal: 6969
        void setPalette(class QPalette const &);

    // RVA: 0x1BFC | Ordinal: 7165
        void setShortcutAutoRepeat(int, bool);

    // RVA: 0x1C00 | Ordinal: 7169
        void setShortcutEnabled(int, bool);

    // RVA: 0x1C5F | Ordinal: 7264
        void setStyle(class QStyle *);

    // RVA: 0x1C7B | Ordinal: 7292
        void setTabOrder(class QGraphicsWidget *, class QGraphicsWidget *);

    // RVA: 0x1D41 | Ordinal: 7490
        void setWindowFlags(class QFlags<enum Qt::WindowType>);

    // RVA: 0x1D44 | Ordinal: 7493
        void setWindowFrameMargins(double, double, double, double);

    // RVA: 0x1D45 | Ordinal: 7494
        void setWindowFrameMargins(class QMarginsF);

    // RVA: 0x1D55 | Ordinal: 7510
        void setWindowTitle(class QString const &);

    // RVA: 0x1D7D | Ordinal: 7550
        void shape(void) const;

    // RVA: 0x1D9C | Ordinal: 7581
        void showEvent(class QShowEvent *);

    // RVA: 0x1DD7 | Ordinal: 7640
        void size(void) const;

    // RVA: 0x1DF7 | Ordinal: 7672
        void sizeHint(enum Qt::SizeHint, class QSizeF const &) const;

    // RVA: 0x1F43 | Ordinal: 8004
        void style(void) const;

    // RVA: 0x1FC5 | Ordinal: 8134
        void testAttribute(enum Qt::WidgetAttribute) const;

    // RVA: 0x20AF | Ordinal: 8368
        void tr(char const *, char const *, int);

    // RVA: 0x2142 | Ordinal: 8515
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21C6 | Ordinal: 8647
        void type(void) const;

    // RVA: 0x21E1 | Ordinal: 8674
        void ungrabKeyboardEvent(class QEvent *);

    // RVA: 0x21E4 | Ordinal: 8677
        void ungrabMouseEvent(class QEvent *);

    // RVA: 0x21FB | Ordinal: 8700
        void unsetLayoutDirection(void);

    // RVA: 0x21FF | Ordinal: 8704
        void unsetWindowFrameMargins(void);

    // RVA: 0x2230 | Ordinal: 8753
        void updateGeometry(void);

    // RVA: 0x231A | Ordinal: 8987
        void windowFlags(void) const;

    // RVA: 0x231D | Ordinal: 8990
        void windowFrameEvent(class QEvent *);

    // RVA: 0x231E | Ordinal: 8991
        void windowFrameGeometry(void) const;

    // RVA: 0x231F | Ordinal: 8992
        void windowFrameRect(void) const;

    // RVA: 0x2320 | Ordinal: 8993
        void windowFrameSectionAt(class QPointF const &) const;

    // RVA: 0x232D | Ordinal: 9006
        void windowTitle(void) const;

    // RVA: 0x2330 | Ordinal: 9009
        void windowType(void) const;

    // RVA: 0x214 | Ordinal: 533
        void _QGraphicsWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSWIDGET_HPP
