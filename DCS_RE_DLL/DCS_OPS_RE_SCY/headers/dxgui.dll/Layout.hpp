#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Layout
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Layout
{
public:

    // RVA: 0x84 | Ordinal: 133
        void Layout(void);

    // RVA: 0x162 | Ordinal: 355
        void calcMaxSize(void) const;

    // RVA: 0x1C0 | Ordinal: 449
        void clone(void) const;

    // RVA: 0x244 | Ordinal: 581
        void destroy(class gui::Layout *);

    // RVA: 0x24E | Ordinal: 591
        void destroy_(void);

    // RVA: 0x344 | Ordinal: 837
        void getContainer(void) const;

    // RVA: 0x43A | Ordinal: 1083
        void getMaxSize(void) const;

    // RVA: 0x44C | Ordinal: 1101
        void getMinSize(void) const;

    // RVA: 0x47F | Ordinal: 1152
        void getPrefSize(void) const;

    // RVA: 0x5DB | Ordinal: 1500
        void handler(void) const;

    // RVA: 0x880 | Ordinal: 2177
        void setContainer(class gui::WidgetHandler *);

    // RVA: 0x9F4 | Ordinal: 2549
        void updateSize(void);

    // RVA: 0xFD | Ordinal: 254
        void _Layout(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_LAYOUT_HPP
