#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPainterPathStroker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPainterPathStroker
{
public:

    // RVA: 0x206 | Ordinal: 519
        void QPainterPathStroker(class QPen const &);

    // RVA: 0x207 | Ordinal: 520
        void QPainterPathStroker(void);

    // RVA: 0xB4E | Ordinal: 2895
        void capStyle(void) const;

    // RVA: 0xCC9 | Ordinal: 3274
        void createStroke(class QPainterPath const &) const;

    // RVA: 0xD07 | Ordinal: 3336
        void curveThreshold(void) const;

    // RVA: 0xD5A | Ordinal: 3419
        void d_func(void);

    // RVA: 0xD5B | Ordinal: 3420
        void d_func(void) const;

    // RVA: 0xD9C | Ordinal: 3485
        void dashOffset(void) const;

    // RVA: 0xD9F | Ordinal: 3488
        void dashPattern(void) const;

    // RVA: 0x50DD | Ordinal: 20702
        void joinStyle(void) const;

    // RVA: 0x52DD | Ordinal: 21214
        void miterLimit(void) const;

    // RVA: 0x5893 | Ordinal: 22676
        void setCapStyle(enum Qt::PenCapStyle);

    // RVA: 0x58F1 | Ordinal: 22770
        void setCurveThreshold(double);

    // RVA: 0x58F8 | Ordinal: 22777
        void setDashOffset(double);

    // RVA: 0x58FB | Ordinal: 22780
        void setDashPattern(class QVector<double> const &);

    // RVA: 0x58FC | Ordinal: 22781
        void setDashPattern(enum Qt::PenStyle);

    // RVA: 0x5A15 | Ordinal: 23062
        void setJoinStyle(enum Qt::PenJoinStyle);

    // RVA: 0x5A7F | Ordinal: 23168
        void setMiterLimit(double);

    // RVA: 0x5CB6 | Ordinal: 23735
        void setWidth(double);

    // RVA: 0x6154 | Ordinal: 24917
        void width(void) const;

    // RVA: 0x4B6 | Ordinal: 1207
        void _QPainterPathStroker(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPAINTERPATHSTROKER_HPP
