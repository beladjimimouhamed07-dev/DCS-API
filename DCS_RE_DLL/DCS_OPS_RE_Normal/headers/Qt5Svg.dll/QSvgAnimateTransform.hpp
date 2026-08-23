#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgAnimateTransform
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgAnimateTransform
{
public:

    // RVA: 0x5 | Ordinal: 6
        void QSvgAnimateTransform(class QSvgAnimateTransform &&);

    // RVA: 0x6 | Ordinal: 7
        void QSvgAnimateTransform(class QSvgAnimateTransform const &);

    // RVA: 0x7 | Ordinal: 8
        void QSvgAnimateTransform(int, int, int);

    // RVA: 0x116 | Ordinal: 279
        void additiveType(void) const;

    // RVA: 0x117 | Ordinal: 280
        void animActive(double);

    // RVA: 0x11F | Ordinal: 288
        void apply(class QPainter *, class QSvgNode const *, struct QSvgExtraStates &);

    // RVA: 0x13C | Ordinal: 317
        void clearTransformApplied(void);

    // RVA: 0x1C1 | Ordinal: 450
        void resolveMatrix(class QSvgNode const *);

    // RVA: 0x1C7 | Ordinal: 456
        void revert(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x1D8 | Ordinal: 473
        void setArgs(enum QSvgAnimateTransform::TransformType, enum QSvgAnimateTransform::Additive, class QVector<double> const &);

    // RVA: 0x1EE | Ordinal: 495
        void setFreeze(bool);

    // RVA: 0x1FF | Ordinal: 512
        void setRepeatCount(double);

    // RVA: 0x238 | Ordinal: 569
        void transformApplied(void) const;

    // RVA: 0x23F | Ordinal: 576
        void type(void) const;

    // RVA: 0x75 | Ordinal: 118
        void _QSvgAnimateTransform(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGANIMATETRANSFORM_HPP
