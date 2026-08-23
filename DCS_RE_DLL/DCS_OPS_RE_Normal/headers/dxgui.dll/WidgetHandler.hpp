#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: WidgetHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class WidgetHandler
{
public:

    // RVA: 0x22A | Ordinal: 555
        void create(class gui::Widget *);

    // RVA: 0x2FE | Ordinal: 767
        void get(class gui::WidgetHandler *);

    // RVA: 0x2FF | Ordinal: 768
        void get(class gui::WidgetHandler const *);

    // RVA: 0x7F4 | Ordinal: 2037
        void release(class gui::WidgetHandler *);

    // RVA: 0x98B | Ordinal: 2444
        void shutdown(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_WIDGETHANDLER_HPP
