#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: TooltipSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class TooltipSkin
{
public:

    // RVA: 0xC9 | Ordinal: 202
        void TooltipSkin(class gui::Tooltip *);

    // RVA: 0x17A | Ordinal: 379
        void calcTextSize_(enum gui::skin::InteractiveState, int) const;

    // RVA: 0x503 | Ordinal: 1284
        void getSkinData(void) const;
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_TOOLTIPSKIN_HPP
