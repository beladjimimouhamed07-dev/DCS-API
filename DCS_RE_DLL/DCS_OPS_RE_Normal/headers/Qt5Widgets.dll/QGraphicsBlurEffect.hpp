#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QGraphicsBlurEffect
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGraphicsBlurEffect
{
public:

    // RVA: 0x65 | Ordinal: 102
        void QGraphicsBlurEffect(class QObject *);

    // RVA: 0x637 | Ordinal: 1592
        void blurHints(void) const;

    // RVA: 0x639 | Ordinal: 1594
        void blurHintsChanged(class QFlags<enum QGraphicsBlurEffect::BlurHint>);

    // RVA: 0x63A | Ordinal: 1595
        void blurRadius(void) const;

    // RVA: 0x63D | Ordinal: 1598
        void blurRadiusChanged(double);

    // RVA: 0x64D | Ordinal: 1614
        void boundingRectFor(class QRectF const &) const;

    // RVA: 0x8FB | Ordinal: 2300
        void d_func(void);

    // RVA: 0x8FC | Ordinal: 2301
        void d_func(void) const;

    // RVA: 0xA8B | Ordinal: 2700
        void draw(class QPainter *);

    // RVA: 0x1138 | Ordinal: 4409
        void metaObject(void) const;

    // RVA: 0x1451 | Ordinal: 5202
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14E4 | Ordinal: 5349
        void qt_metacast(char const *);

    // RVA: 0x157A | Ordinal: 5499
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1842 | Ordinal: 6211
        void setBlurHints(class QFlags<enum QGraphicsBlurEffect::BlurHint>);

    // RVA: 0x1844 | Ordinal: 6213
        void setBlurRadius(double);

    // RVA: 0x20A0 | Ordinal: 8353
        void tr(char const *, char const *, int);

    // RVA: 0x2133 | Ordinal: 8500
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1EB | Ordinal: 492
        void _QGraphicsBlurEffect(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QGRAPHICSBLUREFFECT_HPP
