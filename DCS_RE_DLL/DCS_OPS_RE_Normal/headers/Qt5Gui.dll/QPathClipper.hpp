#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QPathClipper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QPathClipper
{
public:

    // RVA: 0x213 | Ordinal: 532
        void QPathClipper(class QPainterPath const &, class QPainterPath const &);

    // RVA: 0xBCA | Ordinal: 3019
        void clip(enum QPathClipper::Operation);

    // RVA: 0xC40 | Ordinal: 3137
        void contains(void);

    // RVA: 0xE70 | Ordinal: 3697
        void doClip(class QWingedEdge &, enum QPathClipper::ClipperMode);

    // RVA: 0x4E21 | Ordinal: 20002
        void handleCrossingEdges(class QWingedEdge &, double, enum QPathClipper::ClipperMode);

    // RVA: 0x4F93 | Ordinal: 20372
        void intersect(void);

    // RVA: 0x4F94 | Ordinal: 20373
        void intersect(class QPainterPath const &, class QRectF const &);

    // RVA: 0x542E | Ordinal: 21551
        void pathToRect(class QPainterPath const &, class QRectF *);

    // RVA: 0x4B9 | Ordinal: 1210
        void _QPathClipper(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QPATHCLIPPER_HPP
