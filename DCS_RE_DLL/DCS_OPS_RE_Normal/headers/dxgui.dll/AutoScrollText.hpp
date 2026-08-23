#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: AutoScrollText
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class AutoScrollText
{
public:

    // RVA: 0x35 | Ordinal: 54
        void AutoScrollText(void);

    // RVA: 0x148 | Ordinal: 329
        void addText(class ed::basic_string<wchar_t> const &, float);

    // RVA: 0x194 | Ordinal: 405
        void clear(void);

    // RVA: 0x1AD | Ordinal: 430
        void clone(void) const;

    // RVA: 0x4C8 | Ordinal: 1225
        void getSkin(void) const;

    // RVA: 0x64E | Ordinal: 1615
        void makeModelView_(class gui::GraphicCommands *) const;

    // RVA: 0xDA | Ordinal: 219
        void _AutoScrollText(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_AUTOSCROLLTEXT_HPP
