#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QMatrix
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMatrix
{
public:

    // RVA: 0x177 | Ordinal: 376
        void QMatrix(double, double, double, double, double, double, bool);

    // RVA: 0x178 | Ordinal: 377
        void QMatrix(bool);

    // RVA: 0x179 | Ordinal: 378
        void QMatrix(class QMatrix &&);

    // RVA: 0x17A | Ordinal: 379
        void QMatrix(class QMatrix const &);

    // RVA: 0x17B | Ordinal: 380
        void QMatrix(double, double, double, double, double, double);

    // RVA: 0x17C | Ordinal: 381
        void QMatrix(enum Qt::Initialization);

    // RVA: 0x17D | Ordinal: 382
        void QMatrix(void);

    // RVA: 0xE31 | Ordinal: 3634
        void determinant(void) const;

    // RVA: 0xF68 | Ordinal: 3945
        void dx(void) const;

    // RVA: 0xF6A | Ordinal: 3947
        void dy(void) const;

    // RVA: 0x4FB1 | Ordinal: 20402
        void inverted(bool *) const;

    // RVA: 0x502C | Ordinal: 20525
        void isIdentity(void) const;

    // RVA: 0x5038 | Ordinal: 20537
        void isInvertible(void) const;

    // RVA: 0x51BF | Ordinal: 20928
        void m11(void) const;

    // RVA: 0x51C1 | Ordinal: 20930
        void m12(void) const;

    // RVA: 0x51C4 | Ordinal: 20933
        void m21(void) const;

    // RVA: 0x51C6 | Ordinal: 20935
        void m22(void) const;

    // RVA: 0x51EB | Ordinal: 20972
        void map(class QLine const &) const;

    // RVA: 0x51EC | Ordinal: 20973
        void map(class QLineF const &) const;

    // RVA: 0x51ED | Ordinal: 20974
        void map(class QPainterPath const &) const;

    // RVA: 0x51EE | Ordinal: 20975
        void map(class QPoint const &) const;

    // RVA: 0x51EF | Ordinal: 20976
        void map(class QPointF const &) const;

    // RVA: 0x51F0 | Ordinal: 20977
        void map(class QPolygon const &) const;

    // RVA: 0x51F1 | Ordinal: 20978
        void map(class QPolygonF const &) const;

    // RVA: 0x51F2 | Ordinal: 20979
        void map(class QRegion const &) const;

    // RVA: 0x51F3 | Ordinal: 20980
        void map(int, int, int *, int *) const;

    // RVA: 0x51F4 | Ordinal: 20981
        void map(double, double, double *, double *) const;

    // RVA: 0x520C | Ordinal: 21005
        void mapRect(class QRect const &) const;

    // RVA: 0x520D | Ordinal: 21006
        void mapRect(class QRectF const &) const;

    // RVA: 0x5212 | Ordinal: 21011
        void mapToPolygon(class QRect const &) const;

    // RVA: 0x5716 | Ordinal: 22295
        void reset(void);

    // RVA: 0x5773 | Ordinal: 22388
        void rotate(double);

    // RVA: 0x57AC | Ordinal: 22445
        void scale(double, double);

    // RVA: 0x5A5B | Ordinal: 23132
        void setMatrix(double, double, double, double, double, double);

    // RVA: 0x5D0A | Ordinal: 23819
        void shear(double, double);

    // RVA: 0x6040 | Ordinal: 24641
        void translate(double, double);
};

// DCS_OPS_RE_QT5GUI.DLL_QMATRIX_HPP
