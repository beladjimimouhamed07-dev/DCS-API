#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsItem
{
public:

    // RVA: 0x70 | Ordinal: 113
        void QGraphicsItem(class QGraphicsItemPrivate &, class QGraphicsItem *);

    // RVA: 0x71 | Ordinal: 114
        void QGraphicsItem(class QGraphicsItem *);

    // RVA: 0x4E3 | Ordinal: 1252
        void acceptDrops(void) const;

    // RVA: 0x4E5 | Ordinal: 1254
        void acceptHoverEvents(void) const;

    // RVA: 0x4EA | Ordinal: 1259
        void acceptTouchEvents(void) const;

    // RVA: 0x4EE | Ordinal: 1263
        void acceptedMouseButtons(void) const;

    // RVA: 0x4EF | Ordinal: 1264
        void acceptsHoverEvents(void) const;

    // RVA: 0x598 | Ordinal: 1433
        void addToIndex(void);

    // RVA: 0x5B4 | Ordinal: 1461
        void advance(int);

    // RVA: 0x654 | Ordinal: 1621
        void boundingRegion(class QTransform const &) const;

    // RVA: 0x655 | Ordinal: 1622
        void boundingRegionGranularity(void) const;

    // RVA: 0x677 | Ordinal: 1656
        void cacheMode(void) const;

    // RVA: 0x6F0 | Ordinal: 1777
        void childItems(void) const;

    // RVA: 0x6F1 | Ordinal: 1778
        void children(void) const;

    // RVA: 0x6F2 | Ordinal: 1779
        void childrenBoundingRect(void) const;

    // RVA: 0x722 | Ordinal: 1827
        void clearFocus(void);

    // RVA: 0x740 | Ordinal: 1857
        void clipPath(void) const;

    // RVA: 0x764 | Ordinal: 1893
        void collidesWithItem(class QGraphicsItem const *, enum Qt::ItemSelectionMode) const;

    // RVA: 0x765 | Ordinal: 1894
        void collidesWithPath(class QPainterPath const &, enum Qt::ItemSelectionMode) const;

    // RVA: 0x766 | Ordinal: 1895
        void collidingItems(enum Qt::ItemSelectionMode) const;

    // RVA: 0x7A2 | Ordinal: 1955
        void commonAncestorItem(class QGraphicsItem const *) const;

    // RVA: 0x7B4 | Ordinal: 1973
        void contains(class QPointF const &) const;

    // RVA: 0x7CB | Ordinal: 1996
        void contextMenuEvent(class QGraphicsSceneContextMenuEvent *);

    // RVA: 0x874 | Ordinal: 2165
        void cursor(void) const;

    // RVA: 0x909 | Ordinal: 2314
        void d_func(void);

    // RVA: 0x90A | Ordinal: 2315
        void d_func(void) const;

    // RVA: 0x9E0 | Ordinal: 2529
        void data(int) const;

    // RVA: 0xA16 | Ordinal: 2583
        void deviceTransform(class QTransform const &) const;

    // RVA: 0xA67 | Ordinal: 2664
        void dragEnterEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA72 | Ordinal: 2675
        void dragLeaveEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xA7F | Ordinal: 2688
        void dragMoveEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xAD2 | Ordinal: 2771
        void dropEvent(class QGraphicsSceneDragDropEvent *);

    // RVA: 0xAFC | Ordinal: 2813
        void effectiveOpacity(void) const;

    // RVA: 0xB1E | Ordinal: 2847
        void ensureVisible(class QRectF const &, int, int);

    // RVA: 0xB1F | Ordinal: 2848
        void ensureVisible(double, double, double, double, int, int);

    // RVA: 0xBA8 | Ordinal: 2985
        void extension(class QVariant const &) const;

    // RVA: 0xBCF | Ordinal: 3024
        void filtersChildEvents(void) const;

    // RVA: 0xBF7 | Ordinal: 3064
        void flags(void) const;

    // RVA: 0xC05 | Ordinal: 3078
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC14 | Ordinal: 3093
        void focusItem(void) const;

    // RVA: 0xC2C | Ordinal: 3117
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xC3E | Ordinal: 3135
        void focusProxy(void) const;

    // RVA: 0xC40 | Ordinal: 3137
        void focusScopeItem(void) const;

    // RVA: 0xCBD | Ordinal: 3262
        void grabKeyboard(void);

    // RVA: 0xCC0 | Ordinal: 3265
        void grabMouse(void);

    // RVA: 0xCC8 | Ordinal: 3273
        void graphicsEffect(void) const;

    // RVA: 0xCD0 | Ordinal: 3281
        void group(void) const;

    // RVA: 0xCD7 | Ordinal: 3288
        void handlesChildEvents(void) const;

    // RVA: 0xCE1 | Ordinal: 3298
        void hasCursor(void) const;

    // RVA: 0xCE2 | Ordinal: 3299
        void hasFocus(void) const;

    // RVA: 0xD21 | Ordinal: 3362
        void hide(void);

    // RVA: 0xD73 | Ordinal: 3444
        void hoverEnterEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xD76 | Ordinal: 3447
        void hoverLeaveEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xD7A | Ordinal: 3451
        void hoverMoveEvent(class QGraphicsSceneHoverEvent *);

    // RVA: 0xE0E | Ordinal: 3599
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE17 | Ordinal: 3608
        void inputMethodHints(void) const;

    // RVA: 0xE1D | Ordinal: 3614
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE6E | Ordinal: 3695
        void installSceneEventFilter(class QGraphicsItem *);

    // RVA: 0xEA1 | Ordinal: 3746
        void isActive(void) const;

    // RVA: 0xEA9 | Ordinal: 3754
        void isAncestorOf(class QGraphicsItem const *) const;

    // RVA: 0xEB2 | Ordinal: 3763
        void isBlockedByModalPanel(class QGraphicsItem **) const;

    // RVA: 0xEBE | Ordinal: 3775
        void isClipped(void) const;

    // RVA: 0xED9 | Ordinal: 3802
        void isEnabled(void) const;

    // RVA: 0xF17 | Ordinal: 3864
        void isObscured(class QRectF const &) const;

    // RVA: 0xF18 | Ordinal: 3865
        void isObscured(double, double, double, double) const;

    // RVA: 0xF1B | Ordinal: 3868
        void isObscuredBy(class QGraphicsItem const *) const;

    // RVA: 0xF27 | Ordinal: 3880
        void isPanel(void) const;

    // RVA: 0xF40 | Ordinal: 3905
        void isSelected(void) const;

    // RVA: 0xF5E | Ordinal: 3935
        void isUnderMouse(void) const;

    // RVA: 0xF6D | Ordinal: 3950
        void isVisible(void) const;

    // RVA: 0xF71 | Ordinal: 3954
        void isVisibleTo(class QGraphicsItem const *) const;

    // RVA: 0xF73 | Ordinal: 3956
        void isWidget(void) const;

    // RVA: 0xF74 | Ordinal: 3957
        void isWindow(void) const;

    // RVA: 0xF9B | Ordinal: 3996
        void itemChange(enum QGraphicsItem::GraphicsItemChange, class QVariant const &);

    // RVA: 0xFD7 | Ordinal: 4056
        void itemTransform(class QGraphicsItem const *, bool *) const;

    // RVA: 0xFFC | Ordinal: 4093
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1014 | Ordinal: 4117
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x107C | Ordinal: 4221
        void mapFromItem(class QGraphicsItem const *, class QPainterPath const &) const;

    // RVA: 0x107D | Ordinal: 4222
        void mapFromItem(class QGraphicsItem const *, class QPointF const &) const;

    // RVA: 0x107E | Ordinal: 4223
        void mapFromItem(class QGraphicsItem const *, double, double) const;

    // RVA: 0x107F | Ordinal: 4224
        void mapFromItem(class QGraphicsItem const *, class QPolygonF const &) const;

    // RVA: 0x1080 | Ordinal: 4225
        void mapFromItem(class QGraphicsItem const *, class QRectF const &) const;

    // RVA: 0x1081 | Ordinal: 4226
        void mapFromItem(class QGraphicsItem const *, double, double, double, double) const;

    // RVA: 0x1082 | Ordinal: 4227
        void mapFromParent(class QPainterPath const &) const;

    // RVA: 0x1083 | Ordinal: 4228
        void mapFromParent(class QPointF const &) const;

    // RVA: 0x1084 | Ordinal: 4229
        void mapFromParent(double, double) const;

    // RVA: 0x1085 | Ordinal: 4230
        void mapFromParent(class QPolygonF const &) const;

    // RVA: 0x1086 | Ordinal: 4231
        void mapFromParent(class QRectF const &) const;

    // RVA: 0x1087 | Ordinal: 4232
        void mapFromParent(double, double, double, double) const;

    // RVA: 0x1089 | Ordinal: 4234
        void mapFromScene(class QPainterPath const &) const;

    // RVA: 0x108A | Ordinal: 4235
        void mapFromScene(class QPointF const &) const;

    // RVA: 0x108B | Ordinal: 4236
        void mapFromScene(double, double) const;

    // RVA: 0x108C | Ordinal: 4237
        void mapFromScene(class QPolygonF const &) const;

    // RVA: 0x108D | Ordinal: 4238
        void mapFromScene(class QRectF const &) const;

    // RVA: 0x108E | Ordinal: 4239
        void mapFromScene(double, double, double, double) const;

    // RVA: 0x1098 | Ordinal: 4249
        void mapRectFromItem(class QGraphicsItem const *, class QRectF const &) const;

    // RVA: 0x1099 | Ordinal: 4250
        void mapRectFromItem(class QGraphicsItem const *, double, double, double, double) const;

    // RVA: 0x109A | Ordinal: 4251
        void mapRectFromParent(class QRectF const &) const;

    // RVA: 0x109B | Ordinal: 4252
        void mapRectFromParent(double, double, double, double) const;

    // RVA: 0x109C | Ordinal: 4253
        void mapRectFromScene(class QRectF const &) const;

    // RVA: 0x109D | Ordinal: 4254
        void mapRectFromScene(double, double, double, double) const;

    // RVA: 0x109F | Ordinal: 4256
        void mapRectToItem(class QGraphicsItem const *, class QRectF const &) const;

    // RVA: 0x10A0 | Ordinal: 4257
        void mapRectToItem(class QGraphicsItem const *, double, double, double, double) const;

    // RVA: 0x10A1 | Ordinal: 4258
        void mapRectToParent(class QRectF const &) const;

    // RVA: 0x10A2 | Ordinal: 4259
        void mapRectToParent(double, double, double, double) const;

    // RVA: 0x10A3 | Ordinal: 4260
        void mapRectToScene(class QRectF const &) const;

    // RVA: 0x10A4 | Ordinal: 4261
        void mapRectToScene(double, double, double, double) const;

    // RVA: 0x10A9 | Ordinal: 4266
        void mapToItem(class QGraphicsItem const *, class QPainterPath const &) const;

    // RVA: 0x10AA | Ordinal: 4267
        void mapToItem(class QGraphicsItem const *, class QPointF const &) const;

    // RVA: 0x10AB | Ordinal: 4268
        void mapToItem(class QGraphicsItem const *, double, double) const;

    // RVA: 0x10AC | Ordinal: 4269
        void mapToItem(class QGraphicsItem const *, class QPolygonF const &) const;

    // RVA: 0x10AD | Ordinal: 4270
        void mapToItem(class QGraphicsItem const *, class QRectF const &) const;

    // RVA: 0x10AE | Ordinal: 4271
        void mapToItem(class QGraphicsItem const *, double, double, double, double) const;

    // RVA: 0x10AF | Ordinal: 4272
        void mapToParent(class QPainterPath const &) const;

    // RVA: 0x10B0 | Ordinal: 4273
        void mapToParent(class QPointF const &) const;

    // RVA: 0x10B1 | Ordinal: 4274
        void mapToParent(double, double) const;

    // RVA: 0x10B2 | Ordinal: 4275
        void mapToParent(class QPolygonF const &) const;

    // RVA: 0x10B3 | Ordinal: 4276
        void mapToParent(class QRectF const &) const;

    // RVA: 0x10B4 | Ordinal: 4277
        void mapToParent(double, double, double, double) const;

    // RVA: 0x10B6 | Ordinal: 4279
        void mapToScene(class QPainterPath const &) const;

    // RVA: 0x10B7 | Ordinal: 4280
        void mapToScene(class QPointF const &) const;

    // RVA: 0x10B8 | Ordinal: 4281
        void mapToScene(double, double) const;

    // RVA: 0x10B9 | Ordinal: 4282
        void mapToScene(class QPolygonF const &) const;

    // RVA: 0x10BA | Ordinal: 4283
        void mapToScene(class QRectF const &) const;

    // RVA: 0x10BB | Ordinal: 4284
        void mapToScene(double, double, double, double) const;

    // RVA: 0x10D3 | Ordinal: 4308
        void matrix(void) const;

    // RVA: 0x1202 | Ordinal: 4611
        void mouseDoubleClickEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x1216 | Ordinal: 4631
        void mouseMoveEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x1239 | Ordinal: 4666
        void mousePressEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x1258 | Ordinal: 4697
        void mouseReleaseEvent(class QGraphicsSceneMouseEvent *);

    // RVA: 0x1276 | Ordinal: 4727
        void moveBy(double, double);

    // RVA: 0x12C2 | Ordinal: 4803
        void opacity(void) const;

    // RVA: 0x12CA | Ordinal: 4811
        void opaqueArea(void) const;

    // RVA: 0x135A | Ordinal: 4955
        void panel(void) const;

    // RVA: 0x135B | Ordinal: 4956
        void panelModality(void) const;

    // RVA: 0x1361 | Ordinal: 4962
        void parentItem(void) const;

    // RVA: 0x1364 | Ordinal: 4965
        void parentObject(void) const;

    // RVA: 0x136A | Ordinal: 4971
        void parentWidget(void) const;

    // RVA: 0x13B3 | Ordinal: 5044
        void pos(void) const;

    // RVA: 0x13C7 | Ordinal: 5064
        void prepareGeometryChange(void);

    // RVA: 0x1636 | Ordinal: 5687
        void removeFromIndex(void);

    // RVA: 0x1645 | Ordinal: 5702
        void removeSceneEventFilter(class QGraphicsItem *);

    // RVA: 0x1680 | Ordinal: 5761
        void resetMatrix(void);

    // RVA: 0x1684 | Ordinal: 5765
        void resetTransform(void);

    // RVA: 0x16E9 | Ordinal: 5866
        void rotate(double);

    // RVA: 0x16EB | Ordinal: 5868
        void rotation(void) const;

    // RVA: 0x1722 | Ordinal: 5923
        void scale(double, double);

    // RVA: 0x1723 | Ordinal: 5924
        void scale(void) const;

    // RVA: 0x1729 | Ordinal: 5930
        void scene(void) const;

    // RVA: 0x172B | Ordinal: 5932
        void sceneBoundingRect(void) const;

    // RVA: 0x172D | Ordinal: 5934
        void sceneEvent(class QEvent *);

    // RVA: 0x1730 | Ordinal: 5937
        void sceneEventFilter(class QGraphicsItem *, class QEvent *);

    // RVA: 0x1731 | Ordinal: 5938
        void sceneMatrix(void) const;

    // RVA: 0x1732 | Ordinal: 5939
        void scenePos(void) const;

    // RVA: 0x173C | Ordinal: 5949
        void sceneTransform(void) const;

    // RVA: 0x174E | Ordinal: 5967
        void scroll(double, double, class QRectF const &);

    // RVA: 0x17E5 | Ordinal: 6118
        void setAcceptDrops(bool);

    // RVA: 0x17E7 | Ordinal: 6120
        void setAcceptHoverEvents(bool);

    // RVA: 0x17EB | Ordinal: 6124
        void setAcceptTouchEvents(bool);

    // RVA: 0x17EE | Ordinal: 6127
        void setAcceptedMouseButtons(class QFlags<enum Qt::MouseButton>);

    // RVA: 0x17EF | Ordinal: 6128
        void setAcceptsHoverEvents(bool);

    // RVA: 0x17F6 | Ordinal: 6135
        void setActive(bool);

    // RVA: 0x1847 | Ordinal: 6216
        void setBoundingRegionGranularity(double);

    // RVA: 0x1859 | Ordinal: 6234
        void setCacheMode(enum QGraphicsItem::CacheMode, class QSize const &);

    // RVA: 0x18D7 | Ordinal: 6360
        void setCursor(class QCursor const &);

    // RVA: 0x18E9 | Ordinal: 6378
        void setData(int, class QVariant const &);

    // RVA: 0x1948 | Ordinal: 6473
        void setEnabled(bool);

    // RVA: 0x195B | Ordinal: 6492
        void setExtension(enum QGraphicsItem::Extension, class QVariant const &);

    // RVA: 0x1973 | Ordinal: 6516
        void setFiltersChildEvents(bool);

    // RVA: 0x197E | Ordinal: 6527
        void setFlag(enum QGraphicsItem::GraphicsItemFlag, bool);

    // RVA: 0x197F | Ordinal: 6528
        void setFlags(class QFlags<enum QGraphicsItem::GraphicsItemFlag>);

    // RVA: 0x1989 | Ordinal: 6538
        void setFocus(enum Qt::FocusReason);

    // RVA: 0x1993 | Ordinal: 6548
        void setFocusProxy(class QGraphicsItem *);

    // RVA: 0x19D4 | Ordinal: 6613
        void setGraphicsEffect(class QGraphicsEffect *);

    // RVA: 0x19DC | Ordinal: 6621
        void setGroup(class QGraphicsItemGroup *);

    // RVA: 0x19E0 | Ordinal: 6625
        void setHandlesChildEvents(bool);

    // RVA: 0x1A20 | Ordinal: 6689
        void setInputMethodHints(class QFlags<enum Qt::InputMethodHint>);

    // RVA: 0x1A85 | Ordinal: 6790
        void setMatrix(class QMatrix const &, bool);

    // RVA: 0x1B07 | Ordinal: 6920
        void setOpacity(double);

    // RVA: 0x1B3E | Ordinal: 6975
        void setPanelModality(enum QGraphicsItem::PanelModality);

    // RVA: 0x1B41 | Ordinal: 6978
        void setParentItem(class QGraphicsItem *);

    // RVA: 0x1B5C | Ordinal: 7005
        void setPos(class QPointF const &);

    // RVA: 0x1B5D | Ordinal: 7006
        void setPos(double, double);

    // RVA: 0x1BA3 | Ordinal: 7076
        void setRotation(double);

    // RVA: 0x1BB7 | Ordinal: 7096
        void setScale(double);

    // RVA: 0x1BD8 | Ordinal: 7129
        void setSelected(bool);

    // RVA: 0x1CD2 | Ordinal: 7379
        void setToolTip(class QString const &);

    // RVA: 0x1CDE | Ordinal: 7391
        void setTransform(class QTransform const &, bool);

    // RVA: 0x1CE1 | Ordinal: 7394
        void setTransformOriginPoint(class QPointF const &);

    // RVA: 0x1CE2 | Ordinal: 7395
        void setTransformOriginPoint(double, double);

    // RVA: 0x1CE5 | Ordinal: 7398
        void setTransformations(class QList<class QGraphicsTransform *> const &);

    // RVA: 0x1D1B | Ordinal: 7452
        void setVisible(bool);

    // RVA: 0x1D67 | Ordinal: 7528
        void setX(double);

    // RVA: 0x1D6A | Ordinal: 7531
        void setY(double);

    // RVA: 0x1D6E | Ordinal: 7535
        void setZValue(double);

    // RVA: 0x1D75 | Ordinal: 7542
        void shape(void) const;

    // RVA: 0x1D84 | Ordinal: 7557
        void shear(double, double);

    // RVA: 0x1D8F | Ordinal: 7568
        void show(void);

    // RVA: 0x1E62 | Ordinal: 7779
        void stackBefore(class QGraphicsItem const *);

    // RVA: 0x1F6B | Ordinal: 8044
        void supportsExtension(enum QGraphicsItem::Extension) const;

    // RVA: 0x2038 | Ordinal: 8249
        void toGraphicsObject(void);

    // RVA: 0x2039 | Ordinal: 8250
        void toGraphicsObject(void) const;

    // RVA: 0x2057 | Ordinal: 8280
        void toolTip(void) const;

    // RVA: 0x2064 | Ordinal: 8293
        void topLevelItem(void) const;

    // RVA: 0x2067 | Ordinal: 8296
        void topLevelWidget(void) const;

    // RVA: 0x219A | Ordinal: 8603
        void transform(void) const;

    // RVA: 0x219E | Ordinal: 8607
        void transformOriginPoint(void) const;

    // RVA: 0x21A2 | Ordinal: 8611
        void transformations(void) const;

    // RVA: 0x21A4 | Ordinal: 8613
        void translate(double, double);

    // RVA: 0x21BC | Ordinal: 8637
        void type(void) const;

    // RVA: 0x21E0 | Ordinal: 8673
        void ungrabKeyboard(void);

    // RVA: 0x21E2 | Ordinal: 8675
        void ungrabMouse(void);

    // RVA: 0x21F5 | Ordinal: 8694
        void unsetCursor(void);

    // RVA: 0x2203 | Ordinal: 8708
        void update(class QRectF const &);

    // RVA: 0x2204 | Ordinal: 8709
        void update(double, double, double, double);

    // RVA: 0x223B | Ordinal: 8764
        void updateMicroFocus(void);

    // RVA: 0x22E4 | Ordinal: 8933
        void wheelEvent(class QGraphicsSceneWheelEvent *);

    // RVA: 0x2317 | Ordinal: 8984
        void window(void) const;

    // RVA: 0x2343 | Ordinal: 9028
        void x(void) const;

    // RVA: 0x234B | Ordinal: 9036
        void y(void) const;

    // RVA: 0x2356 | Ordinal: 9047
        void zValue(void) const;

    // RVA: 0x1F3 | Ordinal: 500
        void _QGraphicsItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSITEM_HPP
