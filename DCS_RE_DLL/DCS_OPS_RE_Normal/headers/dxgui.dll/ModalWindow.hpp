#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ModalWindow
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ModalWindow
{
public:

    // RVA: 0x9A | Ordinal: 155
        void ModalWindow(bool);

    // RVA: 0x1CB | Ordinal: 460
        void clone(void) const;

    // RVA: 0x1FE | Ordinal: 511
        void copyParams(class gui::ModalWindow *) const;

    // RVA: 0x255 | Ordinal: 598
        void doModal_(void);

    // RVA: 0x430 | Ordinal: 1073
        void getLockFlow(void) const;

    // RVA: 0x5B7 | Ordinal: 1464
        void getWidgetType(void) const;

    // RVA: 0x604 | Ordinal: 1541
        void kill(void);

    // RVA: 0x687 | Ordinal: 1672
        void onCloseButton_(void);

    // RVA: 0x7A1 | Ordinal: 1954
        void onVisibleChanged_(bool);

    // RVA: 0x8E2 | Ordinal: 2275
        void setLockFlow(bool);

    // RVA: 0x108 | Ordinal: 265
        void _ModalWindow(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_MODALWINDOW_HPP
