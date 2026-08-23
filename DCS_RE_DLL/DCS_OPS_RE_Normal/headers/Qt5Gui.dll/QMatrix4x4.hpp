#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QMatrix4x4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMatrix4x4
{
public:

    // RVA: 0x16F | Ordinal: 368
        void QMatrix4x4(int);

    // RVA: 0x170 | Ordinal: 369
        void QMatrix4x4(class QMatrix const &);

    // RVA: 0x171 | Ordinal: 370
        void QMatrix4x4(class QTransform const &);

    // RVA: 0x172 | Ordinal: 371
        void QMatrix4x4(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

    // RVA: 0x173 | Ordinal: 372
        void QMatrix4x4(float const *);

    // RVA: 0x174 | Ordinal: 373
        void QMatrix4x4(float const *, int, int);

    // RVA: 0x175 | Ordinal: 374
        void QMatrix4x4(enum Qt::Initialization);

    // RVA: 0x176 | Ordinal: 375
        void QMatrix4x4(void);

    // RVA: 0xC06 | Ordinal: 3079
        void column(int) const;

    // RVA: 0xC38 | Ordinal: 3129
        void constData(void) const;

    // RVA: 0xC77 | Ordinal: 3192
        void copyDataTo(float *) const;

    // RVA: 0xDA1 | Ordinal: 3490
        void data(void);

    // RVA: 0xDA2 | Ordinal: 3491
        void data(void) const;

    // RVA: 0xE30 | Ordinal: 3633
        void determinant(void) const;

    // RVA: 0x1038 | Ordinal: 4153
        void fill(float);

    // RVA: 0x10A0 | Ordinal: 4257
        void flipCoordinates(void);

    // RVA: 0x116E | Ordinal: 4463
        void frustum(float, float, float, float, float, float);

    // RVA: 0x4FB0 | Ordinal: 20401
        void inverted(bool *) const;

    // RVA: 0x4FC2 | Ordinal: 20419
        void isAffine(void) const;

    // RVA: 0x502B | Ordinal: 20524
        void isIdentity(void) const;

    // RVA: 0x51B4 | Ordinal: 20917
        void lookAt(class QVector3D const &, class QVector3D const &, class QVector3D const &);

    // RVA: 0x51E7 | Ordinal: 20968
        void map(class QPoint const &) const;

    // RVA: 0x51E8 | Ordinal: 20969
        void map(class QPointF const &) const;

    // RVA: 0x51E9 | Ordinal: 20970
        void map(class QVector3D const &) const;

    // RVA: 0x51EA | Ordinal: 20971
        void map(class QVector4D const &) const;

    // RVA: 0x520A | Ordinal: 21003
        void mapRect(class QRect const &) const;

    // RVA: 0x520B | Ordinal: 21004
        void mapRect(class QRectF const &) const;

    // RVA: 0x5214 | Ordinal: 21013
        void mapVector(class QVector3D const &) const;

    // RVA: 0x535B | Ordinal: 21340
        void normalMatrix(void) const;

    // RVA: 0x7D2 | Ordinal: 2003
        void operator()(int, int);

    // RVA: 0x7D3 | Ordinal: 2004
        void operator()(int, int) const;

    // RVA: 0x53A6 | Ordinal: 21415
        void optimize(void);

    // RVA: 0x53BA | Ordinal: 21435
        void ortho(class QRect const &);

    // RVA: 0x53BB | Ordinal: 21436
        void ortho(class QRectF const &);

    // RVA: 0x53BC | Ordinal: 21437
        void ortho(float, float, float, float, float, float);

    // RVA: 0x53BD | Ordinal: 21438
        void orthonormalInverse(void) const;

    // RVA: 0x543C | Ordinal: 21565
        void perspective(float, float, float, float);

    // RVA: 0x54F0 | Ordinal: 21745
        void projectedRotate(float, float, float, float);

    // RVA: 0x5770 | Ordinal: 22385
        void rotate(class QQuaternion const &);

    // RVA: 0x5771 | Ordinal: 22386
        void rotate(float, class QVector3D const &);

    // RVA: 0x5772 | Ordinal: 22387
        void rotate(float, float, float, float);

    // RVA: 0x577C | Ordinal: 22397
        void row(int) const;

    // RVA: 0x57A8 | Ordinal: 22441
        void scale(class QVector3D const &);

    // RVA: 0x57A9 | Ordinal: 22442
        void scale(float);

    // RVA: 0x57AA | Ordinal: 22443
        void scale(float, float);

    // RVA: 0x57AB | Ordinal: 22444
        void scale(float, float, float);

    // RVA: 0x58C5 | Ordinal: 22726
        void setColumn(int, class QVector4D const &);

    // RVA: 0x5B57 | Ordinal: 23384
        void setRow(int, class QVector4D const &);

    // RVA: 0x5C0A | Ordinal: 23563
        void setToIdentity(void);

    // RVA: 0x5F36 | Ordinal: 24375
        void toAffine(void) const;

    // RVA: 0x5F73 | Ordinal: 24436
        void toTransform(float) const;

    // RVA: 0x5F74 | Ordinal: 24437
        void toTransform(void) const;

    // RVA: 0x603D | Ordinal: 24638
        void translate(class QVector3D const &);

    // RVA: 0x603E | Ordinal: 24639
        void translate(float, float);

    // RVA: 0x603F | Ordinal: 24640
        void translate(float, float, float);

    // RVA: 0x6059 | Ordinal: 24666
        void transposed(void) const;

    // RVA: 0x6124 | Ordinal: 24869
        void viewport(class QRectF const &);

    // RVA: 0x6125 | Ordinal: 24870
        void viewport(float, float, float, float, float, float);
};

// DCS_OPS_RE_QT5GUI.DLL_QMATRIX4X4_HPP
