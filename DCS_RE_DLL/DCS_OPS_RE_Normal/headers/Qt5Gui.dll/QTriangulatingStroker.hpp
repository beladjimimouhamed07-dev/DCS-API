#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTriangulatingStroker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTriangulatingStroker
{
public:

    // RVA: 0x3A2 | Ordinal: 931
        void QTriangulatingStroker(void);

    // RVA: 0xA1B | Ordinal: 2588
        void arcPoints(float, float, float, float, float, float, class QVarLengthArray<float, 256> &);

    // RVA: 0xCD8 | Ordinal: 3289
        void cubicTo(double const *);

    // RVA: 0xF8D | Ordinal: 3982
        void emitLineSegment(float, float, float, float);

    // RVA: 0xFAF | Ordinal: 4016
        void endCap(double const *);

    // RVA: 0xFB0 | Ordinal: 4017
        void endCapOrJoinClosed(double const *, double const *, bool, bool);

    // RVA: 0x50D6 | Ordinal: 20695
        void join(double const *);

    // RVA: 0x5174 | Ordinal: 20853
        void lineTo(double const *);

    // RVA: 0x530D | Ordinal: 21262
        void moveTo(double const *);

    // RVA: 0x535D | Ordinal: 21342
        void normalVector(float, float, float, float, float *, float *);

    // RVA: 0x54C8 | Ordinal: 21705
        void process(class QVectorPath const &, class QPen const &, class QRectF const &, class QFlags<enum QPainter::RenderHint>);

    // RVA: 0x5A0C | Ordinal: 23053
        void setInvScale(double);

    // RVA: 0x611A | Ordinal: 24859
        void vertexCount(void) const;

    // RVA: 0x6121 | Ordinal: 24866
        void vertices(void) const;

    // RVA: 0x54F | Ordinal: 1360
        void _QTriangulatingStroker(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTRIANGULATINGSTROKER_HPP
