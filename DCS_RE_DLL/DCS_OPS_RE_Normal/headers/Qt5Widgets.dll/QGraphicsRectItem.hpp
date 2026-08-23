#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsRectItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsRectItem
{
public:

    // RVA: 0x89 | Ordinal: 138
        void QGraphicsRectItem(class QRectF const &, class QGraphicsItem *);

    // RVA: 0x8A | Ordinal: 139
        void QGraphicsRectItem(double, double, double, double, class QGraphicsItem *);

    // RVA: 0x8B | Ordinal: 140
        void QGraphicsRectItem(class QGraphicsItem *);

    // RVA: 0x649 | Ordinal: 1610
        void boundingRect(void) const;

    // RVA: 0x7B9 | Ordinal: 1978
        void contains(class QPointF const &) const;

    // RVA: 0x91F | Ordinal: 2336
        void d_func(void);

    // RVA: 0x920 | Ordinal: 2337
        void d_func(void) const;

    // RVA: 0xBAD | Ordinal: 2990
        void extension(class QVariant const &) const;

    // RVA: 0xF21 | Ordinal: 3874
        void isObscuredBy(class QGraphicsItem const *) const;

    // RVA: 0x12D0 | Ordinal: 4817
        void opaqueArea(void) const;

    // RVA: 0x1316 | Ordinal: 4887
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x15F4 | Ordinal: 5621
        void rect(void) const;

    // RVA: 0x1960 | Ordinal: 6497
        void setExtension(enum QGraphicsItem::Extension, class QVariant const &);

    // RVA: 0x1B87 | Ordinal: 7048
        void setRect(class QRectF const &);

    // RVA: 0x1B88 | Ordinal: 7049
        void setRect(double, double, double, double);

    // RVA: 0x1D7A | Ordinal: 7547
        void shape(void) const;

    // RVA: 0x1F70 | Ordinal: 8049
        void supportsExtension(enum QGraphicsItem::Extension) const;

    // RVA: 0x21C3 | Ordinal: 8644
        void type(void) const;

    // RVA: 0x201 | Ordinal: 514
        void _QGraphicsRectItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSRECTITEM_HPP
