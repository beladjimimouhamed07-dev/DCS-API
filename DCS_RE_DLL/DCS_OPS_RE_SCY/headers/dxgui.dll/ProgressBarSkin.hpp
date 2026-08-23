#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ProgressBarSkin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {
namespace skin {

class ProgressBarSkin
{
public:

    // RVA: 0xA7 | Ordinal: 168
        void ProgressBarSkin(class gui::ProgressBar *);

    // RVA: 0x21F | Ordinal: 544
        void copyTo(class gui::skin::ProgressBarSkin *) const;

    // RVA: 0x366 | Ordinal: 871
        void getFillerSkin(void) const;

    // RVA: 0x4FC | Ordinal: 1277
        void getSkinData(void) const;
};

} // namespace skin
} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_PROGRESSBARSKIN_HPP
