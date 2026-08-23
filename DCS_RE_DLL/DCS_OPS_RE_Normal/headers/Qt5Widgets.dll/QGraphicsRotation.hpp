#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsRotation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsRotation
{
public:

    // RVA: 0x8C | Ordinal: 141
        void QGraphicsRotation(class QObject *);

    // RVA: 0x5D9 | Ordinal: 1498
        void angle(void) const;

    // RVA: 0x5DA | Ordinal: 1499
        void angleChanged(void);

    // RVA: 0x5EA | Ordinal: 1515
        void applyTo(class QMatrix4x4 *) const;

    // RVA: 0x60B | Ordinal: 1548
        void axis(void) const;

    // RVA: 0x60C | Ordinal: 1549
        void axisChanged(void);

    // RVA: 0x921 | Ordinal: 2338
        void d_func(void);

    // RVA: 0x922 | Ordinal: 2339
        void d_func(void) const;

    // RVA: 0x1141 | Ordinal: 4418
        void metaObject(void) const;

    // RVA: 0x12FA | Ordinal: 4859
        void origin(void) const;

    // RVA: 0x12FC | Ordinal: 4861
        void originChanged(void);

    // RVA: 0x145A | Ordinal: 5211
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14ED | Ordinal: 5358
        void qt_metacast(char const *);

    // RVA: 0x1583 | Ordinal: 5508
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1813 | Ordinal: 6164
        void setAngle(double);

    // RVA: 0x182D | Ordinal: 6190
        void setAxis(class QVector3D const &);

    // RVA: 0x182E | Ordinal: 6191
        void setAxis(enum Qt::Axis);

    // RVA: 0x1B2D | Ordinal: 6958
        void setOrigin(class QVector3D const &);

    // RVA: 0x20A9 | Ordinal: 8362
        void tr(char const *, char const *, int);

    // RVA: 0x213C | Ordinal: 8509
        void trUtf8(char const *, char const *, int);

    // RVA: 0x202 | Ordinal: 515
        void _QGraphicsRotation(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSROTATION_HPP
