#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPainterPath
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPainterPath
{
public:

    // RVA: 0x203 | Ordinal: 516
        void QPainterPath(class QPainterPath const &);

    // RVA: 0x204 | Ordinal: 517
        void QPainterPath(class QPointF const &);

    // RVA: 0x205 | Ordinal: 518
        void QPainterPath(void);

    // RVA: 0x971 | Ordinal: 2418
        void addEllipse(class QPointF const &, double, double);

    // RVA: 0x972 | Ordinal: 2419
        void addEllipse(class QRectF const &);

    // RVA: 0x973 | Ordinal: 2420
        void addEllipse(double, double, double, double);

    // RVA: 0x986 | Ordinal: 2439
        void addPath(class QPainterPath const &);

    // RVA: 0x98C | Ordinal: 2445
        void addPolygon(class QPolygonF const &);

    // RVA: 0x98F | Ordinal: 2448
        void addRect(class QRectF const &);

    // RVA: 0x990 | Ordinal: 2449
        void addRect(double, double, double, double);

    // RVA: 0x991 | Ordinal: 2450
        void addRegion(class QRegion const &);

    // RVA: 0x994 | Ordinal: 2453
        void addRoundRect(class QRectF const &, int);

    // RVA: 0x995 | Ordinal: 2454
        void addRoundRect(class QRectF const &, int, int);

    // RVA: 0x996 | Ordinal: 2455
        void addRoundRect(double, double, double, double, int);

    // RVA: 0x997 | Ordinal: 2456
        void addRoundRect(double, double, double, double, int, int);

    // RVA: 0x998 | Ordinal: 2457
        void addRoundedRect(class QRectF const &, double, double, enum Qt::SizeMode);

    // RVA: 0x999 | Ordinal: 2458
        void addRoundedRect(double, double, double, double, double, double, enum Qt::SizeMode);

    // RVA: 0x9A3 | Ordinal: 2468
        void addText(class QPointF const &, class QFont const &, class QString const &);

    // RVA: 0x9A4 | Ordinal: 2469
        void addText(double, double, class QFont const &, class QString const &);

    // RVA: 0x9ED | Ordinal: 2542
        void angleAtPercent(double) const;

    // RVA: 0xA19 | Ordinal: 2586
        void arcMoveTo(class QRectF const &, double);

    // RVA: 0xA1A | Ordinal: 2587
        void arcMoveTo(double, double, double, double, double);

    // RVA: 0xA1C | Ordinal: 2589
        void arcTo(class QRectF const &, double, double);

    // RVA: 0xA1D | Ordinal: 2590
        void arcTo(double, double, double, double, double, double);

    // RVA: 0xAF5 | Ordinal: 2806
        void boundingRect(void) const;

    // RVA: 0xB55 | Ordinal: 2902
        void capacity(void) const;

    // RVA: 0xBA3 | Ordinal: 2980
        void clear(void);

    // RVA: 0xBEC | Ordinal: 3053
        void closeSubpath(void);

    // RVA: 0xC2F | Ordinal: 3120
        void computeBoundingRect(void) const;

    // RVA: 0xC30 | Ordinal: 3121
        void computeControlPointRect(void) const;

    // RVA: 0xC34 | Ordinal: 3125
        void connectPath(class QPainterPath const &);

    // RVA: 0xC3D | Ordinal: 3134
        void contains(class QPainterPath const &) const;

    // RVA: 0xC3E | Ordinal: 3135
        void contains(class QPointF const &) const;

    // RVA: 0xC3F | Ordinal: 3136
        void contains(class QRectF const &) const;

    // RVA: 0xC55 | Ordinal: 3158
        void controlPointRect(void) const;

    // RVA: 0xCD5 | Ordinal: 3286
        void cubicTo(class QPointF const &, class QPointF const &, class QPointF const &);

    // RVA: 0xCD6 | Ordinal: 3287
        void cubicTo(double, double, double, double, double, double);

    // RVA: 0xCF6 | Ordinal: 3319
        void currentPosition(void) const;

    // RVA: 0xD59 | Ordinal: 3418
        void d_func(void) const;

    // RVA: 0xE22 | Ordinal: 3619
        void detach(void);

    // RVA: 0xE2E | Ordinal: 3631
        void detach_helper(void);

    // RVA: 0xF77 | Ordinal: 3960
        void elementAt(int) const;

    // RVA: 0xF79 | Ordinal: 3962
        void elementCount(void) const;

    // RVA: 0xFCC | Ordinal: 4045
        void ensureData(void);

    // RVA: 0xFCD | Ordinal: 4046
        void ensureData_helper(void);

    // RVA: 0x105C | Ordinal: 4189
        void fillRule(void) const;

    // RVA: 0x4F97 | Ordinal: 20376
        void intersected(class QPainterPath const &) const;

    // RVA: 0x4F9C | Ordinal: 20381
        void intersects(class QPainterPath const &) const;

    // RVA: 0x4F9D | Ordinal: 20382
        void intersects(class QRectF const &) const;

    // RVA: 0x5012 | Ordinal: 20499
        void isEmpty(void) const;

    // RVA: 0x513F | Ordinal: 20800
        void length(void) const;

    // RVA: 0x5171 | Ordinal: 20850
        void lineTo(class QPointF const &);

    // RVA: 0x5172 | Ordinal: 20851
        void lineTo(double, double);

    // RVA: 0x530A | Ordinal: 21259
        void moveTo(class QPointF const &);

    // RVA: 0x530B | Ordinal: 21260
        void moveTo(double, double);

    // RVA: 0x543A | Ordinal: 21563
        void percentAtLength(double) const;

    // RVA: 0x5475 | Ordinal: 21622
        void pointAtPercent(double) const;

    // RVA: 0x5655 | Ordinal: 22102
        void quadTo(class QPointF const &, class QPointF const &);

    // RVA: 0x5656 | Ordinal: 22103
        void quadTo(double, double, double, double);

    // RVA: 0x5714 | Ordinal: 22293
        void reserve(int);

    // RVA: 0x594A | Ordinal: 22859
        void setDirty(bool);

    // RVA: 0x595C | Ordinal: 22877
        void setElementPositionAt(int, double, double);

    // RVA: 0x5972 | Ordinal: 22899
        void setFillRule(enum Qt::FillRule);

    // RVA: 0x5D29 | Ordinal: 23850
        void simplified(void) const;

    // RVA: 0x5D54 | Ordinal: 23893
        void slopeAtPercent(double) const;

    // RVA: 0x5E4A | Ordinal: 24139
        void subtracted(class QPainterPath const &) const;

    // RVA: 0x5E4E | Ordinal: 24143
        void subtractedInverted(class QPainterPath const &) const;

    // RVA: 0x5E89 | Ordinal: 24202
        void swap(class QPainterPath &);

    // RVA: 0x5F3E | Ordinal: 24383
        void toFillPolygon(class QMatrix const &) const;

    // RVA: 0x5F3F | Ordinal: 24384
        void toFillPolygon(class QTransform const &) const;

    // RVA: 0x5F40 | Ordinal: 24385
        void toFillPolygons(class QMatrix const &) const;

    // RVA: 0x5F41 | Ordinal: 24386
        void toFillPolygons(class QTransform const &) const;

    // RVA: 0x5F68 | Ordinal: 24425
        void toReversed(void) const;

    // RVA: 0x5F6E | Ordinal: 24431
        void toSubpathPolygons(class QMatrix const &) const;

    // RVA: 0x5F6F | Ordinal: 24432
        void toSubpathPolygons(class QTransform const &) const;

    // RVA: 0x6044 | Ordinal: 24645
        void translate(class QPointF const &);

    // RVA: 0x6045 | Ordinal: 24646
        void translate(double, double);

    // RVA: 0x604E | Ordinal: 24655
        void translated(class QPointF const &) const;

    // RVA: 0x604F | Ordinal: 24656
        void translated(double, double) const;

    // RVA: 0x609B | Ordinal: 24732
        void united(class QPainterPath const &) const;

    // RVA: 0x4B5 | Ordinal: 1206
        void _QPainterPath(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAINTERPATH_HPP
