#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsScene
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsScene
{
public:

    // RVA: 0x8E | Ordinal: 143
        void QGraphicsScene(class QRectF const &, class QObject *);

    // RVA: 0x8F | Ordinal: 144
        void QGraphicsScene(double, double, double, double, class QObject *);

    // RVA: 0x90 | Ordinal: 145
        void QGraphicsScene(class QObject *);

    // RVA: 0x522 | Ordinal: 1315
        void activePanel(void) const;

    // RVA: 0x529 | Ordinal: 1322
        void activeWindow(void) const;

    // RVA: 0x555 | Ordinal: 1366
        void addEllipse(class QRectF const &, class QPen const &, class QBrush const &);

    // RVA: 0x556 | Ordinal: 1367
        void addEllipse(double, double, double, double, class QPen const &, class QBrush const &);

    // RVA: 0x55F | Ordinal: 1376
        void addItem(class QGraphicsItem *);

    // RVA: 0x56C | Ordinal: 1389
        void addLine(class QLineF const &, class QPen const &);

    // RVA: 0x56D | Ordinal: 1390
        void addLine(double, double, double, double, class QPen const &);

    // RVA: 0x577 | Ordinal: 1400
        void addPath(class QPainterPath const &, class QPen const &, class QBrush const &);

    // RVA: 0x579 | Ordinal: 1402
        void addPixmap(class QPixmap const &);

    // RVA: 0x57B | Ordinal: 1404
        void addPolygon(class QPolygonF const &, class QPen const &, class QBrush const &);

    // RVA: 0x57C | Ordinal: 1405
        void addRect(class QRectF const &, class QPen const &, class QBrush const &);

    // RVA: 0x57D | Ordinal: 1406
        void addRect(double, double, double, double, class QPen const &, class QBrush const &);

    // RVA: 0x58A | Ordinal: 1419
        void addSimpleText(class QString const &, class QFont const &);

    // RVA: 0x596 | Ordinal: 1431
        void addText(class QString const &, class QFont const &);

    // RVA: 0x5A0 | Ordinal: 1441
        void addWidget(class QWidget *, class QFlags<enum Qt::WindowType>);

    // RVA: 0x5B5 | Ordinal: 1462
        void advance(void);

    // RVA: 0x612 | Ordinal: 1555
        void backgroundBrush(void) const;

    // RVA: 0x657 | Ordinal: 1624
        void bspTreeDepth(void) const;

    // RVA: 0x6D1 | Ordinal: 1746
        void changed(class QList<class QRectF> const &);

    // RVA: 0x710 | Ordinal: 1809
        void clear(void);

    // RVA: 0x723 | Ordinal: 1828
        void clearFocus(void);

    // RVA: 0x734 | Ordinal: 1845
        void clearSelection(void);

    // RVA: 0x767 | Ordinal: 1896
        void collidingItems(class QGraphicsItem const *, enum Qt::ItemSelectionMode) const;

    // RVA: 0x7CD | Ordinal: 1998
        void contextMenuEvent(class QGraphicsSceneContextMenuEvent *);

    // RVA: 0x80C | Ordinal: 2061
        void createItemGroup(class QList<class QGraphicsItem *> const &);

    // RVA: 0x925 | Ordinal: 2342
        void d_func(void);

    // RVA: 0x926 | Ordinal: 2343
        void d_func(void) const;

    // RVA: 0xA12 | Ordinal: 2579
        void destroyItemGroup(class QGraphicsItemGroup *);

    // RVA: 0xA69 | Ordinal: 2666
        void dragEnterEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA74 | Ordinal: 2677
        void dragLeaveEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA81 | Ordinal: 2690
        void dragMoveEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA97 | Ordinal: 2712
        void drawBackground(class QPainter *, class QRectF const &);

    // RVA: 0xAB1 | Ordinal: 2738
        void drawForeground(class QPainter *, class QRectF const &);

    // RVA: 0xABA | Ordinal: 2747
        void drawItems(class QPainter *, int, class QGraphicsItem **const, class QStyleOptionGraphicsItem const *const, class QWidget *);

    // RVA: 0xAD4 | Ordinal: 2773
        void dropEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xB43 | Ordinal: 2884
        void event(class QEvent *);

    // RVA: 0xB7E | Ordinal: 2943
        void eventFilter(class QObject *, class QEvent *);

    // RVA: 0xC07 | Ordinal: 3080
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC15 | Ordinal: 3094
        void focusItem(void) const;

    // RVA: 0xC16 | Ordinal: 3095
        void focusItemChanged(class QGraphicsItem *, class QGraphicsItem *, enum Qt::FocusReason);

    // RVA: 0xC1B | Ordinal: 3100
        void focusNextPrevChild(bool);

    // RVA: 0xC27 | Ordinal: 3112
        void focusOnTouch(void) const;

    // RVA: 0xC2E | Ordinal: 3119
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xC4B | Ordinal: 3148
        void font(void) const;

    // RVA: 0xC62 | Ordinal: 3171
        void foregroundBrush(void) const;

    // RVA: 0xCE3 | Ordinal: 3300
        void hasFocus(void) const;

    // RVA: 0xD06 | Ordinal: 3335
        void height(void) const;

    // RVA: 0xD17 | Ordinal: 3352
        void helpEvent(class QGraphicsSceneHelpEvent *);

    // RVA: 0xE10 | Ordinal: 3601
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE1F | Ordinal: 3616
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE8A | Ordinal: 3723
        void invalidate(class QRectF const &, class QFlags<enum QGraphicsScene::SceneLayer>);

    // RVA: 0xE8B | Ordinal: 3724
        void invalidate(double, double, double, double, class QFlags<enum QGraphicsScene::SceneLayer>);

    // RVA: 0xEA2 | Ordinal: 3747
        void isActive(void) const;

    // RVA: 0xF4C | Ordinal: 3917
        void isSortCacheEnabled(void) const;

    // RVA: 0xF8A | Ordinal: 3979
        void itemAt(class QPointF const &) const;

    // RVA: 0xF8B | Ordinal: 3980
        void itemAt(class QPointF const &, class QTransform const &) const;

    // RVA: 0xF8C | Ordinal: 3981
        void itemAt(double, double) const;

    // RVA: 0xF8D | Ordinal: 3982
        void itemAt(double, double, class QTransform const &) const;

    // RVA: 0xFC2 | Ordinal: 4035
        void itemIndexMethod(void) const;

    // RVA: 0xFDD | Ordinal: 4062
        void items(class QPainterPath const &, enum Qt::ItemSelectionMode, enum Qt::SortOrder, class QTransform const &) const;

    // RVA: 0xFDE | Ordinal: 4063
        void items(class QPointF const &, enum Qt::ItemSelectionMode, enum Qt::SortOrder, class QTransform const &) const;

    // RVA: 0xFDF | Ordinal: 4064
        void items(class QPolygonF const &, enum Qt::ItemSelectionMode, enum Qt::SortOrder, class QTransform const &) const;

    // RVA: 0xFE0 | Ordinal: 4065
        void items(class QRectF const &, enum Qt::ItemSelectionMode, enum Qt::SortOrder, class QTransform const &) const;

    // RVA: 0xFE1 | Ordinal: 4066
        void items(double, double, double, double, enum Qt::ItemSelectionMode) const;

    // RVA: 0xFE2 | Ordinal: 4067
        void items(double, double, double, double, enum Qt::ItemSelectionMode, enum Qt::SortOrder, class QTransform const &) const;

    // RVA: 0xFE3 | Ordinal: 4068
        void items(enum Qt::SortOrder) const;

    // RVA: 0xFEE | Ordinal: 4079
        void itemsBoundingRect(void) const;

    // RVA: 0xFFE | Ordinal: 4095
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1016 | Ordinal: 4119
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x1143 | Ordinal: 4420
        void metaObject(void) const;

    // RVA: 0x11BE | Ordinal: 4543
        void minimumRenderSize(void) const;

    // RVA: 0x1204 | Ordinal: 4613
        void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x120F | Ordinal: 4624
        void mouseGrabberItem(void) const;

    // RVA: 0x1218 | Ordinal: 4633
        void mouseMoveEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x123B | Ordinal: 4668
        void mousePressEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x125A | Ordinal: 4699
        void mouseReleaseEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x1354 | Ordinal: 4949
        void palette(void) const;

    // RVA: 0x145C | Ordinal: 5213
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14EF | Ordinal: 5360
        void qt_metacast(char const *);

    // RVA: 0x1585 | Ordinal: 5510
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x163A | Ordinal: 5691
        void removeItem(class QGraphicsItem *);

    // RVA: 0x1652 | Ordinal: 5715
        void render(class QPainter *, class QRectF const &, class QRectF const &, enum Qt::AspectRatioMode);

    // RVA: 0x1739 | Ordinal: 5946
        void sceneRect(void) const;

    // RVA: 0x173B | Ordinal: 5948
        void sceneRectChanged(class QRectF const &);

    // RVA: 0x17B0 | Ordinal: 6065
        void selectedItems(void) const;

    // RVA: 0x17BE | Ordinal: 6079
        void selectionArea(void) const;

    // RVA: 0x17C3 | Ordinal: 6084
        void selectionChanged(void);

    // RVA: 0x17DB | Ordinal: 6108
        void sendEvent(class QGraphicsItem *, class QEvent *);

    // RVA: 0x17FD | Ordinal: 6142
        void setActivePanel(class QGraphicsItem *);

    // RVA: 0x1801 | Ordinal: 6146
        void setActiveWindow(class QGraphicsWidget *);

    // RVA: 0x1833 | Ordinal: 6196
        void setBackgroundBrush(class QBrush const &);

    // RVA: 0x1849 | Ordinal: 6218
        void setBspTreeDepth(int);

    // RVA: 0x198A | Ordinal: 6539
        void setFocus(enum Qt::FocusReason);

    // RVA: 0x198F | Ordinal: 6544
        void setFocusItem(class QGraphicsItem *, enum Qt::FocusReason);

    // RVA: 0x1990 | Ordinal: 6545
        void setFocusOnTouch(bool);

    // RVA: 0x199B | Ordinal: 6556
        void setFont(class QFont const &);

    // RVA: 0x19AF | Ordinal: 6576
        void setForegroundBrush(class QBrush const &);

    // RVA: 0x1A43 | Ordinal: 6724
        void setItemIndexMethod(enum QGraphicsScene::ItemIndexMethod);

    // RVA: 0x1AB6 | Ordinal: 6839
        void setMinimumRenderSize(double);

    // RVA: 0x1B37 | Ordinal: 6968
        void setPalette(class QPalette const &);

    // RVA: 0x1BC2 | Ordinal: 7107
        void setSceneRect(class QRectF const &);

    // RVA: 0x1BC3 | Ordinal: 7108
        void setSceneRect(double, double, double, double);

    // RVA: 0x1BE6 | Ordinal: 7143
        void setSelectionArea(class QPainterPath const &, class QTransform const &);

    // RVA: 0x1BE7 | Ordinal: 7144
        void setSelectionArea(class QPainterPath const &, enum Qt::ItemSelectionMode, class QTransform const &);

    // RVA: 0x1BE8 | Ordinal: 7145
        void setSelectionArea(class QPainterPath const &, enum Qt::ItemSelectionOperation, enum Qt::ItemSelectionMode, class QTransform const &);

    // RVA: 0x1C23 | Ordinal: 7204
        void setSortCacheEnabled(bool);

    // RVA: 0x1C53 | Ordinal: 7252
        void setStickyFocus(bool);

    // RVA: 0x1C5E | Ordinal: 7263
        void setStyle(class QStyle *);

    // RVA: 0x1F32 | Ordinal: 7987
        void stickyFocus(void) const;

    // RVA: 0x1F42 | Ordinal: 8003
        void style(void) const;

    // RVA: 0x20AB | Ordinal: 8364
        void tr(char const *, char const *, int);

    // RVA: 0x213E | Ordinal: 8511
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2205 | Ordinal: 8710
        void update(class QRectF const &);

    // RVA: 0x2206 | Ordinal: 8711
        void update(double, double, double, double);

    // RVA: 0x22B3 | Ordinal: 8884
        void views(void) const;

    // RVA: 0x22E6 | Ordinal: 8935
        void wheelEvent(class QGraphicsSceneWheelEvent *);

    // RVA: 0x2310 | Ordinal: 8977
        void width(void) const;

    // RVA: 0x204 | Ordinal: 517
        void _QGraphicsScene(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSSCENE_HPP
