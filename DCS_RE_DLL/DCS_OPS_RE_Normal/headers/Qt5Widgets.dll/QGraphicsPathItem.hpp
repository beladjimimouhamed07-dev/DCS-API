#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsPathItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsPathItem
{
public:

    // RVA: 0x82 | Ordinal: 131
        void QGraphicsPathItem(class QPainterPath const &, class QGraphicsItem *);

    // RVA: 0x83 | Ordinal: 132
        void QGraphicsPathItem(class QGraphicsItem *);

    // RVA: 0x646 | Ordinal: 1607
        void boundingRect(void) const;

    // RVA: 0x7B6 | Ordinal: 1975
        void contains(class QPointF const &) const;

    // RVA: 0x917 | Ordinal: 2328
        void d_func(void);

    // RVA: 0x918 | Ordinal: 2329
        void d_func(void) const;

    // RVA: 0xBAA | Ordinal: 2987
        void extension(class QVariant const &) const;

    // RVA: 0xF1E | Ordinal: 3871
        void isObscuredBy(class QGraphicsItem const *) const;

    // RVA: 0x12CD | Ordinal: 4814
        void opaqueArea(void) const;

    // RVA: 0x1312 | Ordinal: 4883
        void paint(class QPainter *, class QStyleOptionGraphicsItem const *, class QWidget *);

    // RVA: 0x1377 | Ordinal: 4984
        void path(void) const;

    // RVA: 0x195D | Ordinal: 6494
        void setExtension(enum QGraphicsItem::Extension, class QVariant const &);

    // RVA: 0x1B47 | Ordinal: 6984
        void setPath(class QPainterPath const &);

    // RVA: 0x1D77 | Ordinal: 7544
        void shape(void) const;

    // RVA: 0x1F6D | Ordinal: 8046
        void supportsExtension(enum QGraphicsItem::Extension) const;

    // RVA: 0x21BF | Ordinal: 8640
        void type(void) const;

    // RVA: 0x1FD | Ordinal: 510
        void _QGraphicsPathItem(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSPATHITEM_HPP
