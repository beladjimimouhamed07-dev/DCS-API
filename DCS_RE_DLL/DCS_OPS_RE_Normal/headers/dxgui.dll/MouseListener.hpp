#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: MouseListener
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace GUI {

class MouseListener
{
public:

    // RVA: 0x6E3 | Ordinal: 1764
        void onMouseDoubleClick(int, int, enum gui::MouseButton);

    // RVA: 0x6F3 | Ordinal: 1780
        void onMouseDown(int, int, enum gui::MouseButton);

    // RVA: 0x727 | Ordinal: 1832
        void onMouseMove(int, int);

    // RVA: 0x73D | Ordinal: 1854
        void onMouseUp(int, int, enum gui::MouseButton);

    // RVA: 0x747 | Ordinal: 1864
        void onMouseWheel(int, int, int);

    // RVA: 0x109 | Ordinal: 266
        void _MouseListener(void);
};

} // namespace GUI
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MOUSELISTENER_HPP
