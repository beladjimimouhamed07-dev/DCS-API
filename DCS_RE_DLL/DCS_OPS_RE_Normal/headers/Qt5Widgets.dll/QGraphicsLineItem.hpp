#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsLineItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsLineItem
{
public:

    // RVA: 0x7A | Ordinal: 123
        void QGraphicsLineItem(class QLineF const &, class QGraphicsItem *);

    // RVA: 0x7B | Ordinal: 124
        void QGraphicsLineItem(double, double, double, double, class QGraphicsItem *);

    // RVA: 0x7C | Ordinal: 125
        void QGraphicsLineItem(class QGraphicsItem *);

    // RVA: 0x645 | Ordinal: 1606
        void boundingRect(void) const;

    // RVA: 0x7B5 | Ordinal: 1974
        void contains(class QPointF const &) const;

    // RVA: 0x911 | Ordinal: 2322
        void d_func(void);

    // RVA: 0x912 | Ordinal: 2323
        void d_func(void) const;

    // RVA: 0xBA9 | Ordinal: 2986
        void extension(class QVariant const &) const;

    // RVA: 0xF1D | Ordinal: 3870
        void isObscuredBy(class QGraphicsItem const *) const;

    // RVA: 0x1059 | Ordinal: 4186
        void line(void) const;

    // RVA: 0x12CC | Ordinal: 4813
        void opaqueArea(void) const;

    // RVA: 0x1311 | Ordinal: 4882
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x137B | Ordinal: 4988
        void pen(void) const;

    // RVA: 0x195C | Ordinal: 6493
        void setExtension(enum QGraphicsItem::Extension, class QVariant const &);

    // RVA: 0x1A73 | Ordinal: 6772
        void setLine(class QLineF const &);

    // RVA: 0x1A74 | Ordinal: 6773
        void setLine(double, double, double, double);

    // RVA: 0x1B49 | Ordinal: 6986
        void setPen(class QPen const &);

    // RVA: 0x1D76 | Ordinal: 7543
        void shape(void) const;

    // RVA: 0x1F6C | Ordinal: 8045
        void supportsExtension(enum QGraphicsItem::Extension) const;

    // RVA: 0x21BE | Ordinal: 8639
        void type(void) const;

    // RVA: 0x1F9 | Ordinal: 506
        void _QGraphicsLineItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSLINEITEM_HPP
