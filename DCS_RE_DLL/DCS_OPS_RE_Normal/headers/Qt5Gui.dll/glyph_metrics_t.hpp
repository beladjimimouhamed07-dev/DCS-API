#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: glyph_metrics_t
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class glyph_metrics_t
{
public:

    // RVA: 0x3E6 | Ordinal: 999
        void glyph_metrics_t(struct QFixed, struct QFixed, struct QFixed, struct QFixed, struct QFixed, struct QFixed);

    // RVA: 0x3E7 | Ordinal: 1000
        void glyph_metrics_t(void);

    // RVA: 0x50B5 | Ordinal: 20662
        void isValid(void) const;

    // RVA: 0x5135 | Ordinal: 20790
        void leftBearing(void) const;

    // RVA: 0x5763 | Ordinal: 22372
        void rightBearing(void) const;

    // RVA: 0x603A | Ordinal: 24635
        void transformed(class QTransform const &) const;
};

// DCS_OPS_RE_QT5GUI.DLL_GLYPH_METRICS_T_HPP
