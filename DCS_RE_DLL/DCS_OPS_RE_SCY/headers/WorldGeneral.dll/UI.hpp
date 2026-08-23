#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: UI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace warehouse_manager {

class UI
{
public:

    // RVA: 0x646 | Ordinal: 1607
        void change_stats_target(class IwWarehouse *);

    // RVA: 0x76B | Ordinal: 1900
        void destroy(void);

    // RVA: 0x979 | Ordinal: 2426
        void hide(void);

    // RVA: 0xBFC | Ordinal: 3069
        void set_wstype_to_display_name_resolver(class std::function<class std::basic_string_view<char, struct std::char_traits<char>> __cdecl(class wsType const &)> &&);

    // RVA: 0xBFE | Ordinal: 3071
        void show_stats(void);
};

} // namespace warehouse_manager

// DCS_OPS_RE_WORLDGENERAL.DLL_UI_HPP
