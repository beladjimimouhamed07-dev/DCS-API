#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QDashStroker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDashStroker
{
public:

    // RVA: 0xD8 | Ordinal: 217
        void QDashStroker(class QStroker *);

    // RVA: 0xA66 | Ordinal: 2663
        void begin(void *);

    // RVA: 0xD9B | Ordinal: 3484
        void dashOffset(void) const;

    // RVA: 0xD9E | Ordinal: 3487
        void dashPattern(void) const;

    // RVA: 0xFA2 | Ordinal: 4003
        void end(void);

    // RVA: 0x542F | Ordinal: 21552
        void patternForStyle(enum Qt::PenStyle);

    // RVA: 0x54CD | Ordinal: 21710
        void processCurrentSubpath(void);

    // RVA: 0x58F7 | Ordinal: 22776
        void setDashOffset(double);

    // RVA: 0x58FA | Ordinal: 22779
        void setDashPattern(class QVector<double> const &);

    // RVA: 0x5A7E | Ordinal: 23167
        void setMiterLimit(double);

    // RVA: 0x5BC6 | Ordinal: 23495
        void setStrokeWidth(double);

    // RVA: 0x5E29 | Ordinal: 24106
        void stroker(void) const;

    // RVA: 0x426 | Ordinal: 1063
        void _QDashStroker(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QDASHSTROKER_HPP
