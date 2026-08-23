#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QStroker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStroker
{
public:

    // RVA: 0x31A | Ordinal: 795
        void QStroker(void);

    // RVA: 0xB48 | Ordinal: 2889
        void capForJoinMode(enum QStroker::LineJoinMode);

    // RVA: 0xB50 | Ordinal: 2897
        void capStyle(void) const;

    // RVA: 0xB51 | Ordinal: 2898
        void capStyleMode(void) const;

    // RVA: 0xF86 | Ordinal: 3975
        void emitCubicTo(double, double, double, double, double, double);

    // RVA: 0xF8E | Ordinal: 3983
        void emitLineTo(double, double);

    // RVA: 0xF91 | Ordinal: 3986
        void emitMoveTo(double, double);

    // RVA: 0x10E3 | Ordinal: 4324
        void forceOpen(void);

    // RVA: 0x50D7 | Ordinal: 20696
        void joinForJoinMode(enum QStroker::LineJoinMode);

    // RVA: 0x50D8 | Ordinal: 20697
        void joinModeForCap(enum Qt::PenCapStyle);

    // RVA: 0x50D9 | Ordinal: 20698
        void joinModeForJoin(enum Qt::PenJoinStyle);

    // RVA: 0x50DA | Ordinal: 20699
        void joinPoints(double, double, class QLineF const &, enum QStroker::LineJoinMode);

    // RVA: 0x50DF | Ordinal: 20704
        void joinStyle(void) const;

    // RVA: 0x50E0 | Ordinal: 20705
        void joinStyleMode(void) const;

    // RVA: 0x52DF | Ordinal: 21216
        void miterLimit(void) const;

    // RVA: 0x54CE | Ordinal: 21711
        void processCurrentSubpath(void);

    // RVA: 0x5895 | Ordinal: 22678
        void setCapStyle(enum Qt::PenCapStyle);

    // RVA: 0x59AD | Ordinal: 22958
        void setForceOpen(bool);

    // RVA: 0x5A17 | Ordinal: 23064
        void setJoinStyle(enum Qt::PenJoinStyle);

    // RVA: 0x5A81 | Ordinal: 23170
        void setMiterLimit(double);

    // RVA: 0x5BC7 | Ordinal: 23496
        void setStrokeWidth(double);

    // RVA: 0x5E28 | Ordinal: 24105
        void strokeWidth(void) const;

    // RVA: 0x522 | Ordinal: 1315
        void _QStroker(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSTROKER_HPP
