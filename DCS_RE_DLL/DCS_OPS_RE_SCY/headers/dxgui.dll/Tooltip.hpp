#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Tooltip
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Tooltip
{
public:

    // RVA: 0xC8 | Ordinal: 201
        void Tooltip(class gui::WindowsManager *);

    // RVA: 0x167 | Ordinal: 360
        void calcScreenPosition(void) const;

    // RVA: 0x497 | Ordinal: 1176
        void getRootSurfaceId(void) const;

    // RVA: 0x4F3 | Ordinal: 1268
        void getSkin(void) const;

    // RVA: 0x787 | Ordinal: 1928
        void onTextChanged_(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_TOOLTIP_HPP
