#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsPolygonItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsPolygonItem
{
public:

    // RVA: 0x86 | Ordinal: 135
        void QGraphicsPolygonItem(class QPolygonF const &, class QGraphicsItem *);

    // RVA: 0x87 | Ordinal: 136
        void QGraphicsPolygonItem(class QGraphicsItem *);

    // RVA: 0x648 | Ordinal: 1609
        void boundingRect(void) const;

    // RVA: 0x7B8 | Ordinal: 1977
        void contains(class QPointF const &) const;

    // RVA: 0x91B | Ordinal: 2332
        void d_func(void);

    // RVA: 0x91C | Ordinal: 2333
        void d_func(void) const;

    // RVA: 0xBAC | Ordinal: 2989
        void extension(class QVariant const &) const;

    // RVA: 0xBC8 | Ordinal: 3017
        void fillRule(void) const;

    // RVA: 0xF20 | Ordinal: 3873
        void isObscuredBy(class QGraphicsItem const *) const;

    // RVA: 0x12CF | Ordinal: 4816
        void opaqueArea(void) const;

    // RVA: 0x1314 | Ordinal: 4885
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x13AC | Ordinal: 5037
        void polygon(void) const;

    // RVA: 0x195F | Ordinal: 6496
        void setExtension(enum QGraphicsItem::Extension, class QVariant const &);

    // RVA: 0x196D | Ordinal: 6510
        void setFillRule(enum Qt::FillRule);

    // RVA: 0x1B59 | Ordinal: 7002
        void setPolygon(class QPolygonF const &);

    // RVA: 0x1D79 | Ordinal: 7546
        void shape(void) const;

    // RVA: 0x1F6F | Ordinal: 8048
        void supportsExtension(enum QGraphicsItem::Extension) const;

    // RVA: 0x21C1 | Ordinal: 8642
        void type(void) const;

    // RVA: 0x1FF | Ordinal: 512
        void _QGraphicsPolygonItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSPOLYGONITEM_HPP
