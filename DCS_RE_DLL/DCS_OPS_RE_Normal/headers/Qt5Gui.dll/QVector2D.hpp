#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QVector2D
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QVector2D
{
public:

    // RVA: 0x3A6 | Ordinal: 935
        void QVector2D(class QPoint const &);

    // RVA: 0x3A7 | Ordinal: 936
        void QVector2D(class QPointF const &);

    // RVA: 0x3A8 | Ordinal: 937
        void QVector2D(class QVector3D const &);

    // RVA: 0x3A9 | Ordinal: 938
        void QVector2D(class QVector4D const &);

    // RVA: 0x3AA | Ordinal: 939
        void QVector2D(float, float);

    // RVA: 0x3AB | Ordinal: 940
        void QVector2D(enum Qt::Initialization);

    // RVA: 0x3AC | Ordinal: 941
        void QVector2D(void);

    // RVA: 0xE6A | Ordinal: 3691
        void distanceToLine(class QVector2D const &, class QVector2D const &) const;

    // RVA: 0xE6E | Ordinal: 3695
        void distanceToPoint(class QVector2D const &) const;

    // RVA: 0xE8F | Ordinal: 3728
        void dotProduct(class QVector2D const &, class QVector2D const &);

    // RVA: 0x505A | Ordinal: 20571
        void isNull(void) const;

    // RVA: 0x5146 | Ordinal: 20807
        void length(void) const;

    // RVA: 0x514B | Ordinal: 20812
        void lengthSquared(void) const;

    // RVA: 0x5360 | Ordinal: 21345
        void normalize(void);

    // RVA: 0x5364 | Ordinal: 21349
        void normalized(void) const;

    // RVA: 0x5CDA | Ordinal: 23771
        void setX(float);

    // RVA: 0x5CDF | Ordinal: 23776
        void setY(float);

    // RVA: 0x5F5F | Ordinal: 24416
        void toPoint(void) const;

    // RVA: 0x5F62 | Ordinal: 24419
        void toPointF(void) const;

    // RVA: 0x5F78 | Ordinal: 24441
        void toVector3D(void) const;

    // RVA: 0x5F7C | Ordinal: 24445
        void toVector4D(void) const;

    // RVA: 0x61BD | Ordinal: 25022
        void x(void) const;

    // RVA: 0x61D3 | Ordinal: 25044
        void y(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QVECTOR2D_HPP
