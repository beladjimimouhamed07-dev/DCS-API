#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTransform
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTransform
{
public:

    // RVA: 0x399 | Ordinal: 922
        void QTransform(double, double, double, double, double, double, double, double, double, bool);

    // RVA: 0x39A | Ordinal: 923
        void QTransform(bool);

    // RVA: 0x39B | Ordinal: 924
        void QTransform(class QTransform &&);

    // RVA: 0x39C | Ordinal: 925
        void QTransform(class QTransform const &);

    // RVA: 0x39D | Ordinal: 926
        void QTransform(class QMatrix const &);

    // RVA: 0x39E | Ordinal: 927
        void QTransform(double, double, double, double, double, double);

    // RVA: 0x39F | Ordinal: 928
        void QTransform(double, double, double, double, double, double, double, double, double);

    // RVA: 0x3A0 | Ordinal: 929
        void QTransform(enum Qt::Initialization);

    // RVA: 0x3A1 | Ordinal: 930
        void QTransform(void);

    // RVA: 0x9AE | Ordinal: 2479
        void adjoint(void) const;

    // RVA: 0xE1B | Ordinal: 3612
        void det(void) const;

    // RVA: 0xE32 | Ordinal: 3635
        void determinant(void) const;

    // RVA: 0xF69 | Ordinal: 3946
        void dx(void) const;

    // RVA: 0xF6B | Ordinal: 3948
        void dy(void) const;

    // RVA: 0x1163 | Ordinal: 4452
        void fromScale(double, double);

    // RVA: 0x116B | Ordinal: 4460
        void fromTranslate(double, double);

    // RVA: 0x4F38 | Ordinal: 20281
        void inline_type(void) const;

    // RVA: 0x4FB3 | Ordinal: 20404
        void inverted(bool *) const;

    // RVA: 0x4FC3 | Ordinal: 20420
        void isAffine(void) const;

    // RVA: 0x502E | Ordinal: 20527
        void isIdentity(void) const;

    // RVA: 0x5039 | Ordinal: 20538
        void isInvertible(void) const;

    // RVA: 0x5075 | Ordinal: 20598
        void isRotating(void) const;

    // RVA: 0x5079 | Ordinal: 20602
        void isScaling(void) const;

    // RVA: 0x5088 | Ordinal: 20617
        void isTranslating(void) const;

    // RVA: 0x51C0 | Ordinal: 20929
        void m11(void) const;

    // RVA: 0x51C2 | Ordinal: 20931
        void m12(void) const;

    // RVA: 0x51C3 | Ordinal: 20932
        void m13(void) const;

    // RVA: 0x51C5 | Ordinal: 20934
        void m21(void) const;

    // RVA: 0x51C7 | Ordinal: 20936
        void m22(void) const;

    // RVA: 0x51C8 | Ordinal: 20937
        void m23(void) const;

    // RVA: 0x51C9 | Ordinal: 20938
        void m31(void) const;

    // RVA: 0x51CA | Ordinal: 20939
        void m32(void) const;

    // RVA: 0x51CB | Ordinal: 20940
        void m33(void) const;

    // RVA: 0x51F6 | Ordinal: 20983
        void map(class QLine const &) const;

    // RVA: 0x51F7 | Ordinal: 20984
        void map(class QLineF const &) const;

    // RVA: 0x51F8 | Ordinal: 20985
        void map(class QPainterPath const &) const;

    // RVA: 0x51F9 | Ordinal: 20986
        void map(class QPoint const &) const;

    // RVA: 0x51FA | Ordinal: 20987
        void map(class QPointF const &) const;

    // RVA: 0x51FB | Ordinal: 20988
        void map(class QPolygon const &) const;

    // RVA: 0x51FC | Ordinal: 20989
        void map(class QPolygonF const &) const;

    // RVA: 0x51FD | Ordinal: 20990
        void map(class QRegion const &) const;

    // RVA: 0x51FE | Ordinal: 20991
        void map(int, int, int *, int *) const;

    // RVA: 0x51FF | Ordinal: 20992
        void map(double, double, double *, double *) const;

    // RVA: 0x520E | Ordinal: 21007
        void mapRect(class QRect const &) const;

    // RVA: 0x520F | Ordinal: 21008
        void mapRect(class QRectF const &) const;

    // RVA: 0x5213 | Ordinal: 21012
        void mapToPolygon(class QRect const &) const;

    // RVA: 0x5657 | Ordinal: 22104
        void quadToQuad(class QPolygonF const &, class QPolygonF const &, class QTransform &);

    // RVA: 0x5658 | Ordinal: 22105
        void quadToSquare(class QPolygonF const &, class QTransform &);

    // RVA: 0x5719 | Ordinal: 22298
        void reset(void);

    // RVA: 0x5775 | Ordinal: 22390
        void rotate(double, enum Qt::Axis);

    // RVA: 0x5776 | Ordinal: 22391
        void rotateRadians(double, enum Qt::Axis);

    // RVA: 0x57AE | Ordinal: 22447
        void scale(double, double);

    // RVA: 0x5A5D | Ordinal: 23134
        void setMatrix(double, double, double, double, double, double, double, double, double);

    // RVA: 0x5D0C | Ordinal: 23821
        void shear(double, double);

    // RVA: 0x5D77 | Ordinal: 23928
        void squareToQuad(class QPolygonF const &, class QTransform &);

    // RVA: 0x5F37 | Ordinal: 24376
        void toAffine(void) const;

    // RVA: 0x604C | Ordinal: 24653
        void translate(double, double);

    // RVA: 0x605A | Ordinal: 24667
        void transposed(void) const;

    // RVA: 0x6074 | Ordinal: 24693
        void type(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QTRANSFORM_HPP
