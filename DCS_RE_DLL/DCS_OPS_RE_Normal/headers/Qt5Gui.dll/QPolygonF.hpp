#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPolygonF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPolygonF
{
public:

    // RVA: 0x269 | Ordinal: 618
        void QPolygonF(class QPolygonF &&);

    // RVA: 0x26A | Ordinal: 619
        void QPolygonF(class QVector<class QPointF> &&);

    // RVA: 0x26B | Ordinal: 620
        void QPolygonF(class QPolygonF const &);

    // RVA: 0x26C | Ordinal: 621
        void QPolygonF(class QVector<class QPointF> const &);

    // RVA: 0x26D | Ordinal: 622
        void QPolygonF(class QPolygon const &);

    // RVA: 0x26E | Ordinal: 623
        void QPolygonF(class QRectF const &);

    // RVA: 0x26F | Ordinal: 624
        void QPolygonF(int);

    // RVA: 0x270 | Ordinal: 625
        void QPolygonF(void);

    // RVA: 0xAF8 | Ordinal: 2809
        void boundingRect(void) const;

    // RVA: 0xC46 | Ordinal: 3143
        void containsPoint(class QPointF const &, enum Qt::FillRule) const;

    // RVA: 0x4F99 | Ordinal: 20378
        void intersected(class QPolygonF const &) const;

    // RVA: 0x4F9F | Ordinal: 20384
        void intersects(class QPolygonF const &) const;

    // RVA: 0x4FD9 | Ordinal: 20442
        void isClosed(void) const;

    // RVA: 0x5E4C | Ordinal: 24141
        void subtracted(class QPolygonF const &) const;

    // RVA: 0x5E8F | Ordinal: 24208
        void swap(class QPolygonF &);

    // RVA: 0x5F66 | Ordinal: 24423
        void toPolygon(void) const;

    // RVA: 0x6048 | Ordinal: 24649
        void translate(class QPointF const &);

    // RVA: 0x6049 | Ordinal: 24650
        void translate(double, double);

    // RVA: 0x6052 | Ordinal: 24659
        void translated(class QPointF const &) const;

    // RVA: 0x6053 | Ordinal: 24660
        void translated(double, double) const;

    // RVA: 0x609D | Ordinal: 24734
        void united(class QPolygonF const &) const;

    // RVA: 0x4E9 | Ordinal: 1258
        void _QPolygonF(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPOLYGONF_HPP
