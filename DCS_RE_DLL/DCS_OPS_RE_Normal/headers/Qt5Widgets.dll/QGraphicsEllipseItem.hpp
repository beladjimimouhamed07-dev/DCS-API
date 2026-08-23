#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsEllipseItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsEllipseItem
{
public:

    // RVA: 0x6C | Ordinal: 109
        void QGraphicsEllipseItem(class QRectF const &, class QGraphicsItem *);

    // RVA: 0x6D | Ordinal: 110
        void QGraphicsEllipseItem(double, double, double, double, class QGraphicsItem *);

    // RVA: 0x6E | Ordinal: 111
        void QGraphicsEllipseItem(class QGraphicsItem *);

    // RVA: 0x643 | Ordinal: 1604
        void boundingRect(void) const;

    // RVA: 0x7B3 | Ordinal: 1972
        void contains(class QPointF const &) const;

    // RVA: 0x905 | Ordinal: 2310
        void d_func(void);

    // RVA: 0x906 | Ordinal: 2311
        void d_func(void) const;

    // RVA: 0xBA7 | Ordinal: 2984
        void extension(class QVariant const &) const;

    // RVA: 0xF1A | Ordinal: 3867
        void isObscuredBy(class QGraphicsItem const *) const;

    // RVA: 0x12C9 | Ordinal: 4810
        void opaqueArea(void) const;

    // RVA: 0x130F | Ordinal: 4880
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x15F3 | Ordinal: 5620
        void rect(void) const;

    // RVA: 0x195A | Ordinal: 6491
        void setExtension(enum QGraphicsItem::Extension, class QVariant const &);

    // RVA: 0x1B85 | Ordinal: 7046
        void setRect(class QRectF const &);

    // RVA: 0x1B86 | Ordinal: 7047
        void setRect(double, double, double, double);

    // RVA: 0x1C39 | Ordinal: 7226
        void setSpanAngle(int);

    // RVA: 0x1C41 | Ordinal: 7234
        void setStartAngle(int);

    // RVA: 0x1D74 | Ordinal: 7541
        void shape(void) const;

    // RVA: 0x1E59 | Ordinal: 7770
        void spanAngle(void) const;

    // RVA: 0x1E7B | Ordinal: 7804
        void startAngle(void) const;

    // RVA: 0x1F6A | Ordinal: 8043
        void supportsExtension(enum QGraphicsItem::Extension) const;

    // RVA: 0x21BB | Ordinal: 8636
        void type(void) const;

    // RVA: 0x1F1 | Ordinal: 498
        void _QGraphicsEllipseItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSELLIPSEITEM_HPP
