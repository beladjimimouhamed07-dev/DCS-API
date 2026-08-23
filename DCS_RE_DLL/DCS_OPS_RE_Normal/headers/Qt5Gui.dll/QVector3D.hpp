#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QVector3D
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QVector3D
{
public:

    // RVA: 0x3AD | Ordinal: 942
        void QVector3D(class QPoint const &);

    // RVA: 0x3AE | Ordinal: 943
        void QVector3D(class QPointF const &);

    // RVA: 0x3AF | Ordinal: 944
        void QVector3D(class QVector2D const &);

    // RVA: 0x3B0 | Ordinal: 945
        void QVector3D(class QVector2D const &, float);

    // RVA: 0x3B1 | Ordinal: 946
        void QVector3D(class QVector4D const &);

    // RVA: 0x3B2 | Ordinal: 947
        void QVector3D(float, float, float);

    // RVA: 0x3B3 | Ordinal: 948
        void QVector3D(enum Qt::Initialization);

    // RVA: 0x3B4 | Ordinal: 949
        void QVector3D(void);

    // RVA: 0xCD4 | Ordinal: 3285
        void crossProduct(class QVector3D const &, class QVector3D const &);

    // RVA: 0xE6B | Ordinal: 3692
        void distanceToLine(class QVector3D const &, class QVector3D const &) const;

    // RVA: 0xE6C | Ordinal: 3693
        void distanceToPlane(class QVector3D const &, class QVector3D const &, class QVector3D const &) const;

    // RVA: 0xE6D | Ordinal: 3694
        void distanceToPlane(class QVector3D const &, class QVector3D const &) const;

    // RVA: 0xE6F | Ordinal: 3696
        void distanceToPoint(class QVector3D const &) const;

    // RVA: 0xE90 | Ordinal: 3729
        void dotProduct(class QVector3D const &, class QVector3D const &);

    // RVA: 0x505B | Ordinal: 20572
        void isNull(void) const;

    // RVA: 0x5147 | Ordinal: 20808
        void length(void) const;

    // RVA: 0x514C | Ordinal: 20813
        void lengthSquared(void) const;

    // RVA: 0x5358 | Ordinal: 21337
        void normal(class QVector3D const &, class QVector3D const &, class QVector3D const &);

    // RVA: 0x5359 | Ordinal: 21338
        void normal(class QVector3D const &, class QVector3D const &);

    // RVA: 0x5361 | Ordinal: 21346
        void normalize(void);

    // RVA: 0x5365 | Ordinal: 21350
        void normalized(void) const;

    // RVA: 0x54EF | Ordinal: 21744
        void project(class QMatrix4x4 const &, class QMatrix4x4 const &, class QRect const &) const;

    // RVA: 0x5CDB | Ordinal: 23772
        void setX(float);

    // RVA: 0x5CE0 | Ordinal: 23777
        void setY(float);

    // RVA: 0x5CE4 | Ordinal: 23781
        void setZ(float);

    // RVA: 0x5F60 | Ordinal: 24417
        void toPoint(void) const;

    // RVA: 0x5F63 | Ordinal: 24420
        void toPointF(void) const;

    // RVA: 0x5F75 | Ordinal: 24438
        void toVector2D(void) const;

    // RVA: 0x5F7D | Ordinal: 24446
        void toVector4D(void) const;

    // RVA: 0x60A7 | Ordinal: 24744
        void unproject(class QMatrix4x4 const &, class QMatrix4x4 const &, class QRect const &) const;

    // RVA: 0x61BE | Ordinal: 25023
        void x(void) const;

    // RVA: 0x61D4 | Ordinal: 25045
        void y(void) const;

    // RVA: 0x61DE | Ordinal: 25055
        void z(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QVECTOR3D_HPP
