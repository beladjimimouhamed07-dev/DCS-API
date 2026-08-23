#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: OverlayWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class OverlayWindow
{
public:

    // RVA: 0x9C | Ordinal: 157
        void OverlayWindow(void);

    // RVA: 0x1CC | Ordinal: 461
        void clone(void) const;

    // RVA: 0x1FF | Ordinal: 512
        void copyParams(class gui::OverlayWindow *) const;

    // RVA: 0x5B8 | Ordinal: 1465
        void getWidgetType(void) const;

    // RVA: 0x5D6 | Ordinal: 1495
        void getZOrder(void) const;

    // RVA: 0x7A2 | Ordinal: 1955
        void onVisibleChanged_(bool);

    // RVA: 0x7AB | Ordinal: 1964
        void onZOrderChanged_(int);

    // RVA: 0x986 | Ordinal: 2439
        void setZOrder(int);

    // RVA: 0x10B | Ordinal: 268
        void _OverlayWindow(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_OVERLAYWINDOW_HPP
