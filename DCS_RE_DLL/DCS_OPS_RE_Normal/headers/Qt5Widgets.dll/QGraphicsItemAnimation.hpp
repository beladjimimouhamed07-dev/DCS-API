#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsItemAnimation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsItemAnimation
{
public:

    // RVA: 0x72 | Ordinal: 115
        void QGraphicsItemAnimation(class QObject *);

    // RVA: 0x5B7 | Ordinal: 1464
        void afterAnimationStep(double);

    // RVA: 0x627 | Ordinal: 1576
        void beforeAnimationStep(double);

    // RVA: 0x70F | Ordinal: 1808
        void clear(void);

    // RVA: 0xD61 | Ordinal: 3426
        void horizontalScaleAt(double) const;

    // RVA: 0xD6A | Ordinal: 3435
        void horizontalShearAt(double) const;

    // RVA: 0xF7A | Ordinal: 3963
        void item(void) const;

    // RVA: 0x10D5 | Ordinal: 4310
        void matrixAt(double) const;

    // RVA: 0x113D | Ordinal: 4414
        void metaObject(void) const;

    // RVA: 0x13BA | Ordinal: 5051
        void posAt(double) const;

    // RVA: 0x13BB | Ordinal: 5052
        void posList(void) const;

    // RVA: 0x1456 | Ordinal: 5207
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14E9 | Ordinal: 5354
        void qt_metacast(char const *);

    // RVA: 0x157F | Ordinal: 5504
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x166C | Ordinal: 5741
        void reset(void);

    // RVA: 0x16ED | Ordinal: 5870
        void rotationAt(double) const;

    // RVA: 0x16EF | Ordinal: 5872
        void rotationList(void) const;

    // RVA: 0x1728 | Ordinal: 5929
        void scaleList(void) const;

    // RVA: 0x1A30 | Ordinal: 6705
        void setItem(class QGraphicsItem *);

    // RVA: 0x1B63 | Ordinal: 7012
        void setPosAt(double, class QPointF const &);

    // RVA: 0x1BA5 | Ordinal: 7078
        void setRotationAt(double, double);

    // RVA: 0x1BB8 | Ordinal: 7097
        void setScaleAt(double, double, double);

    // RVA: 0x1BF9 | Ordinal: 7162
        void setShearAt(double, double, double);

    // RVA: 0x1C50 | Ordinal: 7249
        void setStep(double);

    // RVA: 0x1CC5 | Ordinal: 7366
        void setTimeLine(class QTimeLine *);

    // RVA: 0x1CE6 | Ordinal: 7399
        void setTranslationAt(double, double, double);

    // RVA: 0x1D86 | Ordinal: 7559
        void shearList(void) const;

    // RVA: 0x2018 | Ordinal: 8217
        void timeLine(void) const;

    // RVA: 0x20A5 | Ordinal: 8358
        void tr(char const *, char const *, int);

    // RVA: 0x2138 | Ordinal: 8505
        void trUtf8(char const *, char const *, int);

    // RVA: 0x219C | Ordinal: 8605
        void transformAt(double) const;

    // RVA: 0x21A9 | Ordinal: 8618
        void translationList(void) const;

    // RVA: 0x2285 | Ordinal: 8838
        void verticalScaleAt(double) const;

    // RVA: 0x228E | Ordinal: 8847
        void verticalShearAt(double) const;

    // RVA: 0x234A | Ordinal: 9035
        void xTranslationAt(double) const;

    // RVA: 0x2351 | Ordinal: 9042
        void yTranslationAt(double) const;

    // RVA: 0x1F4 | Ordinal: 501
        void _QGraphicsItemAnimation(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSITEMANIMATION_HPP
