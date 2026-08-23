#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QVector4D
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QVector4D
{
public:

    // RVA: 0x3B5 | Ordinal: 950
        void QVector4D(class QPoint const &);

    // RVA: 0x3B6 | Ordinal: 951
        void QVector4D(class QPointF const &);

    // RVA: 0x3B7 | Ordinal: 952
        void QVector4D(class QVector2D const &);

    // RVA: 0x3B8 | Ordinal: 953
        void QVector4D(class QVector2D const &, float, float);

    // RVA: 0x3B9 | Ordinal: 954
        void QVector4D(class QVector3D const &);

    // RVA: 0x3BA | Ordinal: 955
        void QVector4D(class QVector3D const &, float);

    // RVA: 0x3BB | Ordinal: 956
        void QVector4D(float, float, float, float);

    // RVA: 0x3BC | Ordinal: 957
        void QVector4D(enum Qt::Initialization);

    // RVA: 0x3BD | Ordinal: 958
        void QVector4D(void);

    // RVA: 0xE91 | Ordinal: 3730
        void dotProduct(class QVector4D const &, class QVector4D const &);

    // RVA: 0x505C | Ordinal: 20573
        void isNull(void) const;

    // RVA: 0x5148 | Ordinal: 20809
        void length(void) const;

    // RVA: 0x514D | Ordinal: 20814
        void lengthSquared(void) const;

    // RVA: 0x5362 | Ordinal: 21347
        void normalize(void);

    // RVA: 0x5366 | Ordinal: 21351
        void normalized(void) const;

    // RVA: 0x5CB2 | Ordinal: 23731
        void setW(float);

    // RVA: 0x5CDC | Ordinal: 23773
        void setX(float);

    // RVA: 0x5CE1 | Ordinal: 23778
        void setY(float);

    // RVA: 0x5CE5 | Ordinal: 23782
        void setZ(float);

    // RVA: 0x5F61 | Ordinal: 24418
        void toPoint(void) const;

    // RVA: 0x5F64 | Ordinal: 24421
        void toPointF(void) const;

    // RVA: 0x5F76 | Ordinal: 24439
        void toVector2D(void) const;

    // RVA: 0x5F77 | Ordinal: 24440
        void toVector2DAffine(void) const;

    // RVA: 0x5F79 | Ordinal: 24442
        void toVector3D(void) const;

    // RVA: 0x5F7A | Ordinal: 24443
        void toVector3DAffine(void) const;

    // RVA: 0x613B | Ordinal: 24892
        void w(void) const;

    // RVA: 0x61BF | Ordinal: 25024
        void x(void) const;

    // RVA: 0x61D5 | Ordinal: 25046
        void y(void) const;

    // RVA: 0x61DF | Ordinal: 25056
        void z(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QVECTOR4D_HPP
