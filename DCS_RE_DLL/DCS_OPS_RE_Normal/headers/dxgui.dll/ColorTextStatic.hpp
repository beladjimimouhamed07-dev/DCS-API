#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: ColorTextStatic
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class ColorTextStatic
{
public:

    // RVA: 0x48 | Ordinal: 73
        void ColorTextStatic(void);

    // RVA: 0x1B3 | Ordinal: 436
        void clone(void) const;

    // RVA: 0x388 | Ordinal: 905
        void getFonts(void);

    // RVA: 0x4CE | Ordinal: 1231
        void getSkin(void) const;

    // RVA: 0x5A2 | Ordinal: 1443
        void getWidgetType(void) const;

    // RVA: 0x8AB | Ordinal: 2220
        void setFonts(class std::unordered_map<class ed::basic_string<wchar_t>, class ed::basic_string<wchar_t>, struct std::hash<class ed::basic_string<wchar_t>>, struct std::equal_to<class ed::basic_string<wchar_t>>, class ed::allocator<struct std::pair<class ed::basic_string<wchar_t> const, class ed::basic_string<wchar_t>>>> const &);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_COLORTEXTSTATIC_HPP
