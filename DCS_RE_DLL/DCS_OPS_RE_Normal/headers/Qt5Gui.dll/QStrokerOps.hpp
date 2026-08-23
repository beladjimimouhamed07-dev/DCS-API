#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QStrokerOps
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStrokerOps
{
public:

    // RVA: 0x31B | Ordinal: 796
        void QStrokerOps(void);

    // RVA: 0xA6D | Ordinal: 2670
        void begin(void *);

    // RVA: 0xBD9 | Ordinal: 3034
        void clipRect(void) const;

    // RVA: 0xCD7 | Ordinal: 3288
        void cubicTo(double, double, double, double, double, double);

    // RVA: 0xD08 | Ordinal: 3337
        void curveThreshold(void) const;

    // RVA: 0xF87 | Ordinal: 3976
        void emitCubicTo(double, double, double, double, double, double);

    // RVA: 0xF8F | Ordinal: 3984
        void emitLineTo(double, double);

    // RVA: 0xF92 | Ordinal: 3987
        void emitMoveTo(double, double);

    // RVA: 0xFA9 | Ordinal: 4010
        void end(void);

    // RVA: 0x5173 | Ordinal: 20852
        void lineTo(double, double);

    // RVA: 0x530C | Ordinal: 21261
        void moveTo(double, double);

    // RVA: 0x58AF | Ordinal: 22704
        void setClipRect(class QRectF const &);

    // RVA: 0x58E3 | Ordinal: 22756
        void setCubicToHook(void (__cdecl *)(double, double, double, double, double, double, void *));

    // RVA: 0x58F2 | Ordinal: 22771
        void setCurveThreshold(double);

    // RVA: 0x58F3 | Ordinal: 22772
        void setCurveThresholdFromTransform(class QTransform const &);

    // RVA: 0x5A41 | Ordinal: 23106
        void setLineToHook(void (__cdecl *)(double, double, void *));

    // RVA: 0x5A90 | Ordinal: 23185
        void setMoveToHook(void (__cdecl *)(double, double, void *));

    // RVA: 0x5E24 | Ordinal: 24101
        void strokeEllipse(class QRectF const &, void *, class QTransform const &);

    // RVA: 0x5E26 | Ordinal: 24103
        void strokePath(class QPainterPath const &, void *, class QTransform const &);

    // RVA: 0x5E27 | Ordinal: 24104
        void strokePolygon(class QPointF const *, int, bool, void *, class QTransform const &);

    // RVA: 0x523 | Ordinal: 1316
        void _QStrokerOps(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSTROKEROPS_HPP
