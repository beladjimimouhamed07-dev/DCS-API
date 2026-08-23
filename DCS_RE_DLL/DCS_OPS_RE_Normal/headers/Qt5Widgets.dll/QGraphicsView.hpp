#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsView
{
public:

    // RVA: 0xA2 | Ordinal: 163
        void QGraphicsView(class QGraphicsViewPrivate &, class QWidget *);

    // RVA: 0xA3 | Ordinal: 164
        void QGraphicsView(class QGraphicsScene *, class QWidget *);

    // RVA: 0xA4 | Ordinal: 165
        void QGraphicsView(class QWidget *);

    // RVA: 0x5BD | Ordinal: 1470
        void alignment(void) const;

    // RVA: 0x613 | Ordinal: 1556
        void backgroundBrush(void) const;

    // RVA: 0x678 | Ordinal: 1657
        void cacheMode(void) const;

    // RVA: 0x6A7 | Ordinal: 1704
        void centerOn(class QPointF const &);

    // RVA: 0x6A8 | Ordinal: 1705
        void centerOn(double, double);

    // RVA: 0x6A9 | Ordinal: 1706
        void centerOn(class QGraphicsItem const *);

    // RVA: 0x7CF | Ordinal: 2000
        void contextMenuEvent(class QContextMenuEvent *);

    // RVA: 0x93D | Ordinal: 2366
        void d_func(void);

    // RVA: 0x93E | Ordinal: 2367
        void d_func(void) const;

    // RVA: 0xA6B | Ordinal: 2668
        void dragEnterEvent(class QDragEnterEvent *);

    // RVA: 0xA76 | Ordinal: 2679
        void dragLeaveEvent(class QDragLeaveEvent *);

    // RVA: 0xA7C | Ordinal: 2685
        void dragMode(void) const;

    // RVA: 0xA83 | Ordinal: 2692
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xA98 | Ordinal: 2713
        void drawBackground(class QPainter *, class QRectF const &);

    // RVA: 0xAB2 | Ordinal: 2739
        void drawForeground(class QPainter *, class QRectF const &);

    // RVA: 0xABB | Ordinal: 2748
        void drawItems(class QPainter *, int, class QGraphicsItem **const, class QStyleOptionGraphicsItem const *const);

    // RVA: 0xAD6 | Ordinal: 2775
        void dropEvent(class QDropEvent *);

    // RVA: 0xB20 | Ordinal: 2849
        void ensureVisible(class QRectF const &, int, int);

    // RVA: 0xB21 | Ordinal: 2850
        void ensureVisible(double, double, double, double, int, int);

    // RVA: 0xB22 | Ordinal: 2851
        void ensureVisible(class QGraphicsItem const *, int, int);

    // RVA: 0xB44 | Ordinal: 2885
        void event(class QEvent *);

    // RVA: 0xBEB | Ordinal: 3052
        void fitInView(class QRectF const &, enum Qt::AspectRatioMode);

    // RVA: 0xBEC | Ordinal: 3053
        void fitInView(double, double, double, double, enum Qt::AspectRatioMode);

    // RVA: 0xBED | Ordinal: 3054
        void fitInView(class QGraphicsItem const *, enum Qt::AspectRatioMode);

    // RVA: 0xC09 | Ordinal: 3082
        void focusInEvent(class QFocusEvent *);

    // RVA: 0xC1C | Ordinal: 3101
        void focusNextPrevChild(bool);

    // RVA: 0xC30 | Ordinal: 3121
        void focusOutEvent(class QFocusEvent *);

    // RVA: 0xC63 | Ordinal: 3172
        void foregroundBrush(void) const;

    // RVA: 0xE12 | Ordinal: 3603
        void inputMethodEvent(class QInputMethodEvent *);

    // RVA: 0xE21 | Ordinal: 3618
        void inputMethodQuery(enum Qt::InputMethodQuery) const;

    // RVA: 0xE96 | Ordinal: 3735
        void invalidateScene(class QRectF const &, class QFlags<enum QGraphicsScene::SceneLayer>);

    // RVA: 0xEFD | Ordinal: 3838
        void isInteractive(void) const;

    // RVA: 0xF5B | Ordinal: 3932
        void isTransformed(void) const;

    // RVA: 0xF8E | Ordinal: 3983
        void itemAt(class QPoint const &) const;

    // RVA: 0xF8F | Ordinal: 3984
        void itemAt(int, int) const;

    // RVA: 0xFE4 | Ordinal: 4069
        void items(class QPainterPath const &, enum Qt::ItemSelectionMode) const;

    // RVA: 0xFE5 | Ordinal: 4070
        void items(class QPoint const &) const;

    // RVA: 0xFE6 | Ordinal: 4071
        void items(class QPolygon const &, enum Qt::ItemSelectionMode) const;

    // RVA: 0xFE7 | Ordinal: 4072
        void items(class QRect const &, enum Qt::ItemSelectionMode) const;

    // RVA: 0xFE8 | Ordinal: 4073
        void items(int, int) const;

    // RVA: 0xFE9 | Ordinal: 4074
        void items(int, int, int, int, enum Qt::ItemSelectionMode) const;

    // RVA: 0xFEA | Ordinal: 4075
        void items(void) const;

    // RVA: 0x1000 | Ordinal: 4097
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1018 | Ordinal: 4121
        void keyReleaseEvent(class QKeyEvent *);

    // RVA: 0x108F | Ordinal: 4240
        void mapFromScene(class QPainterPath const &) const;

    // RVA: 0x1090 | Ordinal: 4241
        void mapFromScene(class QPointF const &) const;

    // RVA: 0x1091 | Ordinal: 4242
        void mapFromScene(double, double) const;

    // RVA: 0x1092 | Ordinal: 4243
        void mapFromScene(class QPolygonF const &) const;

    // RVA: 0x1093 | Ordinal: 4244
        void mapFromScene(class QRectF const &) const;

    // RVA: 0x1094 | Ordinal: 4245
        void mapFromScene(double, double, double, double) const;

    // RVA: 0x10BC | Ordinal: 4285
        void mapToScene(class QPainterPath const &) const;

    // RVA: 0x10BD | Ordinal: 4286
        void mapToScene(class QPoint const &) const;

    // RVA: 0x10BE | Ordinal: 4287
        void mapToScene(int, int) const;

    // RVA: 0x10BF | Ordinal: 4288
        void mapToScene(class QPolygon const &) const;

    // RVA: 0x10C0 | Ordinal: 4289
        void mapToScene(class QRect const &) const;

    // RVA: 0x10C1 | Ordinal: 4290
        void mapToScene(int, int, int, int) const;

    // RVA: 0x10D4 | Ordinal: 4309
        void matrix(void) const;

    // RVA: 0x1146 | Ordinal: 4423
        void metaObject(void) const;

    // RVA: 0x1206 | Ordinal: 4615
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x121A | Ordinal: 4635
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x123D | Ordinal: 4670
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x125C | Ordinal: 4701
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x12E6 | Ordinal: 4839
        void optimizationFlags(void) const;

    // RVA: 0x132C | Ordinal: 4909
        void paintEvent(class QPaintEvent *);

    // RVA: 0x145F | Ordinal: 5216
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14F2 | Ordinal: 5363
        void qt_metacast(char const *);

    // RVA: 0x1588 | Ordinal: 5513
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1653 | Ordinal: 5716
        void render(class QPainter *, class QRectF const &, class QRect const &, enum Qt::AspectRatioMode);

    // RVA: 0x1657 | Ordinal: 5720
        void renderHints(void) const;

    // RVA: 0x1673 | Ordinal: 5748
        void resetCachedContent(void);

    // RVA: 0x1681 | Ordinal: 5762
        void resetMatrix(void);

    // RVA: 0x1685 | Ordinal: 5766
        void resetTransform(void);

    // RVA: 0x168E | Ordinal: 5775
        void resizeAnchor(void) const;

    // RVA: 0x16A0 | Ordinal: 5793
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16EA | Ordinal: 5867
        void rotate(double);

    // RVA: 0x1715 | Ordinal: 5910
        void rubberBandChanged(class QRect, class QPointF, class QPointF);

    // RVA: 0x1716 | Ordinal: 5911
        void rubberBandRect(void) const;

    // RVA: 0x1718 | Ordinal: 5913
        void rubberBandSelectionMode(void) const;

    // RVA: 0x1724 | Ordinal: 5925
        void scale(double, double);

    // RVA: 0x172A | Ordinal: 5931
        void scene(void) const;

    // RVA: 0x173A | Ordinal: 5947
        void sceneRect(void) const;

    // RVA: 0x1757 | Ordinal: 5976
        void scrollContentsBy(int, int);

    // RVA: 0x1805 | Ordinal: 6150
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1834 | Ordinal: 6197
        void setBackgroundBrush(class QBrush const &);

    // RVA: 0x185A | Ordinal: 6235
        void setCacheMode(class QFlags<enum QGraphicsView::CacheModeFlag>);

    // RVA: 0x1933 | Ordinal: 6452
        void setDragMode(enum QGraphicsView::DragMode);

    // RVA: 0x19B0 | Ordinal: 6577
        void setForegroundBrush(class QBrush const &);

    // RVA: 0x1A2A | Ordinal: 6699
        void setInteractive(bool);

    // RVA: 0x1A86 | Ordinal: 6791
        void setMatrix(class QMatrix const &, bool);

    // RVA: 0x1B11 | Ordinal: 6930
        void setOptimizationFlag(enum QGraphicsView::OptimizationFlag, bool);

    // RVA: 0x1B12 | Ordinal: 6931
        void setOptimizationFlags(class QFlags<enum QGraphicsView::OptimizationFlag>);

    // RVA: 0x1B8A | Ordinal: 7051
        void setRenderHint(enum QPainter::RenderHint, bool);

    // RVA: 0x1B8B | Ordinal: 7052
        void setRenderHints(class QFlags<enum QPainter::RenderHint>);

    // RVA: 0x1B8E | Ordinal: 7055
        void setResizeAnchor(enum QGraphicsView::ViewportAnchor);

    // RVA: 0x1BB6 | Ordinal: 7095
        void setRubberBandSelectionMode(enum Qt::ItemSelectionMode);

    // RVA: 0x1BBB | Ordinal: 7100
        void setScene(class QGraphicsScene *);

    // RVA: 0x1BC4 | Ordinal: 7109
        void setSceneRect(class QRectF const &);

    // RVA: 0x1BC5 | Ordinal: 7110
        void setSceneRect(double, double, double, double);

    // RVA: 0x1CDF | Ordinal: 7392
        void setTransform(class QTransform const &, bool);

    // RVA: 0x1CE3 | Ordinal: 7396
        void setTransformationAnchor(enum QGraphicsView::ViewportAnchor);

    // RVA: 0x1D14 | Ordinal: 7445
        void setViewportUpdateMode(enum QGraphicsView::ViewportUpdateMode);

    // RVA: 0x1D72 | Ordinal: 7539
        void setupViewport(class QWidget *);

    // RVA: 0x1D85 | Ordinal: 7558
        void shear(double, double);

    // RVA: 0x1D9B | Ordinal: 7580
        void showEvent(class QShowEvent *);

    // RVA: 0x1DF6 | Ordinal: 7671
        void sizeHint(void) const;

    // RVA: 0x20AE | Ordinal: 8367
        void tr(char const *, char const *, int);

    // RVA: 0x2141 | Ordinal: 8514
        void trUtf8(char const *, char const *, int);

    // RVA: 0x219B | Ordinal: 8604
        void transform(void) const;

    // RVA: 0x21A0 | Ordinal: 8609
        void transformationAnchor(void) const;

    // RVA: 0x21A5 | Ordinal: 8614
        void translate(double, double);

    // RVA: 0x224A | Ordinal: 8779
        void updateScene(class QList<class QRectF> const &);

    // RVA: 0x224B | Ordinal: 8780
        void updateSceneRect(class QRectF const &);

    // RVA: 0x22A6 | Ordinal: 8871
        void viewportEvent(class QEvent *);

    // RVA: 0x22B1 | Ordinal: 8882
        void viewportTransform(void) const;

    // RVA: 0x22B2 | Ordinal: 8883
        void viewportUpdateMode(void) const;

    // RVA: 0x22E7 | Ordinal: 8936
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x212 | Ordinal: 531
        void _QGraphicsView(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSVIEW_HPP
