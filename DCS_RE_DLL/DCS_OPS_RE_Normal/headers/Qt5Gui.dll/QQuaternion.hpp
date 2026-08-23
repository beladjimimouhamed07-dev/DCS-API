#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QQuaternion
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QQuaternion
{
public:

    // RVA: 0x271 | Ordinal: 626
        void QQuaternion(class QVector4D const &);

    // RVA: 0x272 | Ordinal: 627
        void QQuaternion(float, class QVector3D const &);

    // RVA: 0x273 | Ordinal: 628
        void QQuaternion(float, float, float, float);

    // RVA: 0x274 | Ordinal: 629
        void QQuaternion(enum Qt::Initialization);

    // RVA: 0x275 | Ordinal: 630
        void QQuaternion(void);

    // RVA: 0xC32 | Ordinal: 3123
        void conjugate(void) const;

    // RVA: 0xC33 | Ordinal: 3124
        void conjugated(void) const;

    // RVA: 0xE8E | Ordinal: 3727
        void dotProduct(class QQuaternion const &, class QQuaternion const &);

    // RVA: 0x1128 | Ordinal: 4393
        void fromAxes(class QVector3D const &, class QVector3D const &, class QVector3D const &);

    // RVA: 0x1129 | Ordinal: 4394
        void fromAxisAndAngle(class QVector3D const &, float);

    // RVA: 0x112A | Ordinal: 4395
        void fromAxisAndAngle(float, float, float, float);

    // RVA: 0x1136 | Ordinal: 4407
        void fromDirection(class QVector3D const &, class QVector3D const &);

    // RVA: 0x1137 | Ordinal: 4408
        void fromEulerAngles(class QVector3D const &);

    // RVA: 0x1138 | Ordinal: 4409
        void fromEulerAngles(float, float, float);

    // RVA: 0x1161 | Ordinal: 4450
        void fromRotationMatrix(class QGenericMatrix<3, 3, float> const &);

    // RVA: 0x1196 | Ordinal: 4503
        void getAxes(class QVector3D *, class QVector3D *, class QVector3D *) const;

    // RVA: 0x1197 | Ordinal: 4504
        void getAxisAndAngle(float *, float *, float *, float *) const;

    // RVA: 0x1198 | Ordinal: 4505
        void getAxisAndAngle(class QVector3D *, float *) const;

    // RVA: 0x11A0 | Ordinal: 4513
        void getEulerAngles(float *, float *, float *) const;

    // RVA: 0x4FB2 | Ordinal: 20403
        void inverted(void) const;

    // RVA: 0x502D | Ordinal: 20526
        void isIdentity(void) const;

    // RVA: 0x5055 | Ordinal: 20566
        void isNull(void) const;

    // RVA: 0x5140 | Ordinal: 20801
        void length(void) const;

    // RVA: 0x514A | Ordinal: 20811
        void lengthSquared(void) const;

    // RVA: 0x5350 | Ordinal: 21329
        void nlerp(class QQuaternion const &, class QQuaternion const &, float);

    // RVA: 0x535F | Ordinal: 21344
        void normalize(void);

    // RVA: 0x5363 | Ordinal: 21348
        void normalized(void) const;

    // RVA: 0x5777 | Ordinal: 22392
        void rotatedVector(class QVector3D const &) const;

    // RVA: 0x577A | Ordinal: 22395
        void rotationTo(class QVector3D const &, class QVector3D const &);

    // RVA: 0x57A7 | Ordinal: 22440
        void scalar(void) const;

    // RVA: 0x5B68 | Ordinal: 23401
        void setScalar(float);

    // RVA: 0x5C92 | Ordinal: 23699
        void setVector(class QVector3D const &);

    // RVA: 0x5C93 | Ordinal: 23700
        void setVector(float, float, float);

    // RVA: 0x5CD8 | Ordinal: 23769
        void setX(float);

    // RVA: 0x5CDE | Ordinal: 23775
        void setY(float);

    // RVA: 0x5CE3 | Ordinal: 23780
        void setZ(float);

    // RVA: 0x5D53 | Ordinal: 23892
        void slerp(class QQuaternion const &, class QQuaternion const &, float);

    // RVA: 0x5F3C | Ordinal: 24381
        void toEulerAngles(void) const;

    // RVA: 0x5F6A | Ordinal: 24427
        void toRotationMatrix(void) const;

    // RVA: 0x5F7B | Ordinal: 24444
        void toVector4D(void) const;

    // RVA: 0x60F7 | Ordinal: 24824
        void vector(void) const;

    // RVA: 0x61BA | Ordinal: 25019
        void x(void) const;

    // RVA: 0x61D0 | Ordinal: 25041
        void y(void) const;

    // RVA: 0x61DC | Ordinal: 25053
        void z(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QQUATERNION_HPP
