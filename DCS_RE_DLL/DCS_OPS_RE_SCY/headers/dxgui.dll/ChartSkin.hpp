#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ChartSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ChartSkin
{
public:

    // RVA: 0x3F | Ordinal: 64
        void ChartSkin(class gui::Chart *);

    // RVA: 0x257 | Ordinal: 600
        void doRedraw(void);

    // RVA: 0x292 | Ordinal: 659
        void drawChildren_(void) const;

    // RVA: 0x295 | Ordinal: 662
        void drawCurve_(void) const;

    // RVA: 0x2A1 | Ordinal: 674
        void drawHorzGuides_(void) const;

    // RVA: 0x2B5 | Ordinal: 694
        void drawVertGuides_(void) const;

    // RVA: 0x63D | Ordinal: 1598
        void makeChildren_(class gui::GraphicCommands *) const;

    // RVA: 0x640 | Ordinal: 1601
        void makeCurve_(class gui::GraphicCommands *) const;

    // RVA: 0x64A | Ordinal: 1611
        void makeHorzGuides_(class gui::GraphicCommands *) const;

    // RVA: 0x660 | Ordinal: 1633
        void makeVertGuides_(class gui::GraphicCommands *) const;

    // RVA: 0x7DC | Ordinal: 2013
        void redrawCurve_(void);

    // RVA: 0x7E2 | Ordinal: 2019
        void redrawHorzGuides_(void);

    // RVA: 0x7E8 | Ordinal: 2025
        void redrawVertGuides_(void);

    // RVA: 0x7E9 | Ordinal: 2026
        void redraw_(void);

    // RVA: 0xDE | Ordinal: 223
        void _ChartSkin(void);
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_CHARTSKIN_HPP
