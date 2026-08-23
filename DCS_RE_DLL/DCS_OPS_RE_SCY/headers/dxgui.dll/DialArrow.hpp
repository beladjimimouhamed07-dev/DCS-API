#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: DialArrow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class DialArrow
{
public:

    // RVA: 0x5B | Ordinal: 92
        void DialArrow(class gui::Dial *);

    // RVA: 0x2A4 | Ordinal: 677
        void drawModelView_(void) const;

    // RVA: 0x30F | Ordinal: 784
        void getAngle(void) const;

    // RVA: 0x3F2 | Ordinal: 1011
        void getInteractiveState(void) const;

    // RVA: 0x64F | Ordinal: 1616
        void makeModelView_(class gui::GraphicCommands *) const;

    // RVA: 0x864 | Ordinal: 2149
        void setAngle(double);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_DIALARROW_HPP
