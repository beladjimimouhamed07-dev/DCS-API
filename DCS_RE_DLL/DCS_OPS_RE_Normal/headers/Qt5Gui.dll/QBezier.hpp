#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QBezier
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBezier
{
public:

    // RVA: 0x97C | Ordinal: 2429
        void addIfClose(double *, double) const;

    // RVA: 0x9A5 | Ordinal: 2470
        void addToPolygon(class QDataBuffer<class QPointF> &, double) const;

    // RVA: 0x9A6 | Ordinal: 2471
        void addToPolygon(class QPolygonF *, double) const;

    // RVA: 0xA85 | Ordinal: 2694
        void bezierOnInterval(double, double) const;

    // RVA: 0xAFC | Ordinal: 2813
        void bounds(void) const;

    // RVA: 0xBF1 | Ordinal: 3058
        void coefficients(double, double &, double &, double &, double &);

    // RVA: 0xDF9 | Ordinal: 3578
        void derivedAt(double) const;

    // RVA: 0xFC3 | Ordinal: 4036
        void endTangent(void) const;

    // RVA: 0x1158 | Ordinal: 4441
        void fromPoints(class QPointF const &, class QPointF const &, class QPointF const &, class QPointF const &);

    // RVA: 0x11B3 | Ordinal: 4532
        void getSubRange(double, double) const;

    // RVA: 0x513E | Ordinal: 20799
        void length(double) const;

    // RVA: 0x5202 | Ordinal: 20995
        void mapBy(class QTransform const &) const;

    // RVA: 0x52AE | Ordinal: 21167
        void midPoint(void) const;

    // RVA: 0x52AF | Ordinal: 21168
        void midTangent(void) const;

    // RVA: 0x535C | Ordinal: 21341
        void normalVector(double) const;

    // RVA: 0x5402 | Ordinal: 21507
        void parameterSplitLeft(double, class QBezier *);

    // RVA: 0x5474 | Ordinal: 21621
        void pointAt(double) const;

    // RVA: 0x54FA | Ordinal: 21755
        void pt1(void) const;

    // RVA: 0x54FB | Ordinal: 21756
        void pt2(void) const;

    // RVA: 0x54FC | Ordinal: 21757
        void pt3(void) const;

    // RVA: 0x54FD | Ordinal: 21758
        void pt4(void) const;

    // RVA: 0x57EB | Ordinal: 22508
        void secondDerivedAt(double) const;

    // RVA: 0x5D0D | Ordinal: 23822
        void shifted(class QBezier *, int, double, float) const;

    // RVA: 0x5D73 | Ordinal: 23924
        void split(void) const;

    // RVA: 0x5D95 | Ordinal: 23958
        void startTangent(void) const;

    // RVA: 0x5E00 | Ordinal: 24065
        void stationaryYPoints(double &, double &) const;

    // RVA: 0x5EA6 | Ordinal: 24231
        void tAtLength(double) const;

    // RVA: 0x5EA7 | Ordinal: 24232
        void tForY(double, double, double) const;

    // RVA: 0x5F65 | Ordinal: 24422
        void toPolygon(double) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QBEZIER_HPP
