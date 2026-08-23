#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsPixmapItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsPixmapItem
{
public:

    // RVA: 0x84 | Ordinal: 133
        void QGraphicsPixmapItem(class QPixmap const &, class QGraphicsItem *);

    // RVA: 0x85 | Ordinal: 134
        void QGraphicsPixmapItem(class QGraphicsItem *);

    // RVA: 0x647 | Ordinal: 1608
        void boundingRect(void) const;

    // RVA: 0x7B7 | Ordinal: 1976
        void contains(class QPointF const &) const;

    // RVA: 0x919 | Ordinal: 2330
        void d_func(void);

    // RVA: 0x91A | Ordinal: 2331
        void d_func(void) const;

    // RVA: 0xBAB | Ordinal: 2988
        void extension(class QVariant const &) const;

    // RVA: 0xF1F | Ordinal: 3872
        void isObscuredBy(class QGraphicsItem const *) const;

    // RVA: 0x12B8 | Ordinal: 4793
        void offset(void) const;

    // RVA: 0x12CE | Ordinal: 4815
        void opaqueArea(void) const;

    // RVA: 0x1313 | Ordinal: 4884
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x1389 | Ordinal: 5002
        void pixmap(void) const;

    // RVA: 0x195E | Ordinal: 6495
        void setExtension(enum QGraphicsItem::Extension, class QVariant const &);

    // RVA: 0x1AFC | Ordinal: 6909
        void setOffset(class QPointF const &);

    // RVA: 0x1AFD | Ordinal: 6910
        void setOffset(double, double);

    // RVA: 0x1B4B | Ordinal: 6988
        void setPixmap(class QPixmap const &);

    // RVA: 0x1BF7 | Ordinal: 7160
        void setShapeMode(enum QGraphicsPixmapItem::ShapeMode);

    // RVA: 0x1CE4 | Ordinal: 7397
        void setTransformationMode(enum Qt::TransformationMode);

    // RVA: 0x1D78 | Ordinal: 7545
        void shape(void) const;

    // RVA: 0x1D80 | Ordinal: 7553
        void shapeMode(void) const;

    // RVA: 0x1F6E | Ordinal: 8047
        void supportsExtension(enum QGraphicsItem::Extension) const;

    // RVA: 0x21A1 | Ordinal: 8610
        void transformationMode(void) const;

    // RVA: 0x21C0 | Ordinal: 8641
        void type(void) const;

    // RVA: 0x1FE | Ordinal: 511
        void _QGraphicsPixmapItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSPIXMAPITEM_HPP
