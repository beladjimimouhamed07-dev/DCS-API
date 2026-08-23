#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPolygon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPolygon
{
public:

    // RVA: 0x261 | Ordinal: 610
        void QPolygon(class QPolygon &&);

    // RVA: 0x262 | Ordinal: 611
        void QPolygon(class QVector<class QPoint> &&);

    // RVA: 0x263 | Ordinal: 612
        void QPolygon(class QPolygon const &);

    // RVA: 0x264 | Ordinal: 613
        void QPolygon(class QVector<class QPoint> const &);

    // RVA: 0x265 | Ordinal: 614
        void QPolygon(class QRect const &, bool);

    // RVA: 0x266 | Ordinal: 615
        void QPolygon(int);

    // RVA: 0x267 | Ordinal: 616
        void QPolygon(int, int const *);

    // RVA: 0x268 | Ordinal: 617
        void QPolygon(void);

    // RVA: 0xAF7 | Ordinal: 2808
        void boundingRect(void) const;

    // RVA: 0xC45 | Ordinal: 3142
        void containsPoint(class QPoint const &, enum Qt::FillRule) const;

    // RVA: 0x4F98 | Ordinal: 20377
        void intersected(class QPolygon const &) const;

    // RVA: 0x4F9E | Ordinal: 20383
        void intersects(class QPolygon const &) const;

    // RVA: 0x5472 | Ordinal: 21619
        void point(int) const;

    // RVA: 0x5473 | Ordinal: 21620
        void point(int, int *, int *) const;

    // RVA: 0x5500 | Ordinal: 21761
        void putPoints(int, int, class QPolygon const &, int);

    // RVA: 0x5501 | Ordinal: 21762
        void putPoints(int, int, int, int, ...);

    // RVA: 0x5502 | Ordinal: 21763
        void putPoints(int, int, int const *);

    // RVA: 0x5AFD | Ordinal: 23294
        void setPoint(int, class QPoint const &);

    // RVA: 0x5AFE | Ordinal: 23295
        void setPoint(int, int, int);

    // RVA: 0x5B01 | Ordinal: 23298
        void setPoints(int, int, int, ...);

    // RVA: 0x5B02 | Ordinal: 23299
        void setPoints(int, int const *);

    // RVA: 0x5E4B | Ordinal: 24140
        void subtracted(class QPolygon const &) const;

    // RVA: 0x5E8E | Ordinal: 24207
        void swap(class QPolygon &);

    // RVA: 0x6046 | Ordinal: 24647
        void translate(class QPoint const &);

    // RVA: 0x6047 | Ordinal: 24648
        void translate(int, int);

    // RVA: 0x6050 | Ordinal: 24657
        void translated(class QPoint const &) const;

    // RVA: 0x6051 | Ordinal: 24658
        void translated(int, int) const;

    // RVA: 0x609C | Ordinal: 24733
        void united(class QPolygon const &) const;

    // RVA: 0x4E8 | Ordinal: 1257
        void _QPolygon(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPOLYGON_HPP
